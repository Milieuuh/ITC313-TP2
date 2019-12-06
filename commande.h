/** 
* File:     commande.h 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  Déclaration de la classe Commande
*/

#ifndef _commande_h
#define _commande_h

#include <iostream>
#include <string>
#include <vector>
#include "produit.h"
#include "client.h"

using namespace std;

class Commande{

    public :
        Commande(Client client, vector<Produit> produit, bool statusCommande=false);

    private:
        int m_idCommande;
        Client m_client;
        vector<Produit> m_produits;
        bool m_statutCommande;
};

#endif // _client_h