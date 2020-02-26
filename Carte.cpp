#include "Carte.h"

Carte::Carte(int numero, int couleur) {
    this->numero = numero;
    this->couleur = couleur;
}   

Carte::Carte() {
    numero = 0;
    couleur = 0;
}



ostream& operator<<(ostream& flux, const Carte& carte) {
    if(carte.couleur == 1) {
        if(carte.numero < 11) {
            flux << carte.numero << " de Trefle ";
        }
        else if(carte.numero == 11) {
            flux << "Valet de Trefle";
        }
        else if( carte.numero == 12) {
            flux << "Dame de Trefle";
        } else if( carte.numero == 13) {
            flux << "Roi de Trefle" ;
        } else if (carte.numero == 14) {
            flux << "As de Trefle";
        }
    } else if(carte.couleur == 2) {
        if(carte.numero < 11) {
            flux << carte.numero << " de Careaux ";
        }
        else if(carte.numero == 11) {
            flux << "Valet de Careau";
        }
        else if( carte.numero == 12) {
            flux << "Dame de Careau";
        } else if( carte.numero == 13) {
            flux << "Roi de Careau" ;
        } else if (carte.numero == 14) {
            flux << "As de Careau";
        }
    } else if(carte.couleur == 3) {
        if(carte.numero < 11) {
            flux << carte.numero << " de Coeur ";
        }
        else if(carte.numero == 11) {
            flux << "Valet de Coeur";
        }
        else if( carte.numero == 12) {
            flux << "Dame de Coeur";
        } else if( carte.numero == 13) {
            flux << "Roi de Coeur" ;
        } else if (carte.numero == 14) {
            flux << "As de Coeur";
        }
    } else if(carte.couleur == 4) {
        if(carte.numero < 11) {
            flux << carte.numero << " de Pique ";
        }
        else if(carte.numero == 11) {
            flux << "Valet de Pique";
        }
        else if( carte.numero == 12) {
            flux << "Dame de Pique";
        } else if( carte.numero == 13) {
            flux << "Roi de Pique" ;
        } else if (carte.numero == 14) {
            flux << "As de Pique";
        }
    } else if(carte.couleur == 0) {
        if(carte.numero == 0) {
            flux << "Carte nulle ";
    }
    }
    return flux;

}
int Carte::getN() {
    return numero;
}

int Carte::getC() {
    return couleur;
}

void Carte::setN(int num) {
    numero = num;
}

void Carte::setC(int cou) {
    couleur = cou;
}

bool Carte::operator<   (Carte c) {
    if(this->numero < c.numero) {
        return true;
    } else if(this->numero > c.numero) return false;
    else {
        if(this->couleur < c.couleur) return true;
        else if(this->couleur > c.couleur) return false;
    }
}

bool Carte::operator>(Carte c) {
    if(this->numero > c.numero) {
        return true;
    } else if(this->numero < c.numero) return false;
    else {
        if(this->couleur > c.couleur) return true;
        else if(this->couleur < c.couleur) return false;
    }
}

bool Carte::operator==(Carte c) {
    if(this->numero == c.numero && this->couleur == c.couleur) return true;
    else return false;
}

bool Carte::operator!=(Carte c) {
    if(this->operator==(c)) return false;
    else return true;
}

