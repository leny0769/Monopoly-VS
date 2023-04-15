#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
#include "Terrain.h"
using namespace std;



Terrain::Terrain();
Terrain::Terrain(int position, int loyer[5], string nom, int prix, string type_couleur) {
    CasePropriete(position,nom, prix, type_couleur);
    this->loyer_ = loyer;
    this->nombreMaison_ = 0;
}
int Terrain::getLoyer() {
    return this->loyer_[nombreMaison_]
}
void Terrain::construireMaison() {
    if (this->nombreMaison_ < 5)
    {
        this->nombreMaison_ += 1;
    }
}
void Terrain::vendreMaison() {
    if (this->nombreMaison_ > 0) {
        this->nombreMaison_ -= 1;
    }
}
