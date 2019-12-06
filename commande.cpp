/**
* File:     commande.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe commande
*/

#include "commande.h"

Commande::Commande(Client client, vector<Produit> produit, bool statut){
    m_client=client;
    m_produits=produit;
    m_statutCommande=statut;
}