#include <string>
#include <vector>
#include <list>
#include "Joueur.h"
#include "De.h"
#include "Plateau.h"
#include "Banque.h"
#include "CarteChance.h"
#include "CarteCaisseDeCommunaute.h"
#include "Langue.h"
#include <vector>
#include <algorithm>
#include <random>
#include "JeuMonopoly.h"
#include "MainMenuState.h"
#include "CaseParcGratuit.h"
#include "CasePropriete.h"
#include "Gare.h"
#include "Terrain.h"
#include "ServicePublic.h"
#include "CaseChance.h"
#include "CaseCaisseDeCommunaute.h"
#include "CaseTaxe.h"
#include "CaseAllerPrison.h"
#include "Case.h"
#include "CaseDepart.h"
#include "CasePrison.h"
#include "GroupeTerrain.h"
#include "GroupeGare.h"
#include "GroupeServicePublic.h"

using namespace std;


JeuMonopoly::JeuMonopoly(vector<Joueur>& joueurs) {
	this->des_.resize(2);
	this->des_[1] = De();
	this->des_[2] = De();
	this->plateau_ = Plateau();
	//this->banque_ = Banque();
	this->joueurs_ = joueurs;
	srand(time(NULL));
	int rand = std::rand();
	this->tourDuJoueur_ = rand % this->joueurs_.size();
	vector<CarteChance> vecCartesChance;
	vector<CarteCaisseDeCommunaute> vecCartesCaisseDeCommunaute;
	vecCartesChance.resize(16);
	vecCartesCaisseDeCommunaute.resize(16);
	for (int i = 0; i < 16; i++) {
		vecCartesChance[i] = CarteChance(i);
		vecCartesCaisseDeCommunaute[i] = CarteCaisseDeCommunaute(i);
	}
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(vecCartesChance), std::end(vecCartesChance), rng);
	std::shuffle(std::begin(vecCartesCaisseDeCommunaute), std::end(vecCartesCaisseDeCommunaute), rng);
	for (int i =0; i < 16; i++) {
		this->cartesChance_->push_front(vecCartesChance[i]);
		this->cartesCaisseDeCommunautes_->push_front(vecCartesCaisseDeCommunaute[i]);
	}
}

int JeuMonopoly::getTourDuJoueur() {
	return this->tourDuJoueur_;
}

vector<De> JeuMonopoly::getDes() {
	return this->des_;
}

vector<Joueur> JeuMonopoly::getJoueurs() {
	return this->joueurs_;
}

Joueur JeuMonopoly::getJoueur() {
	return this->joueurs_[this->tourDuJoueur_];
}

void JeuMonopoly::commencerPartie() {

}

void JeuMonopoly::finirPartie() {

}

void JeuMonopoly::lancerDes() {

}

void JeuMonopoly::getNextJoueur() {
	this->tourDuJoueur_ = (this->tourDuJoueur_ + 1) % this->joueurs_.size();
}

bool JeuMonopoly::isOngoing() {
	int joueurEnVie = 0;
	for (Joueur j : this->joueurs_) {
		if (j.getStatut() == "playing") {
			joueurEnVie += 1;
		}
	}
	if (joueurEnVie >= 2) {
		return true;
	}
	else {
		return false;
	}
}

Joueur JeuMonopoly::getWinner() {
	for (Joueur j : this->joueurs_) {
		if (j.getStatut() == "playing") {
			return j;
		}
	}
}

void JeuMonopoly::jouerTour(Joueur& j) {
	//PEUT CONSTRUIRE DES MAISONS
	//PEUT PROCEDER A UN ECHANGE
	//PEUT HYPOTHEQUER DES PROPRIETES


	//FAIRE EN SORTE QUE LE JOUEUR APPUIE SUR UN BOUTON POUR LANCER LES DES
	int lance = 0;
	for (De d : this->des_) {
		d.lancerDe();
		lance += d.getValeur();
	}
	if (this->des_[0].getValeur() == this->des_[1].getValeur()) {
		j.setNbDouble(j.getNbDoubles() + 1);
	}
	if (j.getNbDoubles() == 3) {
		j.allerEnPrison();
	}
	else {
		if (j.getPosition() + lance >= 40) {
			//CaseDepart caseDepart = *plateau_.getCase(0);
			//j.addArgent(caseDepart.getSalaire());
		}
		
		j.setPosition((j.getPosition() + lance) % 40);

		//Case caseArrivee = this->plateau_.getCase(j);
		/*if ((caseArrivee.getClass() == "Gare") || (caseArrivee.getClass() == "ServicePublic") || (caseArrivee.getClass() == "Terrain")) {
			//CasePropriete caseAchetable = this->plateau_.getCase(j.getPosition);
			//PROPOSER AU JOUEUR D'ACHETER LA CASE
			//VERIFIER S'IL POSSEDE ASSEZ D'ARGENT
			bool acheterCase = true; // s'il veut acheter la case on met le booléen à vrai, MIS A VRAI DE BASE POUR PAS QUE CA BUG
			if (acheterCase) {
				if (j.getSolde() >= caseAchetable.getPrix()) {
					caseAchetable.setProprietaire(j);
					j.subArgent(caseAchetable.getPrix());
					//AJOUTER LA PROPRIETE A CELLES DU JOUEUR
				}
				else {
					//Afficher qu'il possède pas assez d'argent pour
				}
			}
		}
		if (caseArrivee.getClass() == "CaseCarteChance") {
			//Tirer une carte chance
		}
		if (caseArrivee.getClass() == "CaseCarteCaisseDeCommunaute") {
			//Tirer une carte caisse de communaute
		}
		if (caseArrivee.getClass() == "CaseDepart") {
			//On fait rien on aura déjà ajouter le salaire
		}
		if (caseArrivee.getClass() == "CaseParcGratuit") {
			//CaseParcGratuit nCaseArrivee = this->plateau_[j].getPosition];
			//nCaseArrivee.recupererArgent(j);
		}
		if (caseArrivee.getClass() == "CasePrison") {
			//On fait rien
		}
		if (caseArrivee.getClass() == "CaseTaxe") {
			//CaseTaxe nCaseArrivee = this->plateau_[j].getPosition];
			//CaseParcGratuit parcGratuit = this->plateau_[19];
			/*if (j.getSolde() >= nCaseArrivee.getTaxe()) {
				parcGratuit.ajouterArgent(nCaseArrivee.getTaxe());
				j.subArgent((nCaseArrivee.getTaxe());
			}
			else {
				//LE JOUEUR DOIT HYPOTHEQUER DES TERRAINS
			}
		}
		if (caseArrivee.getClass() == "CaseAllerPrison") {
			j.allerEnPrison();
		}*/

		//PEUT CONSTRUIRE DES MAISONS
		//PEUT PROCEDER A UN ECHANGE
		//PEUT HYPOTHEQUER DES PROPRIETES
		//PEUT PASSER SON TOUR
	}

	
}
