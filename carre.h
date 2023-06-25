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
	Carre();
	Carre(int taille, Coordonnee);

	void setTaille(int taille);
	int getTaille();

	double aire();
	void afficher(ostream & s);
	~Carre();
};
 #endif