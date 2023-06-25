/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"

// Implementation a faire...



Couche::Couche()
{
    bool initialise=1;
    bool active=0;
    bool inactive=0;
    //vec.cleanVecteur();

}


Couche::~Couche()
{

}



bool ajouterForme()
{


}


int retirerForme(int indexeIn)
{


}
int obtenirForme(int indexeIn)
{

}
double aireTotale()
{

}
bool translaterCouche(int Dx, int Dy)
{

}
bool initCouche()
{

}


bool setEtatCouche(int EtatIn)
{
    if(EtatIn==0)
    {
        initialise=1;
        active=0;
        inactive=0;
    } else if(EtatIn==1)
    {
        initialise=0;
        active=1;
        inactive=0;
    } else if(EtatIn==2)
    {
        initialise=0;
        active=0;
        inactive=1;
    } else 
    {
        return false;
    }

    return true;
}

