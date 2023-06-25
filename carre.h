#ifndef CARRE_H
#define CARRE_H
#include <iostream>
#include "rectangle.h"
#include "forme.h"

using namespace std;


class Carre:public Rectangle
{
private:
	int taille;
public:
	
	Carre(int TailleIn=1 , int xcoords=0, int ycoords=0);
	~Carre();


	void setTaille(int tailleIn);
	int getTaille();

	double aire();
	void afficher(ostream & s);
	
};
 #endif