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
    initialise=1;
    active=0;
    inactive=0;
  
    
    

}


Couche::~Couche()
{

}



bool Couche::ajouterForme(Forme *uneFormeIn)
{
    if(active!=true){
        return false;
    }

    vec.addFormeEnd(uneFormeIn);
    return true;
}


Forme* Couche::retirerForme(int indexeIn)
{
    Forme* ptrForme;
    if(active!=true){
        return NULL;
    }

    ptrForme=vec.suppForme(indexeIn);
    if(NULL!=vec.getForme(indexeIn)){return NULL;}

    return ptrForme;
}


Forme* Couche::obtenirForme(int indexeIn) const
{
    if(NULL!=vec.getForme(indexeIn)){return vec.getForme(indexeIn);}
    else{return NULL;}
    
}


double Couche::aireTotale()
{
    double Atot=0;
    if(initialise==true){
        return 0;
    }

    for(int i=0;i<vec.getTailleActuelle();i++ )
    {
        if(NULL!=vec.getForme(i)){Atot+=vec.getForme(i)->aire();}
    }
    return Atot;
}


bool Couche::translaterCouche(int Dx, int Dy)
{
    if(active!=true){
        return false;
    }

    for(int i=0;i<vec.getTailleActuelle();i++ )
    {

        if(NULL!=vec.getForme(i)){vec.getForme(i)->translater(Dx,Dy);}
       
    }
    return true;
}


bool Couche::translaterForme(int indexeIn,int Dx, int Dy)
{
    if(active!=true){
        return false;
    }

    if(NULL!=vec.getForme(indexeIn)){vec.getForme(indexeIn)->translater(Dx,Dy);} else{return false;}
    
    return true;
}



bool Couche::initCouche()
{
    vec.cleanVecteur();

    for(int i=0;i<vec.getTailleActuelle();i++ )
    {

        if(NULL!=vec.getForme(i)){return false;}
       
    }
    Couche();
    return true;
}


bool Couche::setEtatCouche(int EtatIn)
{
    if(EtatIn==1)
    {
        initialise=false;
        active=true;
        inactive=false;
    } else if(EtatIn==2)
    {
        initialise=false;
        active=false;
        inactive=true;
    } else 
    {
        return false;
    }

    return true;
}


int Couche::getEtatCouche() const
{

    if(initialise==1)
    {
        return 0;
    } else if(active==1)
    {
        return 1;
    } else if(inactive==1)
    {
        return 2;
    }
    
    return -1;
}

void Couche::afficherCouche(ostream & s)
{
    if(initialise==true){
        s<<"Couche initialisee"<<endl;
    }
    else{
        vec.afficher(s);
    }
}


