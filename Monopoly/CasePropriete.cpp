#include <string>
#include "Joueur.h"
#include "Case.h"

using namespace std;


class CasePropriete : public Case {
private:
    string nom_;
    int prix_;
    int valeurHypotheque_;
    Joueur proprietaire_;
    bool hypotheque_;
    string  type_couleur_;

public:
    CasePropriete();
    CasePropriete(string nom, int prix, int valeurHypotheque, string type_couleur)
    {
        this->nom_ = nom;
        this->prix_ = prix;
        this->valeurHypotheque_ = valeurHypotheque;
        this->type_couleur_ = type_couleur;
        this->valeurHypotheque_ = false;
    }
    int getPrix() {
        return this->prix_;
    }
    bool getHypotheque() {
        return this->hypotheque_;
    }
    void setProprietaire(Joueur proprietaire) {
        this->proprietaire_ = proprietaire;
    }
    void hypothequer() {
        this->hypotheque_ = true;
    }
    void deshypothequer() {
        this->hypotheque_ = false;
    }

};