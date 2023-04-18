#include <string>
#include <vector>
#include <list>
#include "Joueur.h"
#include "De.h"
#include "Plateau.h"
#include "CarteChance.h"
#include "CarteCaisseDeCommunaute.h"
#include "Langue.h"
#include <vector>
#include <algorithm>
#include <random>
#include "JeuMonopoly.h"
#include "MainMenuState.h"
#include "Gare.h"
#include "Terrain.h"
#include "ServicePublic.h"
#include "Case.h"
#include "GroupeTerrain.h"

using namespace std;

JeuMonopoly::JeuMonopoly() {
}
JeuMonopoly::JeuMonopoly(vector<Joueur>& joueurs) {
	this->salaire_ = 200;
	De de1(1);
	De de2(2);
	this->des_.push_back(de1);
	this->des_.push_back(de2);

	//Plateau plateau();
	this->plateau_ = new Plateau();
	//this->banque_ = Banque();
	this->joueurs_ = joueurs;
	srand(time(NULL));
	int rand = std::rand();
	this->tourDuJoueur_ = rand % this->joueurs_.size();
	/*vector<CarteChance> vecCartesChance;
	vector<CarteCaisseDeCommunaute> vecCartesCaisseDeCommunaute;
	vecCartesChance.resize(16);
	vecCartesCaisseDeCommunaute.resize(16);
	for (int i = 0; i < 16; i++) {
		CarteChance carteChance(i);
		vecCartesChance.push_back(carteChance);
		CarteCaisseDeCommunaute carteCaisse(i);
		vecCartesCaisseDeCommunaute.push_back(carteCaisse);
	}
	auto rng = std::default_random_engine{};
	std::shuffle(std::begin(vecCartesChance), std::end(vecCartesChance), rng);
	std::shuffle(std::begin(vecCartesCaisseDeCommunaute), std::end(vecCartesCaisseDeCommunaute), rng);
	for (int i =0; i < 16; i++) {
		this->cartesChance_->push_front(vecCartesChance[i]);
		this->cartesCaisseDeCommunautes_->push_front(vecCartesCaisseDeCommunaute[i]);
	}*/
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

int JeuMonopoly::getSalaire() {
	return this->salaire_;
}

int JeuMonopoly::getNbJoueurEnVie() {
	int nb = 0;
	for (Joueur j : this->getJoueurs()) {
		if (j.getStatut() == "playing") {
			nb++;
		}
	}
	return nb;
}

void JeuMonopoly::tirerCarteChance(Joueur& j) {
	CarteChance cc = this->cartesChance_->front();
	this->cartesChance_->pop_front();
	this->cartesChance_->push_back(cc);
	int id = cc.getID();
	cout << "VOUS AVEZ TIRÉ LA CARTE CHANCE : " << cc.getDescription() << "\n";
	if (id == 0) {
		j.setPosition(39);
	}
	if (id == 1) {
		j.setPosition(0);
		j.addArgent(this->getSalaire());
	}
	if (id == 2) {
		if (j.getPosition() > 20) {
			j.addArgent(this->getSalaire());
		}
		j.setPosition(20);
	}
	if (id == 3) {
		if (j.getPosition() > 11) {
			j.addArgent(this->getSalaire());
		}
		j.setPosition(11);
	}
	if (id == 4) {
		//A IMPLEMENTER, ITERATION SUR LES PROPRIETES DU JOUEUR
	}
	if (id == 5) {
		if (j.getPosition() > 15) {
			j.addArgent(this->getSalaire());
		}
		j.setPosition(15);
	}
	if (id == 6) {
		j.addArgent(100);
	}
	if (id == 7) {
		j.addArgent(50);
	}
	if (id == 8) {
		j.setNbCarteSortiePrison(j.getNbCarteSortiePrison() + 1);
	}
	if (id == 9) {
		j.setPosition((j.getPosition() - 3) % 40);
	}
	if (id == 10) {
		j.allerEnPrison();
	}
	if (id == 11) {
		//A IMPLEMENTER, ITERATION SUR LES PROPRIETES DU JOUEUR
	}
	if (id == 12) {
		j.subArgent(15);
	}
	if (id == 13) {
		j.subArgent(15);
	}
	if (id == 14) {
		j.subArgent(20);
	}
	if (id == 15) {
		j.addArgent(150);
	}
}

void JeuMonopoly::tirerCarteCaisseDeCommunaute(Joueur& j) {
	CarteCaisseDeCommunaute cc = this->cartesCaisseDeCommunautes_->front();
	this->cartesCaisseDeCommunautes_->pop_front();
	this->cartesCaisseDeCommunautes_->push_back(cc);
	int id = cc.getID();
	cout << "VOUS AVEZ TIRÉ LA CARTE CAISSE DE COMMUNAUTÉE : " << cc.getDescription() << "\n";
	if (id == 0) {
		j.setPosition(0);
		j.addArgent(this->getSalaire());
	}
	if (id == 1) {
		j.addArgent(200);
	}
	if (id == 2) {
		j.subArgent(50);
	}
	if (id == 3) {
		j.addArgent(50);
	}
	if (id == 4) {
		j.setNbCarteSortiePrison(j.getNbCarteSortiePrison() + 1);
	}
	if (id == 5) {
		j.allerEnPrison();
	}
	if (id == 6) {
		if (j.getPosition() > 1) {
			j.addArgent(this->getSalaire());
		}
		j.setPosition(1);
	}
	if (id == 7) {
		j.addArgent(100);
	}
	if (id == 8) {
		for (Joueur& autreJoueur : this->getJoueurs()) {
			if (autreJoueur == j) {
				j.addArgent(10 * this->getNbJoueurEnVie());
			}
			else {
				autreJoueur.subArgent(10);
			}
		}
	}
	if (id == 9) {
		j.addArgent(20);
	}
	if (id == 10) {
		j.addArgent(25);
	}
	if (id == 11) {
		j.subArgent(50);
	}
	if (id == 12) {
		bool incorrectInput = true;
		while (incorrectInput) {
			string input;
			cout << "ENTRER PAYER OU TIRER" << "\n";
			std::getline(std::cin, input);
			if (input == "PAYER") {
				j.subArgent(10);
				incorrectInput = false;
			}
			if (input == "TIRER") {
				incorrectInput = false;
				tirerCarteChance(j);
			}
			else {
				cout << "INPUT INCORRECT" << "\n";
			}
		}
		
	}
	if (id == 13) {
		if (j.getPosition() > 35) {
			j.setPosition(5);
			j.addArgent(this->getSalaire());
		}
		if ((j.getPosition() < 5)) {
			j.setPosition(5);
		}
		if ((j.getPosition() > 5) && (j.getPosition() < 15)) {
			j.setPosition(15);
		}
		if ((j.getPosition() > 15) && (j.getPosition() < 25)) {
			j.setPosition(25);
		}
		if ((j.getPosition() > 25) && (j.getPosition() < 35)) {
			j.setPosition(35);
		}
	}
	if (id == 14) {
		j.addArgent(10);
	}
	if (id == 15) {
		j.addArgent(100);
	}
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
	bool tirerDes = true;
	if (j.isEnPrison()) {
		if (j.getNbTourPrison() < 3) {
			if (j.getNbCarteSortiePrison() > 0) {
				cout << "VOUS AVEZ UNE CARTE SORTIE DE PRISON, L'UTILISER ? (OUI/NON)" << "\n";
				string input1;
				std::getline(std::cin, input1);
				if (input1 == "OUI") {
					j.setEnPrison(false);
					j.setNombreTourPrison(0);
					j.setNbCarteSortiePrison(j.getNbCarteSortiePrison() - 1);
				}
			}
			if (j.isEnPrison()) {
				cout << "VOULEZ-VOUS PAYER L'AMENDE (50 M) OU TENTER DE LANCER LES DES POUR FAIRE UN DOUBLE (AMENDE/DES)" << "\n";
				bool input2Incorrect = true;
				string input2;
				while (input2Incorrect) {
					std::getline(std::cin, input2);
					if (input2 == "AMENDE") { //On paye l'amende et on sort de prison
						input2Incorrect = false;
						j.subArgent(50); //VERIFIER FAILLITE 
					}
					if (input2 == "DES") { //On tire les dés
						input2Incorrect = false;
						for (De d : this->des_) {
							lance += d.getValeur();
						}
						if (this->getDes()[0].getValeur() == this->getDes()[1].getValeur()) { //On fait un double et on sort de prison
							cout << "VOUS AVEZ EFFECTUÉ UN DOUBLE : " << this->getDes()[0].getValeur() << " & " << this->getDes()[1].getValeur() << "\n";
							j.setNbDouble(1);
							j.setEnPrison(false);
							j.setNombreTourPrison(0);
							tirerDes = false; //Le joueur a effectué un double donc ne doit pas retirer les dés
						}
						else { //On ne fait pas de double et on reste en prison
							cout << "VOUS N'AVEZ PAS EFFECTUÉ DE DOUBLE : " << this->getDes()[0].getValeur() << " & " << this->getDes()[1].getValeur() << "\n";
							j.setNombreTourPrison(j.getNbTourPrison() + 1);
						}
					}
					else { // Mauvais input
						cout << "INPUT INCORRECT" << "\n";
					}
				}
				
			}
		}
	}
	if (tirerDes) { //Le joueur a pu faire un double en sortant de prison donc on doit vérifier qu'il n'a pas encore lancé les dés
		cout << "TAPER OUI POUR LANCER LES DES" << std::endl;
		string inputDe;
		std::getline(std::cin, inputDe);

		while (inputDe != "OUI") {
			cout << "TAPER OUI POUR LANCER LES DES" << std::endl;
			std::getline(std::cin, inputDe);
		}

		for (De d : this->des_) {
			d.lancerDe();
			lance += d.getValeur();
		}
		
		cout << "Le lancer de dés a donné :" << this->getDes()[0].getValeur() << " & " << this->getDes()[1].getValeur() << " = " << lance << "\n";
		if (this->getDes()[0].getValeur() == this->getDes()[1].getValeur()) {
			j.setNbDouble(j.getNbDoubles() + 1);
			cout << "VOUS AVEZ EFFECTUÉ UN DOUBLE, VOUS ÊN ÊTES A " << j.getNbDoubles() << " DOUBLES D'AFFILÉ" << "\n";
		}
		else {
			j.setNbDouble(0);
		}

		if (j.getNbDoubles() == 3) {
			cout << "TROP DE DOUBLES A LA SUITE : VOUS ALLEZ EN PRISON !" << "\n";
			j.allerEnPrison();
		}
	}

	if (j.getPosition() + lance >= 40) {
		cout << "VOUS PASSEZ PAR LA CASE DEPART ET RECEVEZ" << this->getSalaire() << " M \n";
		j.addArgent(this->getSalaire());
	}

	j.setPosition((j.getPosition() + lance) % 40);

	/*auto& caseArrivee = *(this->plateau_.getCase(j.getPosition()));
	cout << "VOUS ARRIVEZ SUR LA CASE NUMERO : " << caseArrivee.getPosition();
	if ((caseArrivee.getClass() == "Gare") || (caseArrivee.getClass() == "ServicePublic") || (caseArrivee.getClass() == "Terrain")) {
		//CasePropriete caseAchetable = *(this->plateau_.getCase(j.getPosition()));
		cout << " QUI EST LA CASE : " << caseArrivee.getNom() << "\n";
		if (caseArrivee.getSansProprietaire()) {
			cout << "VOULEZ-VOUS ACHETER LA CASE POUR : " << caseArrivee.getPrix() << " M (OUI/NON)" << "\n";
			string input3;
			std::getline(std::cin, input3);
			if (input3 == "OUI") {
				caseArrivee.setProprietaire(j);
				j.subArgent(caseArrivee.getPrix());
				//AJOUTER LA PROPRIETE A CELLES DU JOUEUR
			}
		}
		else {
			if (caseArrivee.getProprietaire() == j) {
				//Il se la coule douce
			}
			else {
				while (j.getSolde() < caseArrivee.getLoyer()) {
					//On doit hypothéquer : faire une fonction j.hypothequer() qui force le joueur à choisir des propriétés à hypothéquer
				}
				j.subArgent(caseArrivee.getLoyer());
				caseArrivee.getProprietaire().addArgent(caseArrivee.getLoyer());
			}
		}
		if (caseArrivee.getClass() == "CaseCarteChance") {
			this->tirerCarteChance(j);
		}
		if (caseArrivee.getClass() == "CaseCarteCaisseDeCommunaute") {
			this->tirerCarteCaisseDeCommunaute(j);
		}
		if (caseArrivee.getClass() == "CaseDepart") {
			//On fait rien on aura déjà ajouter le salaire
		}
		if (caseArrivee.getClass() == "CaseParcGratuit") {
			cout << "JACPOT : RECEVEZ " << caseArrivee.getArgentStock() << " M \n";
			caseArrivee.recupererArgent(j);
		}
		if (caseArrivee.getClass() == "CasePrison") {
			//On fait rien
		}
		if (caseArrivee.getClass() == "CaseTaxe") {
			//CaseTaxe nCaseArrivee = this->plateau_[j].getPosition];
			auto& parcGratuit = *(this->plateau_.getCase(20));
			if (j.getSolde() >= caseArrivee.getTaxe()) {
				parcGratuit.ajouterArgent(caseArrivee.getTaxe());
				j.subArgent(caseArrivee.getTaxe());
			}
			else {
				//On doit hypothéquer : faire une fonction j.hypothequer() qui force le joueur à choisir des propriétés à hypothéquer
			}
		}
		if (caseArrivee.getClass() == "CaseAllerPrison") {
			j.allerEnPrison();
		}
	}*/
		


		//PEUT CONSTRUIRE DES MAISONS
		//PEUT PROCEDER A UN ECHANGE
		//PEUT HYPOTHEQUER DES PROPRIETES
		//PEUT PASSER SON TOUR
	
}
	

	

