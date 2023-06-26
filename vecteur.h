#ifndef VECTEUR_H
#define VECTEUR_H
#include <iostream>
#include "forme.h"

using namespace std;


class Vecteur
{
    private:
        int tailleCapacite;
        int tailleActuelle;
        Forme* *tableau;

    public:
    	Vecteur();
        ~Vecteur();

        void doublerCapacite();
        int getCapacite() const;
        int getTailleActuelle() const;
        void cleanVecteur();
        bool cleanCheckup();
        Forme* getForme(int position) const;
        bool addFormeEnd(Forme *nomDeVAriable);
        Forme* suppForme(int indice);
        void afficher(ostream & s);
    	
};
 #endif