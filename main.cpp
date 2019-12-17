#include "magasin.h"
#include "produit.h"
#include "client.h"

int main() {

    //Création du magasin
    Magasin EasyStore; 

    //PRODUIT 
    Produit p1("PS4",249.99, "Console de jeu Sony", 10);    
    Produit p2("Switch",249.99, "Console de jeu Nitendo", 10);
    Produit p3("DS",149.99, "Console de jeu Nitendo", 20);

    //Client
    Client c1("Jack","Jean");
    Client c2("Jack","Jeannine");
    Client c3("Poussi","Feu");

    EasyStore.ajoutProduitAuMagasin(&p1); 
    EasyStore.ajoutProduitAuMagasin(&p2); 
    EasyStore.ajoutProduitAuMagasin(&p3); 
    EasyStore.affichageProduitDuMagasin(); 

    EasyStore.ajoutClientAuMagasin(&c1);
    EasyStore.ajoutClientAuMagasin(&c2);
    EasyStore.ajoutClientAuMagasin(&c3);

    EasyStore.afficheClientsDuMagasin(); 
    EasyStore.afficheUnClientDuMagasin(1);

    //Ajout au panier des clients
    c1.addProduit(&p1);
    c1.addProduit(&p2);
    c2.addProduit(&p1);
    c3.addProduit(&p3);

    cout<<c1;
    cout<<c2;
    cout<<c3;


    Commande commande(&c1,c1.getPanier());
    commande.toStringCommande();
    //cout<<commande.getClient();

    return 0;
}