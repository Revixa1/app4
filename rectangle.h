#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "forme.h"

using namespace std;


class Rectangle:public Forme
{
private:
	int hauteur = 1;
	int largeur = 1;
public:
	Rectangle();
	void setHauteur(int hauteur);
	void setLargeur(int largeur);

	int getHauteur();
	int getLargeur();

	void affiche();
	double aire();
	void afficher(ostream & s);
	~Rectangle();
};
 #endif