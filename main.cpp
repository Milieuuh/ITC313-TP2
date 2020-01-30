#define __USE_MINGW_ANSI_STDIO 0
#include "magasin.h"
#include "produit.h"
#include "client.h"
#include "menu.h"

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

   // EasyStore.affichageProduitDuMagasin(); 

    EasyStore.ajoutClientAuMagasin(&c1);
    EasyStore.ajoutClientAuMagasin(&c2);
    EasyStore.ajoutClientAuMagasin(&c3);

  //  EasyStore.afficheClientsDuMagasin(); 

//EasyStore.afficheUnClientDuMagasin(1);

    //Ajout au panier des clients
    c1.addProduit(&p1);
    c1.addProduit(&p2);
    c2.addProduit(&p1);
    c3.addProduit(&p3);

  /*  cout<<c1<<endl ;
    cout<<c2<< endl;
    cout<<c3 <<endl;

    cout << p1 <<endl; 
    cout << p2 <<endl; 
    cout << p3 <<endl; */

    Commande commande(&c1,c1.getPanier());
    //commande.toStringCommande();
    //cout<<commande.getClient();
   // cout<<commande;

///MENU
   /* cout<<"____________________________________________\n                   MENU                         \n____________________________________________\n"<<endl;

    cout<<"1. Gestion du magasin"<<endl;
    cout<<"2. Gestion des commandes"<<endl;
    cout<<"4. Quitter"<<endl;

    int nb;
    int nbMag;
    int nbCom;

    cin>>nb;

    if(nb==1)
    {
        system("cls");
        cout<<"____________________________________________\n             GESTION DU MAGASIN                          \n____________________________________________\n"<<endl;
        cout<<"1. Ajout d'un produit"<<endl;
        cout<<"2. Supression d'un produit"<<endl;
        cout<<"3. Liste des produits"<<endl;

        cin>>nbMag;

        if(nbMag==1)
        {
            string nomProduit;
            double prixProduit;
            string descriptionProduit;
            int quantiteProduit;

            cout<<"Entrez le nom : ";
            cin>>nomProduit;
            cout<<"Entrez le prix : ";
            cin>>prixProduit;
            cout<<"Entrez la description : ";
            cin>>descriptionProduit;
            cout<<"Entrez la quantite : ";
            cin>>quantiteProduit;

            Produit p(nomProduit,prixProduit,descriptionProduit,quantiteProduit);
            EasyStore.ajoutProduitAuMagasin(&p);

            system("cls");
            cout<<"Produit ajoute. Que desirez-vous faire ensuite ?"<<endl;
            main();
        }
        else if(nbMag==3)
        {
            EasyStore.affichageProduitDuMagasin();
        }

    }
    else if(nb==2)
    {
        system("cls");
        cout<<"____________________________________________\n           GESTION DES COMMANDES                         \n____________________________________________\n"<<endl;
    }
    else if(nb==4)
    {
        exit(0);
    }
*/
    Menu menu(EasyStore);
    
    return 0;
}