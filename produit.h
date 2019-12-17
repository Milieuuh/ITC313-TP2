/** 
* File:     produit.h 
* Author:   GENTON Emilie
* Date:     06/12/2019 
* Summary:  Déclaration de la classe Produit
*/

#ifndef _produit_h
#define _produit_h

#include <iostream>
#include <string>
using namespace std;

static int sNextid =0;

class Produit{
  public:
    Produit(string titre, double prix, string description="", int quantite);

    //GETTER
    int getIdProduit(); 
    string getTitre(); 
    string getDescription(); 
    double getPrix(); 
    int getQuantite(); 

    //SETTER
    void setTitre(string titre); 
    void setDescription(string description);
    void setPrix(double prix); 
    void setQuantite(int quantite); 

    void toString();
  
  private:
    int m_id_produit; 
    string m_titre;     
    double m_prix;
    string m_description; 
    int m_quantite; 

};


#endif // fin _produit_h
