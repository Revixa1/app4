#ifndef CERCLE_H
#define CERCLE_H
#include <iostream>
#include "forme.h"

using namespace std;


class Cercle:public Forme
{
private:
	int rayon;
public:
	Cercle();
	Cercle(int taille, Coordonnee);

	void setRayon(int taille);
	int getRayon();

	double aire();
	void afficher(ostream & s);
	~Cercle();
};
 #endif