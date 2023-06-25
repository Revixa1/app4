#include "vecteur.h"

using namespace std;

Vecteur::Vecteur()
{
    tailleMax=1;
    tailleActuelle=0;
    Forme  **tableau1 = new Forme*[tailleMax];
    
}

void Vecteur::doublerMax()
{
    int newTailleMax=2*tailleMax;
    Forme **newTableau=new Forme*[newTailleMax];

    for (int i=0; i<=newTailleMax; i++)
    {
        if(i<=tailleMax)
            {newTableau[i]=&tableau[i];}
      //  else
      //      {newTableau[i]=NULL;}
 
    } 

    delete [] tableau;
    tableau =* newTableau;
    tailleMax=newTailleMax;

  

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
        delete&tableau[i];
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


bool  Vecteur::addFormeEnd(Forme *pasRapport)
{
    tailleActuelle++;  

    if (tailleActuelle >= tailleMax )
    {doublerMax();}

    tableau1[tailleActuelle] = pasRapport;

    return 1;
}


int Vecteur::getForme(int position)
{
    return tableau[position];
}


Vecteur::~Vecteur()
{
   
}











