#include <iostream>
#include "compte.h"

using namespace std;

int Compte::nextId = 1000;

void Compte::affiche() const {
    cout << "compte #" << id << endl;
    cout << "debit: " << debit << endl;
    cout << "credit: " << credit << endl;
    cout << "solde: " << solde() << endl;
}

void Compte::ajout(double toAdd){
    credit += toAdd;
}

void Compte::retire(double toAdd){
    debit += toAdd;
}

double Compte::solde() const {
    return credit - debit;
}