#ifndef CERCLE_H
#define CERCLE_H
#include <iostream>
#include "forme.h"
//#include "coordonnee.h"

using namespace std;


class Cercle:public Forme
{

public:
	Cercle(double r=1, int xcoords=0, int ycoords=0);
    

	void setRayon(double taille);
	int getRayon();

    
    double aire();
    void afficher(ostream & s);

private:
     
    double rayon;
	
};
#endif

