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
static int NextIdCommande=0;

class Commande{

    public :
        Commande(Client* c1, vector<Produit*> produit, bool statut=false);

        int getIdCommande();
        Client* getClient();
        vector<Produit*> getCommande();
        bool getStatus();
        void setStatus(bool status);
        void setCommande(vector<Produit*> produitCommande);
        void toStringCommande();
        void setPrixTotal(int quantite, double prix);
        double getPrixTotal();

        friend std::ostream& operator << (std::ostream &output, Commande c){
            string s = "\nInformations de la commande\nId : "+ to_string(c.getIdCommande()) +"  ----   Statut : ";
            if(c.getStatus()==0)
            {
                s+="En cours\n";
            }
            else
            {
                s+="livree\n";
            }

             s+="Articles commandes :\n";

             
            output << s; 
            return output;
        }

    private:
        int m_idCommande;
        bool m_statutCommande;
        Client* m_client;
        vector<Produit*> m_produitsCommande;
        double m_prixTotal;
       
};

#endif // _commande_h