#include <string>
#include "Case.h"
#include "Joueur.h"
#include "ServicePublic.h"
#include <iostream>
#include "GroupeTerrain.h"
using namespace std;



ServicePublic::ServicePublic() {

}

ServicePublic::ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur) : Case(position, classe, nom, prix, type_couleur, 0) {
    for (int i = 0; i < 4; i++) {
        this->loyer_[i] = loyer[i];
    }
}

/*GroupeServicePublic* ServicePublic::getGroupeServicePublic() {
    return this->groupeServicePublic_;
}*/

int ServicePublic::getLoyer() {
    //return this->loyer_[this->getGroupeServicePublic().nombreServicePublicPossedees(this->getProprietaire())-1];
    return 0;
}

int ServicePublic::getValeurHypotheque() {
    int valHypotheque = this->getPrix() / 2;
    return valHypotheque;
}
