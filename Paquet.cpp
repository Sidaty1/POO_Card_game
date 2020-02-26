#include "Paquet.h"

Paquet::Paquet() : ListeCartes(52) {

}



void Paquet::ajout(Carte& c) {
    if(this->contient(c)) {
        cout << "La carte est déjà dans le Paquet ! " << endl;
    } else {        
         ListeCartes::ajout(c);
    }    

}

Paquet creerPaquetComplet() {
    Paquet p;
    for(int i = 1; i<5; i++) {
        for(int j = 2; j<15; j++) {
            Carte c(j,i);
            p.ajout(c);
        }
    }
    Carte c(14,4);
    p.ajout(c);
    p.extrait();
    return p;
}
void Paquet::PaquetComplet() {
    while(this->nb_carte() > 0) {
        this->extrait();
        this->nb_carteset(nb_carte() - 1);
    }
    for(int i = 1; i<5; i++) {
        for(int j = 2; j<15; j++) {
            Carte c(j,i);
            this->ajout(c);
        }
    }
    Carte c(14,4);
    this->ajout(c);
    this->extrait();    
}
