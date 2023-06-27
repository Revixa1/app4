#include "carre.h"

using namespace std;



Carre::Carre(int xcoords, int ycoords,int tailleIn ):Rectangle(xcoords,ycoords,tailleIn,tailleIn)
{
    
    //taille=tailleIn;

    // ancrage.x=xcoords;
    // ancrage.y=ycoords;
}

Carre::~Carre()
{


}



void Carre::setTaille(int TailleIn) 
{   
    hauteur=TailleIn;
    largeur=TailleIn;
    //cout<< "setHauteur"<< endl;
}

	
int Carre::getTaille()
{
    //cout<< "getTaille"<< endl; 
    return hauteur;
}


/*
double Carre::aire()
{
    double A=taille*taille;
    return A;

}
*/

void Carre::afficher(ostream & s)
{
    s<<"Carre (x="<<ancrage.x<<", y="<<ancrage.y<<", c="<<hauteur<<", aire="<<aire()<<")"<<endl;

}
