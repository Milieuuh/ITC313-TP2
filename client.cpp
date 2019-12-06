/**
* File:     client.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe client
*/

#include "client.h"


//Constructors
Client::Client(string nom, string prenom){
    m_idClient=++sNextid;
    m_nom=nom;
    m_prenom=prenom;
}

Client::Client() {}

//GETTER
int Client::getIdClient()
{
    return m_idClient;
}

string Client::getNom()
{
    return m_nom;
}

string Client::getPrenom()
{
    return m_prenom;
}

vector<Produit> Client::getPanier()
{
    return m_panier;
}


//Affichage
void Client::toStringClient()
{
    cout<<"\n Id : "<<getIdClient()<<" | "<<getNom()<<" "<<getPrenom();
}