#include "cercle.h"

using namespace std;

void Cercle::setRayon(int Rayon) 
{   
    rayon=Rayon;
    cout<< "setRayon"<< endl;
}

	
int Cercle::getRayon()
{
    cout<< "getRayon"<< endl; 
    return rayon;
}


//Cercle::Cercle(){
//
//r=1;
//ancrage.x=0;
//ancrage.y=0;
//   
//
//
//}

Cercle::Cercle(double rayon, int xcoords, int ycoords){

r= rayon;
ancrage.x=xcoords;
ancrage.y=ycoords;
   


}

double Cercle::aire(){
double A=r*r*PI;
cout << A << endl;

return A;
}

void Cercle::afficher(ostream & s)
{



}
