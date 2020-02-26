#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>
#include <math.h>
#include <vector>
#include <string>
#include <string.h>
#include <map>
#include <algorithm>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include "Carte.h"
using namespace std;

#pragma once


class ListeCartes {

    public:
        ListeCartes(int taille);
        ListeCartes(ListeCartes& l);
        ~ListeCartes();
        void operator=(ListeCartes& l);
        void ajout(Carte& c);
        Carte extrait();
        void afficher();
        bool contient(Carte& c);
        int nb_carte();
        void nb_carteset(int i);
        int tailleget();
        void tailleset(int i);
        void melanger();
        void changer_carte_i(int i, Carte& c);
        Carte& retourner_carte_i(int i);
     private:
        Carte *cartes;
        int taille;
        int nb_cartes;

};


