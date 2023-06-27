#include "vecteur.h"

using namespace std;

Vecteur::Vecteur()
{
    tailleCapacite=2;
    tailleActuelle=0;
    tableau = new Forme*[tailleCapacite];
}

void Vecteur::doublerCapacite()
{
    int newTailleCapacite=2*tailleCapacite;
    Forme **newTableau=new Forme*[newTailleCapacite];

    for (int i=0; i<newTailleCapacite; i++)
    {
        if(i<tailleCapacite)
            {newTableau[i]=tableau[i];}
    } 

    delete [] tableau;
    tableau = newTableau;
    tailleCapacite=newTailleCapacite;
}


int Vecteur::getCapacite() const
{
    return tailleCapacite;
}


int Vecteur::getTailleActuelle() const
{
    return tailleActuelle;
}


void Vecteur::cleanVecteur()
{
    for(int i=0;i<tailleActuelle;i++)
    {
                 

        if(tableau[i]!=NULL)
        {
            //cout<<"lol"<<endl;
            delete & tableau[i];

        }//cout<<i<<endl;
    }
    
    for (int i = 0; i<tailleCapacite;i++)
    {
        tableau[i]=NULL;
    }
    tailleActuelle=0;

}


bool Vecteur::cleanCheckup()
{

    for(int i=0;i<getTailleActuelle();i++)
    {
        if(NULL!=tableau[i]){return false;}
    }
    return true;
}


bool  Vecteur::addFormeEnd(Forme *nouvelleForme )
{
    if (tailleActuelle >= tailleCapacite )
    {doublerCapacite();}

    tableau[tailleActuelle]=nouvelleForme;

    tailleActuelle++;
    return true;
}

Forme* Vecteur::suppForme(int indice)
{    
    if (indice >= tailleActuelle || indice < 0)
    {  return NULL;  }

    Forme* ptrForme;
    ptrForme = tableau[indice];

    /*
    if(tableau[indice]!=NULL){
        delete tableau[indice];
    } else{
        return NULL;
    }*/


    tableau[indice]=NULL;

    return ptrForme;

    }


Forme* Vecteur::getForme(int position) const
{
    if (position < tailleActuelle && position >= 0)
    {
        return tableau[position];
    }
    else
    {
        return NULL;
    }
}


void Vecteur::afficher(ostream & s)
{
    
    

    for(int i=0;i<getTailleActuelle();i++ )
    {
        if (tableau[i]==NULL)
        {
            s<< "Forme supprimee"<<endl;
        }
        else
        {
            getForme(i)->afficher(s);
        }
    }
    
}


Vecteur::~Vecteur()
{
    for(int i=0;i<tailleCapacite;i++)
    {
        if(tableau[i]!=NULL){delete tableau[i];}
    }
   
}











