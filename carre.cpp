#include "carre.h"

using namespace std;



Carre::Carre(int tailleIn, int xcoords, int ycoords)
{
    
    taille=tailleIn;

    ancrage.x=xcoords;
    ancrage.y=ycoords;
}

Carre::~Carre()
{


}



void Carre::setTaille(int Taille) 
{   
    taille=Taille;
    cout<< "setHauteur"<< endl;
}

	
int Carre::getTaille()
{
    cout<< "getTaille"<< endl; 
    return taille;
}



double Carre::aire()
{
    double A=taille*taille;
    return A;

}

void Carre::afficher(ostream & s)
{


}
