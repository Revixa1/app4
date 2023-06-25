/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include "cercle.h"
using namespace std;

int main()
{
   Tests tests;
   Cercle cerc(2,0,2);

   cerc.aire();

   Coordonnee coolcoords;
   coolcoords= cerc.getAncrage();
   
   cout<< coolcoords.x << ' ' << coolcoords.y <<endl;
  // tests.tests_application();
   return 0;
}

