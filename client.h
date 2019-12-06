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
        Client(); 

        int getIdClient();
        string getNom();
        string getPrenom();
        vector<Produit> getPanier();

        void toStringClient();

    private:
        int m_idClient;
        string m_prenom;
        string m_nom;
        vector<Produit> m_panier;
};

#endif // _client_h