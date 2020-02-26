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
#include "ListeCartes.h"

#pragma once

using namespace std;


class Paquet : public ListeCartes{

    public:
        Paquet();
        void ajout(Carte& c);
        void operator=(Paquet l);
        void PaquetComplet();
    private:
                

};
