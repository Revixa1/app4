#include "vecteur.h"

using namespace std;

Vecteur::Vecteur()
{
    tailleMax=5;
    tailleActuelle=0;
}

void Vecteur::doublerMax()
{
    tailleMax=2*tailleMax;
}

void Vecteur::setMax(int tailleMaximum)
{
    tailleMax=tailleMaximum;
}

int Vecteur::getMax()
{
    return tailleMax;
}

int Vecteur::getTailleActuelle()
{
    return tailleActuelle;
}

void Vecteur::cleanVecteur()
{
    for (int i = 0; i<tailleMax;i++)
    {
        Vecteur[i]=NULL;
    };
    tailleActuelle=0;
}

bool Vecteur::cleanCheckup()
{
    if (tailleActuelle=0)
    {
        return1;
    }
    else 
    {return 0;}
/*
    for (i=0;i<tailleMax;i++)
    {
        if (vecteur[i] != NULL )  
        {   return 0;}
    }

    return 1; 
*/
}














