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
tests_unitaires_carre();
tests_unitaires_cercle();
tests_unitaires_rectangle();
}

void Tests::tests_unitaires_rectangle()
{cout<< " ~~RECTANGLE"<< endl;
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
{cout << "  ~~CARRE" <<endl;
   int tailleTest=2;
  
   Carre *TestDeCarre = new Carre; 
   TestDeCarre->setTaille(tailleTest);
   int Taille=TestDeCarre->getTaille();
   cout << "taille :"<<Taille<<endl;
}


void Tests::tests_unitaires_cercle()
{cout << "  ~~CERCLE" <<endl;
   int rayonTest=2;
  
   Cercle *TestDeCercle=new Cercle; 
   TestDeCercle->setRayon(rayonTest);
   int Rayon=TestDeCercle->getRayon();
   cout << "rayon :"<<Rayon<<endl;
   Forme *FormeCercle= new Cercle(2);
   FormeCercle->translater(3,6);
   FormeCercle->afficher(cout);
}


void Tests::tests_unitaires_vecteur()
{cout << "  ~~VECTEUR" <<endl;
   int Max= 10;
   
   Vecteur *TestDeVecteur=new Vecteur;
   Forme *pointCarre = new Carre();
   Forme *pointCercle = new Cercle();
   Forme *pointRectangle = new Rectangle();
   Forme *point2Carre = new Carre();

   int gettaillemax = TestDeVecteur->getCapacite();
   cout << "get max initialle:"<<gettaillemax<<endl;
   int gettailleactuelle = TestDeVecteur->getTailleActuelle();
   cout << "get taille actuelle initialle:"<<gettailleactuelle<<endl;

//==============================
      cout <<"  ~~cleaning Vecteur..."<< endl;
   TestDeVecteur->cleanVecteur();

      cout<< "  ~~Verivication adresse null dans vecteur."<<endl;
   cout<< "verceur vide="<<TestDeVecteur->cleanCheckup()<<endl;   
   cout << "adresse forme 1 "<<TestDeVecteur->getForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeVecteur->getForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(2)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(3)<<endl;

   cout<< "  ~~Ajout de forme dans le vecteur"<<endl;
   cout << "get taille actuelle:"<<TestDeVecteur->getTailleActuelle()<<endl;
   TestDeVecteur->addFormeEnd(pointCercle);
   cout << "get taille actuelle:"<<TestDeVecteur->getTailleActuelle()<<endl;
   TestDeVecteur->addFormeEnd(pointCarre);
   cout << "get taille actuelle:"<<TestDeVecteur->getTailleActuelle()<<endl;
   TestDeVecteur->addFormeEnd(point2Carre);
   cout << "get taille actuelle:"<<TestDeVecteur->getTailleActuelle()<<endl;
   TestDeVecteur->addFormeEnd(pointRectangle);
   cout << "get taille actuelle:"<<TestDeVecteur->getTailleActuelle()<<endl;

      cout<< "  ~~Verivication new adresse dans vecteur."<<endl;
   cout<< "verceur vide="<<TestDeVecteur->cleanCheckup()<<endl;
   cout << "adresse forme 1 "<<TestDeVecteur->getForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeVecteur->getForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeVecteur->getForme(3)<<endl;

      TestDeVecteur->suppForme(1);
      cout<< "  ~~Suppression forme 2"<<endl;
   cout << "adresse forme 1 "<<TestDeVecteur->getForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeVecteur->getForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeVecteur->getForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeVecteur->getForme(3)<<endl;

//============================
      cout<< "  ~~Test d'affichage de forme"<<endl; 
   TestDeVecteur->afficher(cout);
}

void Tests::tests_unitaires_couche()
{
   // Tests sur la classe Couche
   int Max= 10;
   
   Couche *TestDeCouche=new Couche;
   Forme *pointCarre = new Carre();
   Forme *pointCercle = new Cercle();
   Forme *pointRectangle = new Rectangle();
   Forme *point2Carre = new Carre();

 


   //==============================
      cout <<"cleaning Couche..."<< endl;
   TestDeCouche->initCouche();

      cout<< "Verivication adresse null dans Couche."<<endl;
   cout << "adresse forme 1 "<<TestDeCouche->obtenirForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeCouche->obtenirForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(2)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(3)<<endl;
   
   cout<< "Ajout de forme dans le Couche"<<endl;
   TestDeCouche->ajouterForme(pointCercle);
   TestDeCouche->ajouterForme(pointCarre);
   TestDeCouche->ajouterForme(point2Carre);
   TestDeCouche->ajouterForme(pointRectangle);

      cout<< "Verivication new adresse dans Couche."<<endl;
   cout << "adresse forme 1 "<<TestDeCouche->obtenirForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeCouche->obtenirForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeCouche->obtenirForme(3)<<endl;

      TestDeCouche->retirerForme(1);
   cout<< "suppression forme 2"<<endl;
   cout << "adresse forme 1 "<<TestDeCouche->obtenirForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeCouche->obtenirForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeCouche->obtenirForme(3)<<endl;

   cout<< "Aire totale de la Couche"<<endl;
   cout << "Aire Totale= "<<TestDeCouche->aireTotale()<<endl;

   cout<< "Translater la couche"<<endl;
   cout << "Translation: "<<TestDeCouche->translaterCouche(10,5)<<endl;

   cout<< "Faire l'affichage de la couche"<<endl;
   TestDeCouche->afficherCouche(cout);

   cout<< "Set L'etat de la couche"<<endl;
   cout << "Seter l'etat= "<<TestDeCouche->setEtatCouche(1)<<endl;


   cout<< "Faire l'affichage de la couche"<<endl;
   TestDeCouche->afficherCouche(cout);


   cout<< "Ajout de forme dans le Couche"<<endl;
   TestDeCouche->ajouterForme(pointCercle);
   TestDeCouche->ajouterForme(pointCarre);
   TestDeCouche->ajouterForme(point2Carre);
   TestDeCouche->ajouterForme(pointRectangle);

      cout<< "Verivication new adresse dans Couche."<<endl;
   cout << "adresse forme 1 "<<TestDeCouche->obtenirForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeCouche->obtenirForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeCouche->obtenirForme(3)<<endl;

      TestDeCouche->retirerForme(1);
   cout<< "suppression forme 2"<<endl;
   cout << "adresse forme 1 "<<TestDeCouche->obtenirForme(0)<<endl;
   cout << "adresse forme 2 "<<TestDeCouche->obtenirForme(1)<<endl;
   cout << "adresse forme 3 "<<TestDeCouche->obtenirForme(2)<<endl;
   cout << "adresse forme 4 "<<TestDeCouche->obtenirForme(3)<<endl;

   cout<< "Aire totale de la Couche"<<endl;
   cout << "Aire Totale= "<<TestDeCouche->aireTotale()<<endl;

   cout<< "Translater la couche"<<endl;
   cout << "Translation: "<<TestDeCouche->translaterCouche(10,5)<<endl;

   cout<< "Translater la forme1"<<endl;
   
   cout << "Translation: "<< TestDeCouche->translaterForme(0,10,30)<<endl;
   
   cout<< "Faire l'affichage de la couche"<<endl;
   TestDeCouche->afficherCouche(cout);

}

void Tests::tests_unitaires_canevas()
{cout<<"tests canevas ici ____________________"<<endl;
   Carre *TestDeCarre = new Carre; 
   Cercle *TestDeCercle=new Cercle; 
   Canevas *testDeCanevas= new Canevas;
   //testDeCanevas->activerCouche(1);

   cout<<"ajouter forme : "<<testDeCanevas->ajouterForme(TestDeCarre)<<endl;
   cout<<"activer couche 2: "<<testDeCanevas->activerCouche(2)<<endl;
   cout<<"ajouter forme: "<<testDeCanevas->ajouterForme(TestDeCercle)<<endl;
   cout<<"aire du canevas: "<<testDeCanevas->aire()<<endl;
   cout<<"translater la couche active: "<<testDeCanevas->translater(11,33)<<endl;
   testDeCanevas->afficher(cout);

   
   cout<<"retirer forme 0 couche 2 canevas: "<<testDeCanevas->retirerForme(0)<<endl;
   testDeCanevas->afficher(cout);
  // cout<<"activer couche 2: "<<testDeCanevas->activerCouche(2)<<endl;

   
   cout<<"reinit canevas: "<<testDeCanevas->reinitialiser()<<endl;
   testDeCanevas->afficher(cout);


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
   Canevas     *validCanevas_1 = new Canevas;
   Cercle      *validCercle_1 = new Cercle(0,0,5); 
   Carre       *validCarre_1 = new Carre(4,1,6); 
   Rectangle   *validRectangle_1 = new Rectangle(2,8,3,9);
   Rectangle   *validRectangle_2 = new Rectangle(0,0,4,2);

//1
   cout <<"_____1. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;
   cout <<"Ajout d'un cercle : rayon=5, x=0, y=0 "<<"   Retour : " <<validCanevas_1->ajouterForme(validCercle_1)<<endl;
   cout <<"Ajout d'un carre : cote=6, x=4, y=1 "<<"   Retour : "   <<validCanevas_1->ajouterForme(validCarre_1)<<endl;
   cout <<"Ajout d'un rectangle : largeur=3, hauteur=9, x=2, y=8 "<<"   Retour : "<<validCanevas_1->ajouterForme(validRectangle_1)<<endl<<endl;
//2
   cout << "_____2. Activer la couche 1."<<"   Retour : " <<validCanevas_1->activerCouche(1)<<endl;
   cout <<"Ajout d'un rectangle : largeur=3, hauteur=9, x=2, y=8 "<<"   Retour : "<<validCanevas_1->ajouterForme(validRectangle_2)<<endl<<endl;
//3
   cout << "_____3. Afficher le canevas."<< endl;
      validCanevas_1->afficher(cout);
   cout<<endl;
//4
   cout << "_____4. Afficher l'aire du canevas."<< endl;
   cout<<validCanevas_1->aire()<<endl<<endl;
//5
   cout <<"_____5. Activer la couche 0."<<"   Retour : " <<validCanevas_1->activerCouche(0)<< endl;

//6
   cout <<"_____6. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;

//7
   cout <<"_____7. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;

//8
   cout <<"_____8. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;

//9
   cout <<"_____9. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;


}

void Tests::tests_application_cas_02()
{
   //cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
