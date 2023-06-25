#include "rectangle.h"

using namespace std;


Rectangle::Rectangle(int hauteurIn , int largeurIn , int xcoords, int ycoords)
{
    hauteur=hauteurIn;
    largeur=largeurIn;

    ancrage.x=xcoords;
    ancrage.y=ycoords;
}

Rectangle::~Rectangle()
{


}

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

double Rectangle::aire()
{
    double A=hauteur*largeur;
    return A;

}

void Rectangle::afficher(ostream & s)
{
    s<<"Rectangle (x="<<ancrage.x<<", y="<<ancrage.y<<", l="<<largeur<<", h="<<hauteur<<", aire="<<aire()<<")"<<endl;

}

