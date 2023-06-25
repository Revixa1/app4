#include "vecteur.h"

using namespace std;

Vecteur::Vecteur()
{
    tailleMax=1;
    tailleActuelle=0;
    cleanVecteur();
}

void Vecteur::doublerMax()
{
    int newTailleMax=2*tailleMax;
    int *newTableau=new int[newTailleMax];

    for (int i=0; i<=newTailleMax; i++)
    {
        if(i<=tailleMax)
            {newTableau[i]=tableau[i];}
        else
            {newTableau[i]=NULL;}
        
        tableau[i]=newTableau[i];
    } 

    tailleMax=newTailleMax;

    delete[]newTableau;

}


void Vecteur::setMax(int tailleMaximumIn)
{
    tailleMax=tailleMaximumIn;
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
        tableau[i]=NULL;
    };
    tailleActuelle=0;
}


bool Vecteur::cleanCheckup()
{
    if (tailleActuelle=0)
    {
        return 1;
    }
    else 
    {return 0;}

}


bool  Vecteur::addFormeEnd(int forme)
{
    tailleActuelle++;  

    if (tailleActuelle >= tailleMax )
    {doublerMax();}

    tableau[tailleActuelle]=forme;

    return 1;
}


int Vecteur::getForme(int position)
{
    return tableau[position];
}


Vecteur::~Vecteur()
{
   
}











