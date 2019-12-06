/**
* File:     produit.cpp 
* Author:   GENTON Emilie
* Date:     05/12/2019 
* Summary:  Défintion de la classe Produit
*/

#include "produit.h"



//Constructors
Produit::Produit(string titre, double prix, string description, int quantite)
{
    m_id_produit =1;
    m_titre = titre; 
    m_description =description;
    m_quantite = quantite;
    m_prix = prix; 
}

//GETTER 
 int Produit::getIdProduit()
 {
     return m_id_produit;
 }

string Produit::getTitre()
{
    return m_titre;
}

string Produit::getDescription()
{
    return m_description;
} 

double Produit::getPrix()
{
    return m_prix;
}

int Produit::getQuantite()
{
    return m_quantite;
}

//SETTER
 void Produit::setTitre(string titre)
 {
     m_titre = titre;
 } 

void Produit::setDescription(string description)
{
    m_description = description;
} 

void Produit::setPrix(double prix)
{
    m_prix = prix;
} 

void Produit::setQuantite(int quantite)
{
    m_quantite = quantite;
} 


void Produit::toString()
{
    cout <<"Produit\nId : "<< getIdProduit() <<"\n"<<getTitre()<<"\n"<<getDescription()<<"\nPrix : "<<getPrix()<<" € "<<"\nQuantité : "<<getQuantite();
}