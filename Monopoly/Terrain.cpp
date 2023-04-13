#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;



Terrain();
Terrain(int loyer[5], string nom, int prix, int valeurHypotheque, string type_couleur, int position, Joueur proprietaire) {
    CasePropriete(nom, prix, valeurHypotheque, type_couleur, position, proprietaire);
    this->loyer_ = loyer;
    this->nombreMaison_ = 0;
}
int getLoyer() {
    return this->loyer_[nombreMaison_]
}
void construireMaison() {
    if (this->nombreMaison_ < 5)
    {
        this->nombreMaison_ += 1;
    }
}
void vendreMaison() {
    if (this->nombreMaison_ > 0) {
        this->nombreMaison_ -= 1;
    }
}
