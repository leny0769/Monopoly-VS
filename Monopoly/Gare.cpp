#include <string>
#include "Case.h"
#include "Gare.h"
#include <iostream>
#include "GroupeTerrain.h"
using namespace std;



Gare::Gare() {

}

Gare::Gare(int position, std::string classe,int loyerGare[4], std::string nom, int prix, std::string type_couleur) : Case(position, classe, nom, prix, type_couleur, 0) {
    for (int i = 0; i < 4; i++) {
        this->loyer_[i] = loyerGare[i];
    }
}

/*GroupeGare* Gare::getGroupeGare() {
    return this->groupeGare_;
}*/

int Gare::getLoyer() {
    //GroupeGare groupeGare = *(this->getGroupeGare());
    //return this->loyer_[groupeGare.nombreGarePossedees(this->getProprietaire()) - 1];
    return 0;
}

int Gare::getValeurHypotheque() {
    int valHypotheque = this->getPrix() / 2;
    return valHypotheque;
}
