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
   int hauteur=5;
   int largeur=10;
   Rectangle *TestDeRectangle = new Rectangle; 

   cout<<"Rectangle sans valeurs initialles avec afficher:"<<endl;
   TestDeRectangle->afficher(cout);
   cout<<"Rectangle sans valeurs initialles avec Get:"<<endl;
   cout << "   hauteur : "<<TestDeRectangle->getHauteur()<< endl;
   cout << "   Laugeur : "<<TestDeRectangle->getLargeur()<< endl;
   cout << "   Aire : "<<TestDeRectangle->aire()<<endl;

   cout<<"Rectangle avec valeurs initialles(h=5, l=10) grace a methode set... et  afficher:"<<endl;
   TestDeRectangle->setHauteur(5);
   TestDeRectangle->setLargeur(10);
   TestDeRectangle->afficher(cout);
   cout<<"Rectangle avec valeurs initialles(h=5, l=10) grace a methode get :"<<endl;
   cout << "   hauteur : "<<TestDeRectangle->getHauteur()<< endl;
   cout << "   Laugeur : "<<TestDeRectangle->getLargeur()<< endl;
   cout << "   Aire : "<<TestDeRectangle->aire()<<endl;
   cout<<endl;
}

void Tests::tests_unitaires_carre()
{cout << "  ~~CARRE" <<endl;

   int cote=10;
   Carre *TestDeCarre = new Carre; 
   cout<<"Carre sans valeurs initialles avec afficher:"<<endl;
   TestDeCarre->afficher(cout);
   cout<<"Carre sans valeurs initialles avec Get:"<<endl;
   cout << "   Cote : "<<TestDeCarre->getTaille()<< endl;
   cout << "   Aire : "<<TestDeCarre->aire()<<endl;

   cout<<"Carre avec valeurs initialles(cote = 10) grace a methode setTaille et  afficher:"<<endl;
   TestDeCarre->setTaille(cote);
   TestDeCarre->afficher(cout);
   cout<<endl;
 //  cout<<"Carre avec valeurs initialles(h=5, l=10) grace a methode get :"<<endl;
 //  cout << "   Cote : "<<TestDeCarre->getTaille()<< endl;
  // cout << "   Aire : "<<TestDeCarre->aire()<<endl;
  
  /* int tailleTest=2;
  
   Carre *TestDeCarre = new Carre; 
   TestDeCarre->setTaille(tailleTest);
   int Taille=TestDeCarre->getTaille();
   cout << "taille :"<<Taille<<endl;
 */
}


void Tests::tests_unitaires_cercle()
{cout << "  ~~CERCLE" <<endl;
   int rayon=3;
   Cercle *TestDeCercle = new Cercle; 

   cout<<"Cercle sans valeurs initialles avec la methode afficher:"<<endl;
   TestDeCercle->afficher(cout);
   cout<<"Cercle sans valeurs initialles avec la methode GetRayon:"<<endl;
   cout << "   Cote : "<<TestDeCercle->getRayon()<< endl;
   cout << "   Aire : "<<TestDeCercle->aire()<<endl;

   cout<<"Cercle avec valeurs initialles(rayon = 3) grace aux methodes setRayon et  afficher:"<<endl;
   TestDeCercle->setRayon(rayon);
   TestDeCercle->afficher(cout);
   cout<<endl;

  /*
   Cercle *TestDeCercle=new Cercle; 
   TestDeCercle->setRayon(rayonTest);
   int Rayon=TestDeCercle->getRayon();
   cout << "rayon :"<<Rayon<<endl;
   Forme *FormeCercle= new Cercle(2);
   FormeCercle->translater(3,6);
   FormeCercle->afficher(cout);
 */
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
   ofstream logFileCas1;
   ofstream logFileCas2;

   // Fait tous les tests applicatifs
   logFileCas1.open ("Cas1.log");
   tests_application_cas_01(logFileCas1);
   logFileCas1.close ();

   logFileCas2.open ("Cas2.log");
   tests_application_cas_02(logFileCas2);
   logFileCas2.close();
   
}

