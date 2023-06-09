#include <string>
#include "Case.h"
#include "Joueur.h"
#include "Terrain.h"
//#include "GroupeTerrain.h"
using namespace std;



Terrain::Terrain() {
};

Terrain::Terrain(int position, std::string classe, int loyer[5], string nom, int prix, string type_couleur) : Case(position, classe, nom, prix, type_couleur, 0) {
    for (int i = 0; i < 5; i++) {
        this->loyer_[i] = loyer[i];
    }
    this->nombreMaison_ = 0;
}

/*GroupeTerrain* Terrain::getGroupeTerrain() {
    return this->groupeTerrain_;
}*/

int Terrain::getLoyer() {
    int facteur = 1;
    /*if (this->getGroupeTerrain().uniqueProprietaire()) {
        facteur = 2;
    }*/
    return this->loyer_[nombreMaison_] * facteur;
}

int Terrain::getValeurHypotheque() {
    int valHypotheque = (this->getPrix() * (1 + this->nombreMaison_ / 5)) / 2;
    return valHypotheque;
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
