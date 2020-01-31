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
    void supprimerProduitAuMagasin(Produit* p1) ;
    void affichageProduitDuMagasin();
    void detailProduitDansMagasin(string nom); 
    void UpdateQuantiteProduitDansMagasin(string nom, int quantite);

    void ajoutClientAuMagasin(Client* client); 
    void afficheClientsDuMagasin(); 
    void afficheUnClientDuMagasin(int leClient);
    void ajoutProduitDansPanierClient(Client *c, Produit *p);
    void supprimerProduitDuPanierClient(Produit *p, Client *c); 
    void modifierQuantiteProduitClient(Produit *p, int quantite, Client *c);

    void validerCommande(Commande* commande);
    void miseAJourDuStatusCommande(Commande* commande);  
    void afficheToutesLesCommandes(); 
    void afficheToutesLesCommandesAUnClient(Client* client); 
    void afficheToutesLesCommandesValidee(); 
    void ajoutCommande(Commande* commande);
    
    Commande* getCommande(int nb);
    Client* getClient(int nb);
    Produit* getIdProduit(int id); 


  private:
    vector<Produit*> m_liste_produits;
    vector<Client*> m_liste_clients;
    vector<Commande*> m_liste_commandes; 
    vector<Commande*> m_liste_commandes_validee;

};


#endif // fin _magasin_h
