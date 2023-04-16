#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
#include <list>
#include "GroupeTerrain.h"

using namespace std;

GroupeTerrain::GroupeTerrain() {

}

GroupeTerrain::GroupeTerrain(std::string couleur_ou_type) {
    this->couleur_ou_type_ = couleur_ou_type;
}

void GroupeTerrain::addProperty(CasePropriete& propriete) {
    this->listProprietes.push_back(propriete);
}

std::string GroupeTerrain::getName() {
    return this->couleur_ou_type_;
}

bool GroupeTerrain::uniqueProprietaire() {
    Joueur premierProp = this->listProprietes.front().getProprietaire();
    for (CasePropriete const& i : this->listProprietes)
    {
        /*if (i.getProprietaire() != premierProp) {
            return false;
        }*/
    }
    return true;
}