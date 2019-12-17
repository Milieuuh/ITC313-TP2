# TP2-cpp
TP2 de C++
Création des classes suivantes : Produit, Client et Commande
Questions 1, 2, 3, 4 finies
Questions 5 a à d finies

void Client::supprimerProduit(Produit* p)
{
    vector<Produit*> newListeProduit;

    for(int i=0;i<m_panier.size();i++)
    {
        
        if(m_panier.at(i)==p)   
        {
           cout<<"coucou !!";
        }
        else
        {
             newListeProduit.push_back(m_panier.at(i));
        }
        
    }

    m_panier.clear();

    for(Produit* prod:newListeProduit)
    {
        m_panier.push_back(prod);
    }

}