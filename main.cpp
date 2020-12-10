#include <iostream>
#include <string>
#include "epargne.h"

using namespace std;

inline void message(string s){
    string separation(s.size(), '-');
    cout << separation << endl;
    cout << s << endl;
    cout << separation << endl;
}

int main() {
    Epargne cpt{0, 1000, "mon compte", 0.01};
    cpt.affiche();
    cpt.retire(300);
    message("Compte apres retirer 300");
    cpt.affiche();
    cpt.update();
    message("Compte apres mise a jour du credit");
    cpt.affiche();
    Epargne cpt2{500, 2634.57, "second compte", 0.05};
    message("deuxieme compte");
    cpt2.affiche();
    cpt2.update();
    message("le compte apres interet");
    cpt2.affiche();
    return 0;
}