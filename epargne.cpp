#include <iostream>
#include "epargne.h"

using namespace std;

void Epargne::affiche() const {
    Compte::affiche();
    cout << "le nom du compte: " << nom << endl;
    cout << "le taux du compte: " << taux << endl;
}

double Epargne::interet() const {
    return solde() * taux;
}
void Epargne::update() {
    ajout(interet());
}