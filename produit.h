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
    Produit(); 
    Produit(string titre, string description, int quantite, int prix);
  
  private:
    string m_titre; 
    string m_description; 
    int m_quantite;
    double m_prix; 

};


#endif // fin _produit_h
