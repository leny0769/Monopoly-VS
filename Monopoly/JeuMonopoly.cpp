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

JeuMonopoly(vector<Joueur> joueurs){
	this.des_[1] = De();
	this.des_[2] = De();
	this.plateau_ = Plateau();
	this.banque_ = Banque();
	this.joueurs_ = joueurs;
	this.cartesChances = ;
	this.cartesCaisseDeCommunaute_ = ;
	srand(time(NULL));
	int rand = std::rand();
	this->tourDuJoueur_ = rand % this.joueurs_.size();

int getTourDuJoueur() {
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
        for (De d: this.des_) {
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
