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
            string s= "\n Id : ";
            s+=c.getIdClient() ;
            s+=" | ";
            s+= c.getNom();
            s+=" ";
            s+=c.getPrenom(); 
            s +="\n ";
            if(c.getPanier().empty())
            {
                s+="Aucun articles dans le panier\n";
            }
            else
            {
                for(Produit* p:c.getPanier())
                {
                    s+="Produit\nId : ";
                    s+=p->getIdProduit();
                    s+="\n";
                    s+=p->getTitre();
                    s+="\n";
                    s+=p->getDescription();
                    s+="\nPrix : ";
                    s+=p->getPrix();
                    s+=" € ";
                    s+="\nQuantité : ";
                    s+=p->getQuantite();
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