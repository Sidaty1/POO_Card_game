#include "Partie.h"

Partie::Partie() {
    Paquet p;
    this->joueur1.jouerCarte();
    this->joueur2.jouerCarte();
    p.PaquetComplet();
    p.melanger();
   // p.afficher();
    for(int i = 0; i<= 26; i++) {
        this->joueur1.prendreCarte(p.retourner_carte_i(i));
        this->joueur2.prendreCarte(p.retourner_carte_i(i+26)); 
    }
    this->termine = false;
    this->trace = true;
}

Joueur Partie::getJoueur(int i) {
    if(i == 1) return this->joueur1;    
    else if(i == 2) return this->joueur2;
    else cout << "Il n y a que 2 joueurs " << endl;
}

int Partie::jouer() {
    int i = 0;
//    while(!this->termine) {
        while(this->joueur1.nb_carte() != 1 || this->joueur2.nb_carte() != 1) {
            i++;
            if(this->joueur1.getp().retourner_carte_i(0) > this->joueur2.getp().retourner_carte_i(0)) {
                Carte c1 = this->joueur1.jouerCarte();
                Carte c2 = this->joueur2.jouerCarte();
                this->joueur1.prendreCarte(c1);
                this->joueur1.prendreCarte(c2);
                if(trace) {
                    cout << "La carte du joueur 1 est " << c1 << endl << "La carte du joueur 2 est " << c2 << endl << endl << "Le joueur 1 à la carte la plus forte donc il gagne ! " << endl << endl << "Le joueur 1 a désormais " << this->joueur1.nb_carte() << endl << "Le joueur 2 a désormais " << this->joueur2.nb_carte() << endl;

                }
            } else if(this->joueur1.getp().retourner_carte_i(0) < this->joueur2.getp().retourner_carte_i(0)) {
                Carte c1 = this->joueur1.jouerCarte();
                Carte c2 = this->joueur2.jouerCarte();
                this->joueur2.prendreCarte(c1);
                this->joueur2.prendreCarte(c2);
                    cout << "La carte du joueur 1 est " << c1 << endl << "La carte du joueur 2 est " << c2 << endl << endl << "Le joueur 2 à la carte la plus forte donc il gagne ! " << endl << endl << "Le joueur 1 a désormais " << this->joueur1.nb_carte() << endl << "Le joueur 2 a désormais " << this->joueur2.nb_carte() << endl;
            } else {
                Carte c1 = this->joueur1.jouerCarte();
                Carte c2 = this->joueur2.jouerCarte();
                this->joueur1.prendreCarte(c1);
                this->joueur2.prendreCarte(c2);
                cout << "La carte du joueur 1 est " << c1 << endl << "La carte du joueur 2 est " << c2 << endl << endl << "Le deux cartes sont égaux donc personne ne gagne ! " << endl << endl << "Le joueur 1 a toujours " << this->joueur1.nb_carte() << " Cartes "<< endl << "Le joueur 2 a toujours " << this->joueur2.nb_carte() << "Cartes " << endl;    
            }
        
        //}
        this->termine = true;
        if(this->joueur1.nb_carte() > this->joueur2.nb_carte()) {cout << endl << "Le joueur 1 a gagné ! " << endl;
        } else {  cout << endl <<"Le joueur 2 à gagné " << endl;}
    }
}


void Partie::activer_desactiver_trace(bool activer) {
    if(activer)  this->trace = true;
    else this->trace = false;
}


