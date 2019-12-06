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

//Affichage
void Client::toStringClient()
{
    cout<<"\n Id : "<<getIdClient()<<" | "<<getNom()<<" "<<getPrenom();
}

void Client::toStringProduitClient()
{
    toStringClient();
    cout<<"\n";
    for(Produit* p:m_panier)
    {
        cout<<p->getTitre()<<" - "<<p->getPrix()<<" euros";
    }
}