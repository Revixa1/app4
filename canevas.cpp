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
   couches = new Couche[MAX_COUCHES];
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
   
   delete [] couches;
   
      couches = new Couche[MAX_COUCHES];
   for ( int i =0; i<MAX_COUCHES; i++)
   {
      if ( i==0)
      {
                  //cout<<"ici"<<endl;

         couches[i].initCouche();
         //cout<<"ici"<<endl;
         couches[i].setEtatCouche(1);
      }
      else
      {
         couches[i].initCouche();
      }
   }

   return true;
}

bool Canevas::initCoucheCanevas(int index)
{
   if (index<=MAX_COUCHES && index>=0)
   {
      couches[index].initCouche();
      return true;
   }
   else
   {return false;}
   
   
}

bool Canevas::activerCouche(int index)
{
 if (index <0 || index >= 5)
 { return false;}
 else
 {
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      if (couches[i].getEtatCouche()==1)
      {
         couches[i].setEtatCouche(2);
      }
   }
   couches[index].setEtatCouche(1);
   return true;
 }
}

bool Canevas::ajouterForme(Forme *p_forme)
{
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      if (couches[i].getEtatCouche()==1)
      {
         couches[i].ajouterForme(p_forme);
         return true;
      }
   }
   cout<<"Aucune couche n'est active."<<endl;
   return false;
}

bool Canevas::retirerForme(int index)
{
   Forme* ptrForme;
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      if (couches[i].getEtatCouche()==1)
      {
         ptrForme=couches[i].retirerForme(index);
        
         if (ptrForme==NULL)
         {
            return false;
         }
         else 
         {
            delete ptrForme;
            return true;
         }
      }
   }
   cout<<"Aucune couche n'est active."<<endl;
   return false;
}

double Canevas::aire()
{
   double airTot=0.0;
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      airTot=airTot+couches[i].aireTotale();
   }
   return airTot;
}

bool Canevas::translater(int deltaX, int deltaY)
{
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      if (couches[i].getEtatCouche()==1)
      {
         
         return couches[i].translaterCouche(deltaX , deltaY);
      }
   }
   cout<<"Aucune couche n'est active."<<endl; 
   return false;
}

void Canevas::afficher(ostream & s)
{
   for (int i=0 ; i<MAX_COUCHES ; i++ )
   {
      s<<"----- Couche "<<i<<endl;
      
      
      
         couches[i].afficherCouche(s);
     
     
   }
}
