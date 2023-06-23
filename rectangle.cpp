#include "rectangle.h"

using namespace std;

void Rectangle::setHauteur(int Hauteur) 
{   
    hauteur=Hauteur;
    cout<< "setHauteur"<< endl;
}

void Rectangle::setLargeur(int Largeur) 
{
    largeur = Largeur;
    cout<< "setLargeur"<< endl;
}
	
int Rectangle::getHauteur()
{
    cout<< "getHauteur"<< endl; 
    return hauteur;

}

int Rectangle::getLargeur()
{
    cout<< "getLargeur"<< endl;
    return largeur;
}

