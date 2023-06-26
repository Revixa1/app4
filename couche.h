/********
 * Fichier: couche.h
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H
#include "vecteur.h"
#include "forme.h"
#include "rectangle.h"
#include "carre.h"
#include "cercle.h"
class Couche
{
   // Classe a completer
   public:
      Couche(int numCoucheIn=0);
      ~Couche();
      int numCouche;

      bool ajouterForme(Forme*);
      int retirerForme(int indexeIn);
      Forme* obtenirForme(int indexeIn);
      double aireTotale();
      bool translaterCouche(int Dx, int Dy);
      bool initCouche();
      bool setEtatCouche(int EtatIn);
      void afficherCouche(ostream & s);

   private:
      bool initialise;
      bool active;
      bool inactive;
      Vecteur vec;
      
   


};

#endif
