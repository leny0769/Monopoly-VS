#include <string>
#include "Carte.h"
#include <stdexcept>
#include "CarteCaisseDeCommunaute.h"

using namespace std;


CarteCaisseDeCommunaute::CarteCaisseDeCommunaute();
CarteCaisseDeCommunaute::CarteCaisseDeCommunaute(int id) {
	Carte(id);
	if (id == 0) {
		this->description_ = "Placez-vous sur la case d�part";
	}
	if (id == 1) {
		this->description_ = "Erreur de la banque en votre faveur. Recevez 200 M";
	}
	if (id == 2) {
		this->description_ = "Payez la note du m�decin 50 M";
	}
	if (id == 3) {
		this->description_ = "La vente de votre stock vous rapporte 50 M";
	}
	if (id == 4) {
		this->description_ = "Vous �tes lib�r� de prison. Cette carte peut �tre conserv�e jusqu�� ce qu�elle soit utilis�e ou vendue.";
	}
	if (id == 5) {
		this->description_ = "Aller en prison. Rendez-vous directement � la prison. Ne franchissez pas par la case d�part, ne touchez pas 200 M";
	}
	if (id == 6) {
		this->description_ = "Retournez � Belleville";
	}
	if (id == 7) {
		this->description_ = "Recevez votre revenu annuel 100 M";
	}
	if (id == 8) {
		this->description_ = "C�est votre anniversaire. Chaque joueur doit vous donner 10 M";
	}
	if (id == 9) {
		this->description_ = "Les contributions vous remboursent la somme de 20 M";
	}
	if (id == 10) {
		this->description_ = "Recevez votre int�r�t sur l�emprunt � 7% 25 M";
	}
	if (id == 11) {
		this->description_ = "Payez votre Police d�Assurance 50 M";
	}
	if (id == 12) {
		this->description_ = "Payez une amende de 10 M ou bien tirez une carte � CHANCE �";
	}
	if (id == 13) {
		this->description_ = "Rendez-vous � la gare la plus proche. Si vous passez par la case d�part, recevez 200 M";
	}
	if (id == 14) {
		this->description_ = "Vous avez gagn� le deuxi�me Prix de Beaut�. Recevez 10 M";
	}
	if (id == 15) {
		this->description_ = "Vous h�ritez 100 M";
	}
	else {
		throw std::invalid_argument("Carte non existante");
	}
}