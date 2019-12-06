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


class Produit{
  public:
    Produit(string titre, int prix, string description="", int quantite=1);
  
  private:
    string m_titre;     
    double m_prix;
    string m_description; 
    int m_quantite; 

};


#endif // fin _produit_h
