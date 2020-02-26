#include "Joueur.h"

Joueur::Joueur() : p(){
    
}

Paquet Joueur::getp() {
    return this->p;

}

void Joueur::prendreCarte(Carte& c) {
    this->p.ajout(c);
}

Carte Joueur::jouerCarte() {
    this->p.extrait();
}

void Joueur::afficher() {
    this->p.afficher();
}

int Joueur::nb_carte() {
    return this->p.nb_carte();
}


