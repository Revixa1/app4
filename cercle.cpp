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
