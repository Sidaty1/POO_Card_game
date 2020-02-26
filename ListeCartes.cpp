#include "ListeCartes.h"

ListeCartes::ListeCartes(int taille) {
    this->taille = taille;
    cartes = new Carte[taille];
    this->nb_cartes = 0; 
    this->extrait();
}

ListeCartes::ListeCartes(ListeCartes& l) {
    this->taille = l.taille;
    this->nb_cartes = l.nb_cartes;
    cartes = new Carte[taille];
    for(int i = 0; i< nb_cartes; i++) {
        cartes[i] = l.cartes[i];
    }
}

ListeCartes::~ListeCartes() {
    delete [] cartes;
}

Carte& ListeCartes::retourner_carte_i(int i) {
    return this->cartes[i];
    
}

int ListeCartes::tailleget() {
    return this->taille;
}

void ListeCartes::nb_carteset(int i) {
    this->nb_cartes = i;
}

void ListeCartes::tailleset(int i) {
    this->taille = i;
}

void ListeCartes::operator=(ListeCartes& l) {
    this->taille = l.taille;
    this->nb_cartes = nb_cartes;
    for(int i = 0; i<nb_cartes; i++) {
        cartes[i] = l.cartes[i];
    }
}

void ListeCartes::ajout(Carte& c) {
        this->nb_cartes += 1;
        cartes[this->nb_carte()].setN(c.getN());
        cartes[this->nb_carte()].setC(c.getC());
    }

void ListeCartes::changer_carte_i(int i, Carte& c)  {
        this->cartes[i].setN(c.getN());
        this->cartes[i].setC(c.getC());
}
Carte ListeCartes::extrait() {
    Carte res = cartes[0];
    for(int i = 0; i<nb_cartes; i++) {
        cartes[i] = cartes[i+1];
    }
    nb_cartes--;
    //cout << "La carte (" << res << ") à été extraite" << endl;
    return res;
}

void ListeCartes::afficher() {
    for(int i = 0; i<=nb_cartes; i++) {
        cout << cartes[i] << endl;
    }
}

bool ListeCartes::contient(Carte& c) {
    for(int i = 0; i<=nb_cartes; i++) {
        if(cartes[i].getN() == c.getN() && cartes[i].getC() == c.getC()) return true;
        } return false;
}

int ListeCartes::nb_carte() {
    return nb_cartes + 1;
} 

void ListeCartes::melanger() {
    int t = 1000, r, r1;
    Carte temp(2,1);
    for(int k = 0; k < t; k++) {
        r = rand()%(this->nb_cartes);
        if(r<this->nb_cartes) r++;
        r1 = rand()%(this->nb_cartes);
        temp.setN(this->cartes[r].getN());
        temp.setC(this->cartes[r].getC());
        this->cartes[r].setN(this->cartes[r1].getN());
        this->cartes[r].setC(this->cartes[r1].getC());
        this->cartes[r1].setN(temp.getN());
        this->cartes[r1].setC(temp.getC());
    }

}
