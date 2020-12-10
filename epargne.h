#ifndef EPARGNE_GUARD
#define EPARGNE_GUARD

#include "compte.h"

class Epargne : public Compte {
    private:
        char* nom;
        double taux;
    public:
        Epargne(double debit, double credit, char* nom, double taux): 
            Compte{debit, credit}, nom{nom}, taux{taux} {}
        Epargne(char* nom, double taux): Compte{}, nom{nom}, taux{taux} {}
        void affiche() const ;
        double interet() const ;
        void update();
};

#endif