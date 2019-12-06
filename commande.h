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

        //Commande(Client c1, vector<Produit> produit, bool statut=false);
        Commande();
       /* int getIdCommande();
        Client getClient();
        vector<Produit> getCommande();
        bool getStatus();
        void setStatus(bool status);
        void setCommande(vector<Produit> commande);*/

    private:
       /* int m_idCommande;
       // Client m_client;
        vector<Produit> m_produits;
        bool m_statutCommande;*/
};

#endif // _commande_h