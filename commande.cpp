/**
* File:     commande.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe commande
*/

#include "commande.h"

Commande::Commande(Client* c1, vector<Produit*> produit, bool statut) : m_client(c1), m_produitsCommande(produit), m_statutCommande(statut), m_prixTotal(0)
{
    m_idCommande=++NextIdCommande;

    if(m_produitsCommande.empty())
    {
       
    }
    else
    {
        for(Produit* p: m_produitsCommande)
        {
            setPrixTotal(p->getQuantite(),p->getPrix());
        }
    }  
   
}

Commande::Commande()
{
    
}


//GETTER
int Commande::getIdCommande()
{
    return m_idCommande;
}

Client* Commande::getClient()
{
    return m_client;
}

vector<Produit*> Commande::getCommande()
{
    return m_produitsCommande;
}

bool Commande::getStatus()
{
    return m_statutCommande;
}

double Commande::getPrixTotal()
{
    return m_prixTotal;
}

//SETTER
void Commande::setStatus(bool status)
{
    m_statutCommande=status;
}


void Commande::setPrixTotal(int quantite, double prix)
{
    m_prixTotal+=(quantite*prix);
}
  

void Commande::setCommande(vector<Produit*> produitCommande)
{  
    m_produitsCommande.clear();

    for(Produit* p:produitCommande)
    {
        m_produitsCommande.push_back(p);
        setPrixTotal(p->getQuantite(),p->getPrix());
    }

    cout<<"Commande mise à jour";
}

void Commande::toStringCommande()
{  
    cout<<"    Commande "<<getIdCommande()<<"     -----     Statut : ";
    
    if(getStatus()==false)
    {
        cout<<"En cours"<<endl;
    }
    else
    {
        cout<<"Validee"<<endl;
    }
    
    
    m_client->toStringClient();
    cout<<"Produits : \n-------\n\nNOM          QUANTITE          PRIX\n";

    for(Produit* p:m_produitsCommande)
    {
        cout<<p->getTitre()<<"            "<<p->getQuantite()<<"        "<<p->getQuantite()*p->getPrix()<<" euros\n";
    }
    cout<<"--------------Total : "<<getPrixTotal()<<" euros \n";

   
}