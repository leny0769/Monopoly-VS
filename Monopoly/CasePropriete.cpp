#include <string>
#include "Joueur.h"
#include "Case.h"
#include "CasePropriete.h"
#include <stdexcept>;


using namespace std;

CasePropriete::CasePropriete();
CasePropriete::CasePropriete(int position, std::string classe, std::string nom, int prix, std::string type_couleur) {
    Case(position,classe);
    this->nom_ = nom;
    this->prix_ = prix;
    this->type_couleur_ = type_couleur;
    this->hypotheque_ = false;
    this->sansProprietaire_ = true;
}
bool CasePropriete::getSansProprietaire() {
    return this->sansProprietaire_;
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
void CasePropriete::setProprietaire(Joueur& proprietaire) {
    this->proprietaire_ = proprietaire;
    this->sansProprietaire_ = false;
}
void CasePropriete::setHypotheque(bool b) {
    Joueur proprietaire = this->getProprietaire();
    if (b == true) {
        proprietaire.addArgent(this->getValeurHypotheque());
        this->hypotheque_ = b;
    }
    else {
        if (proprietaire.getSolde() >= this->getValeurHypotheque()) {
            proprietaire.subArgent(this->getValeurHypotheque())
            this->hypotheque_ = b;
        }
        else {
            throw std::logic_error("Pas assez de fonds pour déshypothéquer");
        }
    }
    
}
int CasePropriete::getValeurHypotheque() {
    //Ne fait rien mais est redéfinie par chaque classe et est utilisée ici
}