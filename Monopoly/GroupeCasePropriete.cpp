#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;

GroupeCasePropriete();
GroupeCasePropriete(std::string couleur_ou_type){
    this.couleur_ou_type = coueur_ou_type;

void addProperty(CasePropriete* propriete) {
    this.vecProprietes.push_back(propriete);
}

string getName() const override {
    return couleur_ou_type_;
}

bool uniqueProprietaire() {
    Joueur premierProp = this.vecProprietes[0].getProprietaire();
    for (CasePropriete cp : this.vecProprietes)
    {
        if (cp.getProprietaire() != premierProp) {
            return false;
        }
    }
    return true;
}