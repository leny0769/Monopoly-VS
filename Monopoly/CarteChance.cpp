#include <string>
#include "Carte.h"
#include <stdexcept>
#include "CarteChance.h"
using namespace std;


CarteChance::CarteChance();
CarteChance::CarteChance(int id) {
    Carte(id);
    if (id == 0) {
        this->description_ = "Rendez-vous Rue de la Paix";
    }
    if (id == 1) {
        this->description_ = "Avancer jusqu'à la case départ";
    }
    if (id == 2) {
        this->description_ = "Rendez-vous à l'Avenue Henri-Martin. Sivous passez par la case départ, recevez 200 M";
    }
    if (id == 3) {
        this->description_ = "Avancez au Boulevard de La Villette. Si vous passez par la case départ, recevez 200 M";
    }
    if (id == 4) {
        this->description_ = "Vous êtes imposé pour les réparations de voirie à raison de 40 M par maison et 115 M par hôtel";
    }
    if (id == 5) {
        this->description_ = "Avancez jusqu’à la Gare de Lyon. Si vous passez par la case départ, recevez 200 M";
    }
    if (id == 6) {
        this->description = "Vous avez gagné le prix de mots croisés. Recevez 100 M";
    }
    if (id == 7) {
        this->description_ = "La banque vous verse un dividende de 50 M";
    }
    if (id == 8) {
        this->description_ = "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.";
    }
    if (id == 9) {
        this->description_ = "Reculez de trois cases";
    }
    if (id == 10) {
        this->description_ = "Aller en prison. Rendez-vous directement en prison. Ne franchissez pas par la case départ, ne touchez pas 200 M";
    }
    if (id == 11) {
        this->description_ = "Faites des réparations dans toutes vos maisons. Versez pour chaque maison 25 M. Versez pour chaque hôtel 100 M";
    }
    if (id == 12) {
        this->description_ = "Amende pour excès de vitesse 15M";
    }
    if (id == 13) {
        this->description_ = "Payez pour frais de scolarité 15 M";
    }
    if (id == 14) {
        this->description_ "Amende pour ivresse 20 M";
    }
    if (id == 15) {
        this->description_ = "Votre immeuble et votre prêt rapportent. Vous devez toucher 150 M";
    }
    else {
        throw std::invalid_argument("Carte non existante");
    }
 }
