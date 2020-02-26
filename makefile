Carte.o : Carte.h Carte.cpp
	g++ -c Carte.cpp

ListeCartes.o : Carte.h ListeCartes.h ListeCartes.cpp
	g++ -c ListeCartes.cpp

Paquet.o : Carte.h ListeCartes.h Paquet.h Paquet.cpp
	g++ -c Paquet.cpp

Joueur.o : Carte.h Paquet.h Joueur.h Joueur.cpp
	g++ -c Joueur.cpp

Partie.o : Carte.h Paquet.h Joueur.h Partie.h Partie.cpp
	g++ -c Partie.cpp

main.o : Carte.h ListeCartes.h Paquet.h Joueur.h Partie.h main.cpp
	g++ -c main.cpp

main : Carte.o ListeCartes.o Paquet.o Joueur.o Partie.o main.o
	g++ -o main Carte.o ListeCartes.o Paquet.o Joueur.o Partie.o main.o
