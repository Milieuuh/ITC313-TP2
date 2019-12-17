/**
* File:     client.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe client
*/

#include "client.h"


//Constructors
Client::Client(string nom, string prenom){
    m_idClient=++sNextid;
    m_nom=nom;
    m_prenom=prenom;
}

//GETTER
int Client::getIdClient()
{    
    return m_idClient;
}

string Client::getNom()
{
    return m_nom;
}

string Client::getPrenom()
{
    return m_prenom;
}

vector<Produit*> Client::getPanier()
{
    return m_panier;
}

//SET
void Client::addProduit(Produit* p)
{
    m_panier.push_back(p);    
}

void Client::viderPanier()
{
    for(Produit* p:m_panier)
    {
        delete p;
    }   
}

void Client::modifierQuantiteProduit(Produit* p, int quantite)
{
    for(Produit* p1:m_panier)
    {
        if(p1==p)
        {
            p1->setQuantite(quantite);
        }
    }
}

void Client::supprimerProduit(Produit* p)
{
    for(int i=0;i<m_panier.size();i++)
    {
        
        if(m_panier.at(i)==p)
        {
            m_panier.at(i) = nullptr;
            delete  m_panier.at(i);
        }
    }

}

//Affichage
void Client::toStringClient()
{
    cout<<"\n Id : "<<getIdClient()<<" | "<<getNom()<<" "<<getPrenom();
}

/*void Client::toStringProduitClient()
{
    toStringClient();
    cout<<"\n";
    if(m_panier.empty())
    {
        cout<<"Aucun articles dans le panier\n";
    }
    else
    {
        for(Produit* p:m_panier)
        {
            p->toString();
        }
    }
    
}*/

