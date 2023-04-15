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
        this->description_ = "Avancer jusqu'� la case d�part";
    }
    if (id == 2) {
        this->description_ = "Rendez-vous � l'Avenue Henri-Martin. Sivous passez par la case d�part, recevez 200 M";
    }
    if (id == 3) {
        this->description_ = "Avancez au Boulevard de La Villette. Si vous passez par la case d�part, recevez 200 M";
    }
    if (id == 4) {
        this->description_ = "Vous �tes impos� pour les r�parations de voirie � raison de 40 M par maison et 115 M par h�tel";
    }
    if (id == 5) {
        this->description_ = "Avancez jusqu�� la Gare de Lyon. Si vous passez par la case d�part, recevez 200 M";
    }
    if (id == 6) {
        this->description = "Vous avez gagn� le prix de mots crois�s. Recevez 100 M";
    }
    if (id == 7) {
        this->description_ = "La banque vous verse un dividende de 50 M";
    }
    if (id == 8) {
        this->description_ = "Vous �tes lib�r� de prison. Cette carte peut �tre conserv�e jusqu�� ce qu�elle soit utilis�e ou vendue.";
    }
    if (id == 9) {
        this->description_ = "Reculez de trois cases";
    }
    if (id == 10) {
        this->description_ = "Aller en prison. Rendez-vous directement en prison. Ne franchissez pas par la case d�part, ne touchez pas 200 M";
    }
    if (id == 11) {
        this->description_ = "Faites des r�parations dans toutes vos maisons. Versez pour chaque maison 25 M. Versez pour chaque h�tel 100 M";
    }
    if (id == 12) {
        this->description_ = "Amende pour exc�s de vitesse 15M";
    }
    if (id == 13) {
        this->description_ = "Payez pour frais de scolarit� 15 M";
    }
    if (id == 14) {
        this->description_ "Amende pour ivresse 20 M";
    }
    if (id == 15) {
        this->description_ = "Votre immeuble et votre pr�t rapportent. Vous devez toucher 150 M";
    }
    else {
        throw std::invalid_argument("Carte non existante");
    }
 }
