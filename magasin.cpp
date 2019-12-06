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

void Magasin::detailProduitDansMagasin(Produit* p1)
{
    cout <<"\n---------------------------------------------------"<< endl;
    cout << "                   Detail du produit  " << endl; 
    cout <<"---------------------------------------------------"<< endl; 

     if(&p1!=nullptr)
    {
        cout << p1->getTitre() << "\t" << p1->getDescription() << "\t\t" << p1->getQuantite()<< "\t" << p1->getPrix() << endl;             

    }

}


void Magasin::UpdateQuantiteProduitDansMagasin(Produit* p1, int quantite)
{
    if(&p1!=nullptr)
    {
        for(Produit* p : m_liste_produits)
        {
            if(p==p1)
            {
                p->setQuantite(quantite); 
            }
        }
    }
}