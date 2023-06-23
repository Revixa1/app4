#include "carre.h"

using namespace std;

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


