#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include "forme.h"

using namespace std;


class Rectangle:public Forme
{
private:
	int hauteur;
	int largeur;
public:
	Rectangle();
	Rectangle(int hauteur , int largeur , Coordonnee);
	void setHauteur(int hauteur);
	void setLargeur(int largeur);

	int getHauteur();
	int getLargeur();

	double aire();
	void afficher(ostream & s);
	~Rectangle();
};
 #endif