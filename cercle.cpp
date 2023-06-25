#include "cercle.h"

using namespace std;



Cercle::Cercle(double rayonIn, int xcoords, int ycoords)
{

    rayon= rayonIn;
    ancrage.x=xcoords;
    ancrage.y=ycoords;


}


void Cercle::setRayon(double rayonIn) 
{   
    rayon=rayonIn;
    cout<< "setRayon"<< endl;
}

	
int Cercle::getRayon()
{
    cout<< "getRayon"<< endl; 
    return rayon;
}




double Cercle::aire(){
double A=rayon*rayon*PI;
cout << A << endl;

return A;
}

void Cercle::afficher(ostream & s)
{

s<<"Cercle (x="<<ancrage.x<<", y="<<ancrage.y<<", r="<<rayon<<", aire="<<aire()<<")"<<endl;


}
