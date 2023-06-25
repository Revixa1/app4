
#ifndef CERCLE_H
#define CERCLE_H

#include "forme.h"
#include <iostream>
#include "coordonnee.h"

using namespace std;

class Cercle: public Forme
{
    
public:
    //Cercle();
    Cercle(double rayon=1, int xcoords=0, int ycoords=0);
   
    double aire();
    void afficher(ostream & s);

private:
    double r;


};

#endif
