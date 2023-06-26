/********
 * Fichier: canevas.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"

Canevas::Canevas()
{    
   //*couches = new Couche[MAX_COUCHES];
   for ( int i =0; i<MAX_COUCHES; i++)
   {
      if ( i==0)
      {
         couches[i].initCouche();
         couches[i].setEtatCouche(1);
      }
      else
      {
         couches[i].initCouche();
      }
   }

}

Canevas::~Canevas()
{
}

bool Canevas::reinitialiser()
{
   delete[] couches;
   Canevas();
   return true;
}

bool Canevas::activerCouche(int index)
{
   couches[index].setEtatCouche(1);
   return true;
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      if (couches[i].getEtatCouche()==1)
      {
         couche[i].ajouterForme(*p_forme);
         return true;
      }
   }
   cout<<"Aucune couche n'est active."<,endl;
   return false;
}

bool Canevas::retirerForme(int index)
{
   return true;
}

double Canevas::aire()
{
   return 0.0;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   return true;
}

void Canevas::afficher(ostream & s)
{
}
