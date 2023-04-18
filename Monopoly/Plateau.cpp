#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"
#include "Plateau.h"
#include <memory>
#include "Terrain.h"
#include "Gare.h"
#include "ServicePublic.h"
using namespace std;

//Case::Case(int position, const string classe, std::string nom, int prix, std::string type_couleur, int taxe) {
 //Terrain(int position, std::string classe, int loyer[5], string nom, int prix, string type_couleur);
 //Gare(int position, std::string classe, int loyerGare[4], std::string nom, int prix, std::string type_couleur);
 //ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur);


Plateau::Plateau() {
    Case* case0 = new Case(0, "CaseDepart", "Case Départ", 0, "CaseDepart", 0);

    int loyer1[5] = {2, 10, 30, 90, 160};
    Terrain* case1 = new Terrain(1, "Terrain", loyer1, "Boulevard de Belleville", 60, "Marron");

    Case* case2 = new Case(2, "CaseCaisseCommunautes", "Caisse de Communautés", 0, "CaseCaisseCommunautes", 0);
    
    int loyer3[5] = { 2, 10, 30, 90, 160 };
    Terrain* case3 = new Terrain(3, "Terrain", loyer3, "Rue Lecourbe", 60, "Marron");

    Case* case4 = new Case(4, "CaseTaxe", "CaseTaxe", 0, "CaseTaxe", 200);

    int loyerGare[4] = {25, 50, 100, 200};
    Gare* case5 = new Gare(5, "Gare", loyerGare, "Gare de Montparnasse", 200, "Gare");

    int loyer6[5] = { 2, 10, 30, 90, 160 };
    Terrain* case6 = new Terrain(6, "Terrain", loyer6, "Rue Baugirard", 100, "Cyan");

    Case* case7 = new Case(7, "CaseChance", "Case Chance", 0, "CaseChance", 0);
    
    int loyer8[5] = { 2, 10, 30, 90, 160 };
    Terrain* case8 = new Terrain(8, "Terrain", loyer8, "Rue de Courcelle", 100, "Cyan");

    int loyer9[5] = { 2, 10, 30, 90, 160 };
    Terrain* case9 = new Terrain(9, "Terrain", loyer9, "Avenue de la Republique", 120, "Cyan");

    Case* case10 = new Case(10, "CasePrison", "CasePrison", 0, "CasePrison", 0);

    int loyer11[5] = { 2, 10, 30, 90, 160 };
    Terrain* case11 = new Terrain(11, "Terrain", loyer11, "Boulevard de la Villette", 140, "Rose");

    int loyerServicePublique[4] = {25, 50, 100, 200 };
    ServicePublic* case12 = new ServicePublic(12, "ServicePublic", loyerServicePublique, "Compagnie Electrique", 0, "ServicePublic");

    this->cases_.resize(12);
    this->cases_.push_back(case0);
    this->cases_.push_back(case1);
    this->cases_.push_back(case2);
    this->cases_.push_back(case3);
    this->cases_.push_back(case4);
    this->cases_.push_back(case5);
    this->cases_.push_back(case6);
    this->cases_.push_back(case7);
    this->cases_.push_back(case8);
    this->cases_.push_back(case9);
    this->cases_.push_back(case10);
    this->cases_.push_back(case11);
}

Case* Plateau::getCase(int position) {
    if ((position >= 0) && (position < this->cases_.size())) {
        return cases_[position];
    }
}

/*vector<std::unique_ptr<Case>> Plateau::getCases() {
    return this->cases_;
}*/