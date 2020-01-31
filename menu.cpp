#include "menu.h"

#include "magasin.h"
#include "produit.h"
#include "client.h"


Menu::Menu(Magasin EasyStore)
{
    cout<<"____________________________________________\n                   MENU                         \n____________________________________________\n"<<endl;

    cout<<"1. Gestion du magasin"<<endl;
    cout<<"2. Gestion des commandes"<<endl;
    cout<<"3. Gestion des clients"<<endl;
    cout<<"4. Quitter"<<endl;

    int nb;
    int nbMag;
    int nbCom;
    int nbClient;

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

            cout<<"Entrez le nom (sans espace) : ";
            cin>>nomProduit;
            cout<<"Entrez le prix : ";
            cin>>prixProduit;
            cout<<"Entrez la description (sans espace) : ";
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
            int idProduit;
            int quantiteProduit;

            cout<<"Entrez l'id du produit : ";
            cin>>idProduit;
            cout<<"Entrez la quantite : ";
            cin>>quantiteProduit;

            
            EasyStore.UpdateQuantiteProduitDansMagasin(idProduit,quantiteProduit);
            system("cls");
            cout<<"Quantite mise a jour. Que desirez-vous faire ensuite ?"<<endl;
            
            Menu menu(EasyStore);
        }
        else if(nbMag==3)
        {
            EasyStore.affichageProduitDuMagasin();
            Menu menu(EasyStore);
        }
        else
        {
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
        cout<<"4. Afficher toutes les commandes d'un client"<<endl;

        cin>>nbCom;

        if(nbCom==1)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;

            Client* c=EasyStore.getClient(nbClient);
            Commande com(c,c->getPanier());

            EasyStore.ajoutCommande(&com);

            system("cls");
            cout<<"Commande ajoutee. Que desirez-vous faire ensuite ?"<<endl;            
            Menu menu(EasyStore);

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
        else if(nbCom==4)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;

            Client* c=EasyStore.getClient(nbClient);
            EasyStore.afficheToutesLesCommandesAUnClient(c);

            Menu menu(EasyStore);

        }
        else
        {
            Menu menu(EasyStore);
        }


    }
    else if(nb==3)
    {
        system("cls");
        cout<<"____________________________________________\n           GESTION DES CLIENTS                         \n____________________________________________\n"<<endl;
        cout<<"1. Ajout d'un client"<<endl;
        cout<<"2. Ajout un produit dans panier client"<<endl;
        cout<<"3. Supprimer un produit dans panier client"<<endl;
        cout<<"4. Liste des clients"<<endl;
        cout<<"5. Detail d'un client"<<endl;

        cin>>nbClient;

        if (nbClient==1)    // Création d'un client via les données saisies
        {           
            string nom ; 
            string prenom; 
            cout<<"Entrez le nom : ";
            cin>>nom;
            cout<<"Entrez le prenom : ";
            cin>>prenom;

            Client c(nom, prenom);
            EasyStore.ajoutClientAuMagasin(&c); 
 
            Menu menu(EasyStore);

        }
        else if(nbClient==2)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;

            int idProduit;
            cout<<"Selectionner l'identifiant du produit : ";
            cin>>idProduit;

            Produit* p = EasyStore.getIdProduit(idProduit); 
            Client* c=EasyStore.getClient(nbClient);  

            EasyStore.ajoutProduitDansPanierClient(c, p) ; 
            Menu menu(EasyStore);

        }
        else if(nbClient==3)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;

            int idProduit;
            cout<<"Selectionner l'identifiant du produit : ";
            cin>>idProduit;

            Produit* p = EasyStore.getIdProduit(idProduit) ; 

            Client* c;
            c=EasyStore.getClient(nbClient);   
            EasyStore.supprimerProduitDuPanierClient(p, c); 
            Menu menu(EasyStore);
        }
        else if(nbClient==4)
        {
            EasyStore.afficheClientsDuMagasin(); 
            Menu menu(EasyStore);
        }
        else if(nbClient==5)
        {
            int nbClient;
            cout<<"Selectionner l'identifiant du client : ";
            cin>>nbClient;

            Client* c;
            c=EasyStore.getClient(nbClient);   
            EasyStore.afficheUnClientDuMagasin(c->getIdClient());

            Menu menu(EasyStore);
        }

    }
    else if(nb==4)
    {
        exit(0);
    }
    else
    {
        system("cls");
        Menu menu(EasyStore);
    }
    
}