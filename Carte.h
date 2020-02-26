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

#pragma once

using namespace std;


class Carte {

    public:
        Carte(int numero, int couleur);
        Carte();
        friend ostream& operator<<(ostream& flux, const Carte& carte);
        int getN();
        int getC();
        void setN(int num);
        void setC(int cou);
        bool operator<(Carte c);
        bool operator>(Carte c);
        bool operator==(Carte c);
        bool operator!=(Carte c);
        //void afficher();
    private:
        int numero;
        int couleur;

};
