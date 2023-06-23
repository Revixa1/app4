/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
#include "rectangle.h"
#include "forme.h"


using namespace std;

int main()
{  
   Tests tests;
   Tests TestRectangle ;
   Tests TestCarre;
   tests.tests_application();
   cout<< " ~~RECTANGLE"<< endl;
   TestRectangle.tests_unitaires_rectangle();
   cout << "  ~~CARRE" <<endl;
   TestCarre.tests_unitaires_carre();
   return 0;
}  
