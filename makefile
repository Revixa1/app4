#
# Auteur: C.-A. Brunet
# Date: 08 janvier 2028
# Description: compilation de graphicus-02. Ce fichier fait partie de 
#	la distribution de Graphicus.
#

graphicus-02: graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o cercle.o vecteur.o
	g++ -o graphicus-02 graphicus-02.o tests.o canevas.o couche.o forme.o rectangle.o carre.o cercle.o

graphicus-02.o: graphicus-02.cpp tests.h
	g++ -c graphicus-02.cpp

tests.o: tests.cpp tests.h canevas.h couche.h forme.h rectangle.h carre.h cercle.h
	g++ -c tests.cpp

canevas.o: canevas.cpp canevas.h
	g++ -c canevas.cpp


couche.o: couche.cpp couche.h vecteur.h
	g++ -c couche.cpp

forme.o: forme.cpp forme.h
	g++ -c forme.cpp 

rectangle.o: rectangle.cpp rectangle.h
	g++ -c rectangle.cpp

carre.o: carre.cpp carre.h rectangle.h
	g++ -c carre.cpp


cercle.o: cercle.cpp cercle.h
	g++ -c cercle.cpp

vecteur.o: vecteur.cpp vecteur.h
	g++ -c vecteur.cpp

clean:
	rm  -f *.o
