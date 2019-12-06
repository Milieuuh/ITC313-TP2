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

class Client{

    public :
        Client(string nom, string prenom);
        Client(); 

    private:
        int m_idClient;
        string m_prenom;
        string m_nom;
        vector<Produit> m_panier;
};

#endif // _client_h