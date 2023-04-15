#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
#include "ServicePublic.h"
#include "GroupeServicePublic.h"
using namespace std;



ServicePublic::ServicePublic();
ServicePublic::ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur) {
    CasePropriete(position,classe,nom, prix,type_couleur);
    this->loyer_ = loyer;
}

GroupeServicePublic ServicePublic::getGroupeServicePublic() {
    return this->groupeServicePublic_;
}

int ServicePublic::getLoyer() {
    return this->loyer_[this->getGroupeServicePublic().nombreServicePublicPossedees(this->getProprietaire())-1];
}

int ServicePublic::getValeurHypotheque() {
    int valHypotheque = this.getPrix() / 2;
    return valHypotheque;
}
