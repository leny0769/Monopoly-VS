#include <string>
#include "Joueur.h"
#include "Case.h"
#include <stdexcept>;

using namespace std;

Case::Case() {

}

Case::Case(int position, const string classe, std::string nom, int prix, std::string type_couleur, int taxe) {
    this->position_ = position;
    this->class_ = classe;
    this->nom_ = nom;
    this->prix_ = prix;
    this->type_couleur_ = type_couleur;
    this->hypotheque_ = false;
    this->sansProprietaire_ = true;
    this->argentStock_ = 0;
    this->taxe_ = taxe;
}

bool Case::getSansProprietaire() {
    return this->sansProprietaire_;
}

int Case::getPrix() {
    return this->prix_;
}

Joueur Case::getProprietaire() {
    return this->proprietaire_;
}

string Case::getNom() {
    return this->nom_;
}

bool Case::getHypotheque() {
    return this->hypotheque_;
}

string Case::getTypeCouleur() {
    return this->type_couleur_;
}

void Case::setProprietaire(Joueur& proprietaire) {
    this->proprietaire_ = proprietaire;
    this->sansProprietaire_ = false;
}

void Case::setHypotheque(bool b) {
    Joueur proprietaire = this->getProprietaire();
    if (b == true) {
        proprietaire.addArgent(this->getValeurHypotheque());
        this->hypotheque_ = b;
    }
    else {
        if (proprietaire.getSolde() >= this->getValeurHypotheque()) {
            proprietaire.subArgent(this->getValeurHypotheque());
            this->hypotheque_ = b;
        }
        else {
            throw std::logic_error("Pas assez de fonds pour déshypothéquer");
        }
    }
    
}
