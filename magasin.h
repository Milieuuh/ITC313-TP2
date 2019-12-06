/** 
* File:     magasin.h 
* Author:   GENTON Emilie
* Date:     06/12/2019 
* Summary:  Déclaration de la classe Magasin
*/

#ifndef _magasin_h
#define _magasin_h

#include <iostream>
#include <string>
#include <vector>

#include "produit.h"
#include "client.h"
#include "commande.h"
using namespace std;


class Magasin{
  public:
    Magasin();
    void ajoutProduitAuMagasin(Produit* p1); 
    void affichageProduitDuMagasin();
    void detailProduitDansMagasin(string nom); 
    void UpdateQuantiteProduitDansMagasin(string nom, int quantite);

    void ajoutClientAuMagasin(Client* client); 
    void afficheClientsDuMagasin(); 
    void afficheUnClientDuMagasin(int leClient);
    void ajoutProduitDansPanierClient(Client *c, Produit *p);
    void supprimerProduitDuPanierClient(Produit *p, Client c); 
  
  private:
    vector<Produit*> m_liste_produits;
    vector<Client*> m_liste_clients;
    vector<Commande*> m_liste_commandes; 

};


#endif // fin _magasin_h
