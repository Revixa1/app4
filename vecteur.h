#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>

using namespace std;


class Vecteur
{
private:
    int tailleMax;
    int tailleActuelle;
    int vecteur[tailleMax];
public:
	Vecteur();
    void doublerMax();

    void setMax(tailleMax);
    int getMax();

    int getTailleActuelle();
    void cleanVecteur();

    bool cleanCheckup();
	~Vecteur();
};
 #endif