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

void Magasin::ajoutProduitAuMagasin(Produit p1)
{
    m_liste_produits.push_back(&p1); 
}

void Magasin::affichageProduitDuMagasin()
{
    cout << "   Produits présents dans le magasin   " << endl; 
    cout <<"---------------------------------------------------"<< endl; 
    cout <<"Nom                 Description             Quantité            Prix"<<endl; 
    for(Produit* p: m_liste_produits)
    {
        if(&p!=nullptr)
        {
            //&p.getTitre(); 
        }
    }
}
