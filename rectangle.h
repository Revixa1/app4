#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "forme.h"

using namespace std;


class Rectangle:public Forme
{

public:
	
	Rectangle( int xcoords=0, int ycoords=0,int largeurIn=1,int hauteurIn=1 );
	~Rectangle();
	void setHauteur(int hauteurIn);
	void setLargeur(int largeurIn);

	int getHauteur();
	int getLargeur();

	virtual double aire();
	virtual void afficher(ostream & s);

protected:
	int hauteur;
	int largeur;
	
};
#endif