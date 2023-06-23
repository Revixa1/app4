#
# Auteur: C.-A. Brunet
# Date: 08 janvier 2028
# Description: compilation de graphicus-02. Ce fichier fait partie de 
#	la distribution de Graphicus.
#

graphicus-02: graphicus-02.o tests.o canevas.o couche.o forme.o 
	g++ -o graphicus-02 graphicus-02.o tests.o canevas.o couche.o forme.o 

graphicus-02.o: graphicus-02.cpp canevas.h couche.h forme.h
	g++ -c graphicus-02.cpp

tests.o: tests.cpp tests.h canevas.h couche.h forme.h
	g++ -c tests.cpp

canevas.o: canevas.cpp canevas.h couche.h forme.h
	g++ -c canevas.cpp


couche.o: couche.cpp couche.h forme.h
	g++ -c couche.cpp

forme.o: forme.cpp forme.h
	g++ -c forme.cpp

clean:
	rm  -f *.o
