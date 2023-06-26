#include "vecteur.h"

using namespace std;

Vecteur::Vecteur()
{
    tailleMax=2;
    tailleActuelle=0;
    tableau = new Forme*[tailleMax];
}

void Vecteur::doublerMax()
{
    int newTailleMax=2*tailleMax;
    Forme **newTableau=new Forme*[newTailleMax];

    for (int i=0; i<newTailleMax; i++)
    {
        if(i<tailleMax)
            {newTableau[i]=tableau[i];}
    } 

    delete [] tableau;
    tableau = newTableau;
    tailleMax=newTailleMax;
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
    for (int i = 0; i<=tailleMax;i++)
    {
        delete tableau[i];
    }

    delete[] tableau;
    Vecteur();
}


bool Vecteur::cleanCheckup()
{
    if (tailleActuelle=0)
    {return 1;}
    else 
    {return 0;}
}


bool  Vecteur::addFormeEnd(Forme *pasRapport )
{
    if (tailleActuelle >= tailleMax )
    {doublerMax();}

    tableau[tailleActuelle]=pasRapport;

    tailleActuelle++;
    return 1;
}

Forme* Vecteur::suppForme(int indice)
{    if (indice <= tailleActuelle)
    {    
    Forme** tableauOut = new Forme*[1];
    tableauOut[1] = tableau[indice];
    tableau[indice]=NULL;

    return tableauOut[1];
    }
    else
    {
        return NULL;
    }

}


Forme* Vecteur::getForme(int position)
{
    if (position <= tailleActuelle)
    {
        return tableau[position];
    }
    else
    {
        return NULL;
    }
}


void Vecteur::afficher()
{
    Forme *ptrForme;
    

    for(int i=0;i<getTailleActuelle();i++ )
    {
        if (tableau[i]==NULL)
        {
            cout<< "Forme supprimee"<<endl;
        }
        else
        {
            ptrForme=getForme(i);
            ptrForme->afficher(cout);
        }
    }

}


Vecteur::~Vecteur()
{
   
}











