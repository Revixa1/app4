#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#include "forme.h"

using namespace std;


class Vecteur
{
private:
    int tailleMax;
    int tailleActuelle;
    int tableau[1];
public:
	Vecteur();
    void doublerMax();

    void setMax(int tailleMaxIn);
    int getMax();

    int getTailleActuelle();
    void cleanVecteur();

    bool cleanCheckup();

    int getForme(int position);
    bool addFormeEnd(int forme);
	~Vecteur();
};
 #endif