#include <string>
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

using namespace std;


/*JeuMonopoly::JeuMonopoly(vector<Joueur> joueurs) {
	this->des_[1] = De();
	this->des_[2] = De();
	this->plateau_ = Plateau();
	this->banque_ = Banque();
	this->joueurs_ = joueurs;
	srand(time(NULL));
	int rand = std::rand();
	this->tourDuJoueur_ = rand % this.joueurs_.size();
	for (int i = 0; i < 16; i++) {
		this->cartesChance_[i] = CarteChance(i);
		this->cartesCaisseDeCommunautes_[i] = CarteCaisseDeCommunaute(i);
	}
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(this.cartesChance_), std::end(this.cartesChance), rng);
	std::shuffle(std::begin(this.cartesCaisseDeCommunautes_), std::end(this.cartesCaisseDeCommunautes_), rng);
}*/

int JeuMonopoly::getTourDuJoueur() {
	return this->tourDuJoueur_;
}

De JeuMonopoly::getDes() {
	//return this->des_;
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
	//this->tourDuJoueur_ = (this->tourDuJoueur_ + 1) % this->joueurs_.size;
}

bool JeuMonopoly::isOngoing() {
	int joueurEnVie = 0;
	/*for (Joueur j : this.joueurs_) {
		if (j.getStatut() == "playing") {
			joueurEnVie += 1
		}
	}*/
	if (joueurEnVie >= 2) {
		return true;
	}
	else {
		return false;
	}
}

Joueur JeuMonopoly::getWinner() {
	/*for (Joueur j : this.joueurs_) {
		if (j.getStatut == "playing") {
			return j;
		}
	}*/
}

void JeuMonopoly::jouerTour(Joueur j) {
	//PEUT CONSTRUIRE DES MAISONS
	//PEUT PROCEDER A UN ECHANGE
	//PEUT HYPOTHEQUER DES PROPRIETES


	//FAIRE EN SORTE QUE LE JOUEUR APPUIE SUR UN BOUTON POUR LANCER LES DES
	int lance = 0;
	/*for (De d : this.des_) {
		d.lancerDe;
		lance += d->getValeur;
	}
	while (lance > 0) {
		j.incrementPosition();
		if (j.getPosition == 0) {
			//DONNER LE SALAIRE DE LA CASE DEPART
		}
		j--;
	}*/

	//PROPOSER D'ACHETER LA PROPRIETE SUR LAQUELLE IL TOMBE
	//OU TIRER UNE CARTE ET JOUER SON EFFET
	//OU PAYER LE LOYER
	//OU ALLER EN PRISON
	//OU PAYER TAXES

	//PEUT CONSTRUIRE DES MAISONS
	//PEUT PROCEDER A UN ECHANGE
	//PEUT HYPOTHEQUER DES PROPRIETES
	//PEUT PASSER SON TOUR
}
