/** 
* File:     client.h 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  Déclaration de la classe Client
*/

#ifndef _client_h
#define _client_h


#include <iostream>
#include <string>
#include <vector>
#include "produit.h"

using namespace std;
static int sNextid =0;

class Client{

    public :
        Client(string nom, string prenom);

        int getIdClient();
        string getNom();
        string getPrenom();
        vector<Produit*> getPanier();

        void addProduit(Produit* p);
        void viderPanier();
        void modifierQuantiteProduit(Produit* p, int quantite);
        void supprimerProduit(Produit* p);

        void toStringClient();
        void toStringProduitClient();
        friend std::ostream& operator << (std::ostream &output, Client c){
            string s= "\nId : " + to_string(c.getIdClient()) + " | "+ c.getNom() +" "+c.getPrenom()+"\n";
    
            if(c.getPanier().empty())
            {
                s+="Aucun articles dans le panier\n";
            }
            else
            {
                for(Produit* p:c.getPanier())
                {
                    s+="Produit\nId : "+ to_string(p->getIdProduit())+ "\n"+ p->getTitre()
                        +"\n"+ p->getDescription() +"\nPrix : "+ to_string(p->getPrix()) + "euros\nQuantite :"+to_string(p->getQuantite()) +"\n" ;
                }
            }
            output << s; 
            return output;
        }

    
    private:
        int m_idClient;        
        string m_prenom;
        string m_nom;
        vector<Produit*> m_panier;       
};

#endif // _client_h