void Tests::tests_application_cas_01(ostream & s)
{
   Canevas     *validCanevas_1 = new Canevas;
   Cercle      *validCercle_1 = new Cercle(0,0,5);
   Cercle      *validCercle_2 = new Cercle; 

   Carre       *validCarre_1 = new Carre(4,1,6);
   Carre       *validCarre_2 = new Carre;

   Rectangle   *validRectangle_1 = new Rectangle(2,8,3,9);
   Rectangle   *validRectangle_2 = new Rectangle(0,0,4,2);
   Rectangle   *validRectangle_3 = new Rectangle;
//1
   s <<"_____1. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;
   s <<"Ajout d'un cercle :      x=0, y=0, rayon=5                Retour : " <<validCanevas_1->ajouterForme(validCercle_1)<<endl;
   s <<"Ajout d'un carre :       x=4, y=1, cote=6                 Retour : "   <<validCanevas_1->ajouterForme(validCarre_1)<<endl;
   s <<"Ajout d'un rectangle :   x=2, y=8, largeur=3, hauteur=9,  Retour : "<<validCanevas_1->ajouterForme(validRectangle_1)<<endl<<endl;
//2
   s << "_____2. Activer la couche 1."<<"   Retour : " <<validCanevas_1->activerCouche(1)<<endl;
   s <<"Ajout d'un rectangle :   x=0, y=0, largeur=4, hauteur=2   Retour : "<<validCanevas_1->ajouterForme(validRectangle_2)<<endl<<endl;
//3
   s << "_____3. Afficher le canevas."<< endl;
      validCanevas_1->afficher(s);
   s<<endl;
//4
   s << "_____4. Afficher l'aire du canevas."<< endl;
   s<<"aire = "<<validCanevas_1->aire()<<endl<<endl;
//5
   s <<"_____5. Activer la couche 0."<<"   Retour : " <<validCanevas_1->activerCouche(0)<< endl;
   s <<"Ajout d'un rectangle :   x=0, y=0, largeur=1, hauteur=1    Retour : " <<validCanevas_1->ajouterForme(validRectangle_3)<<endl;
   s <<"Ajout d'un carre :       x=0, y=0, cote=1                  Retour : " <<validCanevas_1->ajouterForme(validCarre_2)<<endl;
   s <<"Ajout d'un cercle :      x=0, y=0, rayon=1                 Retour : " <<validCanevas_1->ajouterForme(validCercle_2)<<endl<<endl;
//6
   s <<"_____6. Activer la couche 2."<<"   Retour : " <<validCanevas_1->activerCouche(2)<< endl;
   s<<"a)Translation : x=4, y=3"<<"   Retour : " <<validCanevas_1->translater(4,3)<<endl;
   s<<"b)Les nouvelles coordonees de cette couche seront:"<<endl;
   s<<"  ~Un cercle(x=4, y=3, rayon=5)"<<endl;
   s<<"  ~Un carre(x=8, y=4, cote=6)"<<endl;
   s<<"  ~Un rectangle(x=6, y=11, largeur=3, hauteur=9)"<<endl<<endl;
//7
   s <<"_____7. Couche 3 initialisee."<<"   Retour : " <<validCanevas_1->initCoucheCanevas(3)<<endl<< endl;
      //s<<"Verefication du contenu de la couche apres init."<<endl;
      //validCanevas_1->couches[3].afficherCouche(s);
//8
   s <<"_____8. Couche 4 initialisee."<<"   Retour : " <<validCanevas_1->initCoucheCanevas(4)<<endl<< endl;
//9
   s <<"_____9. Afficher le canevas."<<endl;
   validCanevas_1->afficher(s);
   s<<endl;
//10
   s << "_____10. Afficher l'aire du canevas."<< endl;
   s<<"aire = "<<validCanevas_1->aire()<<endl<<endl;
//11
   s <<"_____11. Activer la couche 0."<<"   Retour : " <<validCanevas_1->activerCouche(0)<<endl;
   s<<"a)Retirer la forme 2 de la couche."<<"   Retour : "<<validCanevas_1->retirerForme(1)<<endl<<endl;
//12
   s <<"_____12. Afficher le canevas."<<endl;
   validCanevas_1->afficher(s);
   s<<endl;
//13
   s << "_____13. Afficher l'aire du canevas."<< endl;
   s<<"aire = "<<validCanevas_1->aire()<<endl<<endl;
//14
   s << "_____14. Reinitialiser le canevas."<<"   Retour : " <<validCanevas_1->reinitialiser()<< endl<<endl;
//15
   s <<"_____15. Afficher le canevas."<<endl;
   validCanevas_1->afficher(s);
   s<<endl;  
//16
   s << "_____16. Afficher l'aire du canevas."<< endl;
   s<<"aire = "<<validCanevas_1->aire()<<endl<<endl;
// Fin des test
   s<< "_____FIN DES TESTS_____"<<endl<<endl;
}

