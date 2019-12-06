#include "magasin.h"
#include "produit.h"
#include "client.h"

int main() {
    Magasin EasyStore; 

    //PRODUIT 
    Produit p1("PS4",249.99, "Console de jeu Sony", 10);    
    Produit p2("Switch",249.99, "Console de jeu Nitendo", 10);
    p1.toString();

    //Client
    Client c1("Jack","Jean");
    Client c2("Jack","Jeannine");
    Client c3("Poussi","Feu");

    c1.toStringClient();
    c2.toStringClient();
    c3.toStringClient();

    EasyStore.ajoutProduitAuMagasin(&p1); 
    EasyStore.ajoutProduitAuMagasin(&p2); 
    EasyStore.affichageProduitDuMagasin(); 

    cout << "\nAVANT " ; 
    EasyStore.detailProduitDansMagasin("PS4");
    EasyStore.UpdateQuantiteProduitDansMagasin("PS4", 11); 
    
    cout << "\nAPRES " ; 
    EasyStore.detailProduitDansMagasin("PS4"); 


    EasyStore.ajoutClientAuMagasin(&c1);
    EasyStore.ajoutClientAuMagasin(&c2);
    EasyStore.ajoutClientAuMagasin(&c3);

    EasyStore.afficheClientsDuMagasin(); 
    EasyStore.afficheUnClientDuMagasin(1);




    return 0;
}