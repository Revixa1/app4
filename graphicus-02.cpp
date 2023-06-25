/********
 * Fichier: graphicus-01.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"
//#include "rectangle.h"
//#include "forme.h"
//#include "cercle.h"
using namespace std;

int main()
{  
   Tests tests;
   Tests TestRectangle ;
   Tests TestCarre;
   Tests TestCercle;
   tests.tests_application();
   cout<< " ~~RECTANGLE"<< endl;
   TestRectangle.tests_unitaires_rectangle();
   cout << "  ~~CARRE" <<endl;
   TestCarre.tests_unitaires_carre();
   cout << "  ~~CERCLE" <<endl;
   TestCercle.tests_unitaires_cercle();
   return 0;
}  
