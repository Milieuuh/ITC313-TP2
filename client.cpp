/**
* File:     client.cpp 
* Author:   Lucie BOUCQUEMONT
* Date:     06/12/2019 
* Summary:  classe client
*/

#include "client.h"


//Constructors
Client::Client(string nom, string prenom){
    m_idClient=1;
    m_nom=nom;
    m_prenom=prenom;
} 