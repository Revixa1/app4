#ifndef CERCLE_H
#define CERCLE_H
#include <iostream>
#include "forme.h"
//#include "coordonnee.h"

using namespace std;


class Cercle:public Forme
{
private:
	int rayon;
public:
	Cercle(double rayon=1, int xcoords=0, int ycoords=0);
    ~Cercle();

	void setRayon(int taille);
	int getRayon();

    
    double aire();
    void afficher(ostream & s);

private:
    double r;
	
};
 #endif

