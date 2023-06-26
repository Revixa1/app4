/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
   // Tests sur les formes geometriques
   
   
   //cerc.afficher();
}

void Tests::tests_unitaires_rectangle()
{
   int hauteur=2;
   int largeur=3;
   Rectangle *TestDeRectangle = new Rectangle; 
   TestDeRectangle->setHauteur(hauteur);
   TestDeRectangle->setLargeur(largeur);
   int Hauteur = TestDeRectangle->getHauteur();
   int Largeur = TestDeRectangle->getLargeur();
   cout << "hauteur : "<<Hauteur<< endl;
   cout << "Laugeur : "<<Largeur<< endl;



}

void Tests::tests_unitaires_carre()
{
   int tailleTest=2;
  
   Carre *TestDeCarre = new Carre; 
   TestDeCarre->setTaille(tailleTest);
   int Taille=TestDeCarre->getTaille();
   cout << "taille :"<<Taille<<endl;
}

void Tests::tests_unitaires_cercle()
{
   int rayonTest=2;
  
   Cercle *TestDeCercle=new Cercle; 
   TestDeCercle->setRayon(rayonTest);
   int Rayon=TestDeCercle->getRayon();
   cout << "rayon :"<<Rayon<<endl;
}

void Tests::tests_unitaires_vecteur()
{
   int Max= 10;
   
   Vecteur *TestDeVecteur=new Vecteur;
   Forme *pointCarre = new Carre();
   Forme *pointCercle = new Cercle();
   Forme *pointRectangle = new Rectangle();
   Forme *point2Carre = new Carre();

   int gettaillemax = TestDeVecteur->getMax();
   cout << "get max initialle:"<<gettaillemax<<endl;
   int gettailleactuelle = TestDeVecteur->getTailleActuelle();
   cout << "get taille actuelle initialle:"<<gettailleactuelle<<endl;

//==============================
cout <<"cleaning Vecteur..."<< endl;
TestDeVecteur->cleanVecteur();


   cout<< "Verivication adresse null dans vecteur."<<endl;
   cout << "adresse forme 1 "<<TestDeVecteur->getForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeVecteur->getForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(2)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(3)<<endl;
   cout<< "Ajout de forme dans le vecteur"<<endl;
   TestDeVecteur->addFormeEnd(pointCercle);
   TestDeVecteur->addFormeEnd(pointCarre);
   TestDeVecteur->addFormeEnd(point2Carre);
   TestDeVecteur->addFormeEnd(pointRectangle);
      cout<< "Verivication new adresse dans vecteur."<<endl;
   cout << "adresse forme 1 "<<TestDeVecteur->getForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeVecteur->getForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeVecteur->getForme(3)<<endl;
   
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
   
}

void Tests::tests_application_cas_01()
{
   cout << "TESTS APPLICATION (CAS 01)" << endl; 
   // Il faut ajouter les operations realisant ce scenario de test.
}

void Tests::tests_application_cas_02()
{
   cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
