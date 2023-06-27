#include "cercle.h"

using namespace std;



Cercle::Cercle(int xcoords, int ycoords,double rayonIn ):Forme(xcoords,ycoords)
{

    rayon= rayonIn;
    //ancrage.x=xcoords;
    //ancrage.y=ycoords;


}


void Cercle::setRayon(double rayonIn) 
{   
    rayon=rayonIn;
   // cout<< "setRayon"<< endl;
}

	
int Cercle::getRayon()
{
   // cout<< "getRayon"<< endl; 
    return rayon;
}




double Cercle::aire()
{
    double A=rayon*rayon*PI;

    return A;
}

void Cercle::afficher(ostream & s)
{

    s<<"Cercle (x="<<ancrage.x<<", y="<<ancrage.y<<", r="<<rayon<<", aire="<<aire()<<")"<<endl;


}
