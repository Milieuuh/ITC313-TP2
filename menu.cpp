#include "menu.h"

#include "magasin.h"
#include "produit.h"
#include "client.h"


Menu::Menu(Magasin EasyStore)
{
    cout<<"____________________________________________\n                   MENU                         \n____________________________________________\n"<<endl;

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
        cout<<"2. Mise à jour quantite produit"<<endl;
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
            
            Menu menu(EasyStore);
        }
        else if(nbMag==2)
        {
            string nomProduit;
            int quantiteProduit;

            cout<<"Entrez le nom : ";
            cin>>nomProduit;
            cout<<"Entrez la quantite : ";
            cin>>quantiteProduit;

            
            EasyStore.UpdateQuantiteProduitDansMagasin(nomProduit,quantiteProduit);
            system("cls");
            cout<<"Quantite mise a jour. Que desirez-vous faire ensuite ?"<<endl;
            
            Menu menu(EasyStore);
        }
        else if(nbMag==3)
        {
            EasyStore.affichageProduitDuMagasin();
            Menu menu(EasyStore);
        }

    }
    else if(nb==2)
    {
        system("cls");
        cout<<"____________________________________________\n           GESTION DES COMMANDES                         \n____________________________________________\n"<<endl;
        cout<<"1. Ajout d'une commande"<<endl;
        cout<<"2. Validation d'une commande"<<endl;
        cout<<"3. Liste des commandes"<<endl;

        cin>>nbCom;

        if(nbCom==1)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;


        }
        else if(nbCom==2)
        {
            int nbCommande;
            cout<<"Selectionner l'identifiant de la commande : ";
            cin>>nbCommande;

            EasyStore.validerCommande(EasyStore.getCommande(nbCommande));
            
            system("cls");
            cout<<"Commande validee. Que desirez-vous faire ensuite ?"<<endl;
            
            Menu menu(EasyStore);
        }
        else if(nbCom==3)
        {
            EasyStore.afficheToutesLesCommandes();
            Menu menu(EasyStore);
        }

    }
    else if(nb==4)
    {
        exit(0);
    }
}