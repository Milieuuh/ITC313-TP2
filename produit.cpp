/**
* File:     produit.cpp 
* Author:   GENTON Emilie
* Date:     05/12/2019 
* Summary:  Défintion de la classe Produit
*/

#include "produit.h"



//Constructors
Produit::Produit(string titre, int prix, string description, int quantite)
{
    m_id_produit =1;
    m_titre = titre; 
    m_description =description;
    m_quantite = quantite;
    m_prix = prix; 
}