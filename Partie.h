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
#include "Joueur.h"

using namespace std;

#pragma once


class Partie {

    public:
        Partie();
        int jouer();
        void activer_desactiver_trace(bool activer);
        Joueur getJoueur(int i);
    private:
        Joueur joueur1, joueur2;
        bool termine;
        bool trace;

};
