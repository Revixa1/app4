#ifndef CARRE_H
#define CARRE_H
#include <iostream>
#include "rectangle.h"
#include "forme.h"

using namespace std;


class Carre:public Rectangle
{
//private:
//	int taille;
public:
	
	Carre(int xcoords=0, int ycoords=0,int TailleIn=1);
	~Carre();


	void setTaille(int tailleIn);
	int getTaille();

	//double aire();
	void afficher(ostream & s);
	
};
 #endif