void Tests::tests_application_cas_02(ostream & s)
{
   Canevas     *Canevas_1 = new Canevas;
   Cercle      *Cercle_1 = new Cercle(0,0,-2);
   Cercle      *Cercle_2 = new Cercle; 

   Carre       *Carre_1 = new Carre(4,1,6);
   Carre       *Carre_2 = new Carre;

   Rectangle   *Rectangle_1 = new Rectangle(2,8,3,9);
   Rectangle   *Rectangle_2 = new Rectangle(0,0,4,2);
   Rectangle   *Rectangle_3 = new Rectangle;

   s<<"Test 1 : activation de la couche -1       Retour:"<< Canevas_1->activerCouche(-1)<<endl;
   s<<"Test 2 : activation de la couche 3        Retour:"<< Canevas_1->activerCouche(3)<<endl;
   s<<"Test 3 : activation de la couche 7        Retour:"<< Canevas_1->activerCouche(7)<<endl;
   s<<"Test 4 : ajout d'un cercle (Rayon= -2)    Retour:"<< Canevas_1->ajouterForme(Cercle_1)<<endl;
   s<<"Test 5 : affichage du canevas             "<<endl;
      Canevas_1->afficher(cout);
   s<<"Test 6 : initialisanton couche -2         Retour: " <<Canevas_1->initCoucheCanevas(-2)<< endl;
   s<<"Test 7 : activation de la couche 3        Retour:"<< Canevas_1->activerCouche(3)<<endl;
   s<<"Test 8 : suppression de la forme -2       Retour: " <<Canevas_1->retirerForme(-2)<<endl;
   s<<"Test 9 : suppression de la forme 2        Retour: " <<Canevas_1->retirerForme(2)<<endl;
   s<<"Test 10 : suppression de la forme 1       Retour: " <<Canevas_1->retirerForme(0)<<endl;
   s<<"         affichage du canevas             "<<endl;
      Canevas_1->afficher(cout); 
   s<<"Test 11: verification aire canevas vide   Aire: " <<Canevas_1->aire()<<endl;
   s<<"  (Ajout de forme pour test de translation et affichage de celle-ci) " <<endl;
      Canevas_1->ajouterForme(Cercle_2);
      Canevas_1->ajouterForme(Carre_2);
      Canevas_1->ajouterForme(Rectangle_3);
      Canevas_1->afficher(cout); 
   s<<"Test 12: Translation de couche(x=1,y=2)   Retour: " <<Canevas_1->translater(10,2)<<endl;
      Canevas_1->afficher(cout); 
   s<<"Test 13:    Aire: " <<Canevas_1->aire()<<endl;
   //tests_unitaires_carre();
   //tests_unitaires_cercle();
   //tests_unitaires_rectangle();

   //cout << "TESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
