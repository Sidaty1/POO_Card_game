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
#include "Paquet.h"

#pragma once


using namespace std;

class Joueur {

    public:
        Joueur();
        void prendreCarte(Carte& c);
        Carte jouerCarte();
        void afficher();
        int nb_carte();
        Paquet getp();
    private:
        Paquet p;
};
