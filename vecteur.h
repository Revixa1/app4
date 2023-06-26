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
    Forme **tableau;

public:
	Vecteur();
    void doublerMax();

    //void setMax(int tailleMaxIn);
    int getMax();

    int getTailleActuelle();
    void cleanVecteur();

    bool cleanCheckup();

    Forme* getForme(int position);
    bool addFormeEnd(Forme *nomDeVAriable);
    Forme* suppForme(int indice);
    void afficher();
    //void pourAfficher(ostream & s);
	~Vecteur();
};
 #endif