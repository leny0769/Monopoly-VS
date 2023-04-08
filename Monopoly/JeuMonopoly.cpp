#include <string>
#include "Joueur.h"
#include "De.h"
#include "Plateau.h"
#include "Banque.h"
#include "CarteChance.h"
#include "CarteCaisseDeCommunaute.h"
#include "Langue.h"
#include <vector>



using namespace std;


/*JeuMonopoly::JeuMonopoly() {
}

JeuMonopoly::JeuMonopoly(De des[2], Plateau plateau, Banque banque, vector<Joueur> joueurs, CarteChance cartesChance[16],
	CarteCaisseDeCommunaute cartesCaisseDeCommunaute[16], Langue langue) {

}

int JeuMonopoly::getTourDuJoueur() {
	return this->tourDuJoueur_;
}
De getDes() {
	return this->des_;
}
vector<Joueur> getJoueurs() {
	return this->joueurs_;
}
Joueur getJoueur() {
	return this->joueurs_[this->tourDuJoueur_];
}
void commencerPartie();
void finirPartie();
void lancerDes();
void getNextJoueur() {
	this->tourDuJoueur_ = (this->tourDuJoueur_ + 1) % this->joueurs_.size;
}
bool isOngoing() {
	int joueurEnVie = 0;
	for (Joueur j : this.joueurs_) {
		if (j.getStatut == "playing") {
			joueurEnVie += 1
		}
	}
	if (joueurEnVie >= 2) {
		return true;
	}
	else {
		return false;
	}
}
Joueur getWinner() {
	for (Joueur j : this.joueurs_) {
		if (j.getStatut == "playing") {
			return j;
		}
	}
}
void jouerTour(Joueur j) {
	//PEUT CONSTRUIRE DES MAISONS
	//PEUT PROCEDER A UN ECHANGE
	//PEUT HYPOTHEQUER DES PROPRIETES


	//FAIRE EN SORTE QUE LE JOUEUR APPUIE SUR UN BOUTON POUR LANCER LES DES
	int lance = 0;
	for (De d : this.des_) {
		d.lancerDe;
		lance += d->getValeur;
	}
	while (lance > 0) {
		j.incrementPosition();
		if (j.getPosition == 0) {
			//DONNER LE SALAIRE DE LA CASE DEPART
		}
		j--;
	}

	//PROPOSER D'ACHETER LA PROPRIETE SUR LAQUELLE IL TOMBE
	//OU TIRER UNE CARTE ET JOUER SON EFFET
	//OU PAYER LE LOYER
	//OU ALLER EN PRISON
	//OU PAYER TAXES

	//PEUT CONSTRUIRE DES MAISONS
	//PEUT PROCEDER A UN ECHANGE
	//PEUT HYPOTHEQUER DES PROPRIETES
	//PEUT PASSER SON TOUR
}*/
