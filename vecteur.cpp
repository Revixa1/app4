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
    cout << "allo alexi"<<endl;
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


//void Vecteur::setMax(int tailleMaximumIn)
//{
//    tailleMax=tailleMaximumIn;
//}


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


bool  Vecteur::addFormeEnd(Forme *pasRapport )
{
    if (tailleActuelle >= tailleMax )
    {doublerMax();}
      

    cout << "allo alex"<< tailleActuelle << tailleMax<<endl;
    cout<<getForme(0)<<endl;

    tableau[tailleActuelle]=pasRapport;

cout << "allo tx"<<endl;
tailleActuelle++;
    return 1;
}


Forme* Vecteur::getForme(int position)
{
    return tableau[position];
}


Vecteur::~Vecteur()
{
   
}











