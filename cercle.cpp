#include "cercle.h"

using namespace std;



Cercle::Cercle(double r, int xcoords, int ycoords){

rayon= r;
ancrage.x=xcoords;
ancrage.y=ycoords;


}


void Cercle::setRayon(double Rayon) 
{   
    rayon=Rayon;
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



}
