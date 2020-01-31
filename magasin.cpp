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
    if(p1 != nullptr)
    {
        m_liste_produits.push_back(p1); 
    }
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
}

void Magasin::supprimerProduitAuMagasin(Produit* p1)
{
    if(p1 != nullptr)
    {
        vector<Produit*> temp ; 
        bool res= false; 
        for(Produit *prod: m_liste_produits)
        {
            if(p1!=prod)
            {
                temp.push_back(prod); 
                res= true; 
            }
        }

        if(res==false)
        {
            cout << "Le magasin n'a pas ce produit. " << endl;
        } 
        else 
        {
            cout << "Produit supprime du magasin !" << endl; 
        }
    }
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
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
    if (client!=nullptr)
    {
        m_liste_clients.push_back(client);
    } 
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
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
   if (c!=nullptr && p!=nullptr)
    {
        for(Produit* prod:m_liste_produits)
        {
            if(p==prod)
            {
                if(p->getQuantite()>0)
                {
                    c->addProduit(p); 
                    p->setQuantite(p->getQuantite()-1);
                }  
                else
                {
                    cout << "Victime de son succes..." << endl; 
                }
                        
            }
        }
    }
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
}


void Magasin::supprimerProduitDuPanierClient(Produit *p, Client *c)
{
    if (c!=nullptr && p!=nullptr)
    {
        bool res = false; 
        for(Produit *prod : c->getPanier())
        {
            if(p==prod)
            {
                c->supprimerProduit(p); 
                res= true; 
            }
        }

        if(res== false)
        {
            cout << "Le client n'a pas ce produit dans son panier. " << endl;
        } 
        else 
        {
            cout << "Produit supprime !" << endl; 
        }
    } 
    else 
    {
          cout << "ERROR : nullptr exeption... " << endl; 
    }
}

void Magasin::modifierQuantiteProduitClient(Produit *p, int quantite, Client *c)
{
    if (c!=nullptr && p!=nullptr)
    {
        bool res = false; 
        for(Produit *prod : c->getPanier())
        {
            if(p==prod)
            {
                c->modifierQuantiteProduit(p, quantite); 
                res= true; 
            }
        }

        if(res== false)
        {
            cout << "Le client n'a pas ce produit dans son panier. " << endl;
        } 
        else 
        {
            cout << "Quantite modifiee ! " << endl; 
        }
    }
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
  
}

void Magasin::validerCommande(Commande* commande)
{ 
    ////////---------------------------------> A CHANGER
    miseAJourDuStatusCommande(commande);
    m_liste_commandes_validee.push_back(commande);
    vector<Commande*> temp;

    for(Commande* c:m_liste_commandes)
    {
        if(c!=commande)
        {
            temp.push_back(c);
        }
        
    }

    m_liste_commandes.clear();
    m_liste_commandes=temp;

    for(Produit* p: commande->getCommande())
    {
        //supp
    }
}

void Magasin::miseAJourDuStatusCommande(Commande* commande)
{
    commande->setStatus(true);
}

void Magasin::afficheToutesLesCommandes()
{
    for(Commande* c:m_liste_commandes)
    {
        c->toStringCommande();
    }

}

void Magasin::afficheToutesLesCommandesAUnClient(Client* client)
{
    if (client != nullptr)
    {
        for(Commande* c:m_liste_commandes)
        {
            if(client==c->getClient())
            {
                c->toStringCommande();
            }        
        }
    }
    else 
    {
        cout << "ERROR : nullptr exeption... " << endl; 
    }
}

void Magasin::afficheToutesLesCommandesValidee()
{

}

Commande* Magasin::getCommande(int nb)
{  
   Commande* c1;
    for(Commande* c: m_liste_commandes)
    {
        if(c->getIdCommande()==nb)
        {
            c1=c;
        }
    }

    return c1;
}

Produit* Magasin::getIdProduit(int id)
{
    Produit* c1;
    
    for(Produit* c: m_liste_produits)
    {
        if(c->getIdProduit()==id)
        {
            c1=c;
        }
    }

    return c1;
}

void Magasin::ajoutCommande(Commande* commande)
{
     if (commande!=nullptr)
     {
        m_liste_commandes.push_back(commande);
     }
     else 
     {
         cout << "ERROR : nullptr exception !!!!" ; 
     }
}

Client* Magasin::getClient(int nb)
{
    Client* c1; 
    for(Client* c:m_liste_clients)
    {
        if(c->getIdClient()==nb)
        {
            c1=c;
        }
    }
    return c1; 
}