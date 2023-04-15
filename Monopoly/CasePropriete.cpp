#include <string>
#include "Joueur.h"
#include "Case.h"
#include "CasePropriete.h"


using namespace std;

CasePropriete::CasePropriete();
CasePropriete::CasePropriete(int position, std::string nom, int prix, std::string type_couleur) {
    Case(position);
    this->nom_ = nom;
    this->prix_ = prix;
    this->type_couleur_ = type_couleur;
    this->hypotheque_ = false;
}
int CasePropriete::getPrix() {
    return this->prix_;
}
Joueur CasePropriete::getProprietaire() {
    return this->proprietaire_;
}
std::string CasePropriete::getNom() {
    return this->nom_;
}
bool CasePropriete::getHypotheque() {
    return this->hypotheque_;
}
std::string CasePropriete::getTypeCouleur() {
    return this->type_couleur_;
}
void CasePropriete::setProprietaire(Joueur proprietaire) {
    this->proprietaire_ = proprietaire;
}
void CasePropriete::setHypotheque(bool b) {
    this->hypotheque_ = b;
}