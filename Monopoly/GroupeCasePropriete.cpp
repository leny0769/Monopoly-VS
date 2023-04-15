#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
#include <list>
#include "GroupeCasePropriete.h"

using namespace std;

GroupeCasePropriete::GroupeCasePropriete();
GroupeCasePropriete::GroupeCasePropriete(std::string couleur_ou_type) {
    this->couleur_ou_type = couleur_ou_type;
}
void GroupeCasePropriete::addProperty(CasePropriete propriete) {
    this->listProprietes.push_back(propriete);
}

std::string GroupeCasePropriete::getName() {
    return this->couleur_ou_type_;
}

bool GroupeCasePropriete::uniqueProprietaire() {
    Joueur premierProp = this->listProprietes[0].getProprietaire();
    for (CasePropriete const& i : this->listProprietes)
    {
        if (i.getProprietaire() != premierProp) {
            return false;
        }
    }
    return true;
}