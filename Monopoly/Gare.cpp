#include <string>
#include "CasePropriete.h"
#include "Gare.h"
#include "GroupeGare.h"
#include <iostream>
#include "GroupeTerrain.h"
#include "GroupeServicePublic.h"
using namespace std;



Gare::Gare() {

}

Gare::Gare(int position, std::string classe,int loyerGare[4], std::string nom, int prix, std::string type_couleur) : CasePropriete(position, classe, nom, prix, type_couleur) {
    for (int i = 0; i < 4; i++) {
        this->loyer_[i] = loyerGare[i];
    }
}

GroupeGare* Gare::getGroupeGare() {
    return this->groupeGare_;
}

int Gare::getLoyer() {
    //GroupeGare groupeGare = *(this->getGroupeGare());
    //return this->loyer_[groupeGare.nombreGarePossedees(this->getProprietaire()) - 1];
}

int Gare::getValeurHypotheque() {
    int valHypotheque = this->getPrix() / 2;
    return valHypotheque;
}
