#ifndef COMPTE_GUARD   
#define COMPTE_GUARD

class Compte {
    private:
        static int nextId;
        int id = nextId++;
        double debit = 0, credit = 0;
    public:
        Compte() {}
        Compte(double debit, double credit): debit{debit}, credit{credit} {}
        virtual void affiche() const ;
        void ajout(double);
        void retire(double);
        double solde() const ;
};

#endif