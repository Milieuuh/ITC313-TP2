/**
* File:     commande.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe commande
*/

#include "commande.h"

Commande::Commande(Client* c1, vector<Produit*> produit, bool statut)
{
    m_client=c1;
    m_produits=produit;
    m_statutCommande=statut;
    m_idCommande=1;
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
    return m_produits;
}

/*bool Commande::getStatus()
{
    return m_statutCommande;
}

//SETTER
void Commande::setStatus(bool status)
{
    m_statutCommande=status;
}

void Commande::setCommande(vector<Produit> commande)
{
    cout<<"Encours";
}*/