#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
using namespace std;


class Gare : public CasePropriete {
public:
    Gare();
    Gare(int loyer[4], string nom, int prix, int valeurHypotheque, string type_couleur, int position, Joueur proprietaire) {
        CasePorpriete(nom, prix, valeurHypotheque, type_couleur, position, proprietaire);
        this->loyer_ = loyer;
    }

private:
    int loyer_[4];
};