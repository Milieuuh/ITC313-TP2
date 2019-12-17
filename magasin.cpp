/**
* File:     magasin.cpp 
* Author:   GENTON Emilie
* Date:     06/12/2019 
* Summary:  Défintion de la classe Magasin
*/

#include "magasin.h"

//Constructeur
Magasin::Magasin()
{

}

void Magasin::ajoutProduitAuMagasin(Produit* p1)
{
    m_liste_produits.push_back(p1); 
}

void Magasin::affichageProduitDuMagasin()
{
    cout <<"\n---------------------------------------------------"<< endl;
    cout << "   Produits presents dans le magasin   " << endl; 
    cout <<"---------------------------------------------------"<< endl; 
    cout <<"Nom \t Description \t\t Quantite \t Prix"<<endl; 
    for(Produit *p: m_liste_produits)
    {
        if(&p!=nullptr)
        {
            cout << p->getTitre() << "\t" << p->getDescription() << "\t\t" << p->getQuantite()<< "\t" << p->getPrix() << endl;             

        }
    }
}

void Magasin::detailProduitDansMagasin(string nom)
{
    cout <<"\n---------------------------------------------------"<< endl;
    cout << "                   Detail du produit  " << endl; 
    cout <<"---------------------------------------------------"<< endl; 

    for(Produit *p1 : m_liste_produits)
    {
        if(p1->getTitre()==nom)
        {
            cout << p1->getTitre() << "\t" << p1->getDescription() << "\t\t" << p1->getQuantite()<< "\t" << p1->getPrix() << endl;             

        }
    }

}


void Magasin::UpdateQuantiteProduitDansMagasin(string nom, int quantite)
{
    for(Produit *p1 : m_liste_produits)
    {
        if(&p1!=nullptr)
        {
            if(p1->getTitre()==nom)
            {
                p1->setQuantite(quantite); 
            }
        
        }
    }
}

void Magasin::ajoutClientAuMagasin(Client* client)
{
    m_liste_clients.push_back(client); 
}

void Magasin::afficheClientsDuMagasin()
{
    cout <<"\n---------------------------------------------------"<< endl;
    cout << "   Les clients du magasin   " << endl; 
    cout <<"---------------------------------------------------"<< endl; 
    cout <<"ID \t Prenom et Nom" <<endl; 
    for(Client *client: m_liste_clients)
    {
        if(&client!=nullptr)
        {
            cout << client->getIdClient() << "\t" << client->getPrenom() <<" "<< client->getNom() << endl;             

        }
    }
}

void Magasin::afficheUnClientDuMagasin(int leClient)
{
    cout <<"\n---------------------------------------------------"<< endl;
    cout << "                   Detail du client  " << endl; 
    cout <<"---------------------------------------------------"<< endl; 

    for(Client *client : m_liste_clients)
    {
        if(client->getIdClient()==leClient)
        {
            cout <<client->getIdClient() << "\t" << client->getPrenom() << " " << client->getNom() << endl;             

        }
    }

}

void Magasin::ajoutProduitDansPanierClient(Client *c, Produit *p)
{
    c->addProduit(p); 
}


void Magasin::supprimerProduitDuPanierClient(Produit *p, Client *c)
{
    c->supprimerProduit(p); 
}

void Magasin::modifierQuantiteProduitClient(Produit *p, int quantite, Client *c)
{
    c->modifierQuantiteProduit(p, quantite); 
}