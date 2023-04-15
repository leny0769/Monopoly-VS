#include <string>
#include "CasePropriete.h"
#include "Gare.h"
#include "GroupeGare.h"
using namespace std;



Gare::Gare();
Gare::Gare(int position, std::string classe,int loyerGare[4], std::string nom, int prix, std::string type_couleur) {
    CasePropriete(position,classe,nom, prix,type_couleur);
    this->loyer_ = loyerGare;
}

GroupeGare Gare::getGroupeGare() {
    return this->groupeGare_;
}
int Gare::getLoyer() {
    return this->loyer_[this->getGroupeGare().nombreGarePossedees(this->getProprietaire()) - 1];
}
int Gare::getValeurHypotheque() {
    int valHypotheque = this->getPrix() / 2;
    return valHypotheque;
}
