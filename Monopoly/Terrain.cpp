#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;



Terrain();
Terrain(int position, int loyer[5], string nom, int prix, string type_couleur) {
    CasePropriete(position,nom, prix, type_couleur);
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
