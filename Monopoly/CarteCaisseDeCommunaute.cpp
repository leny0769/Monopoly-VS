#include <string>
#include "Carte.h"
#include <stdexcept>
#include "CarteCaisseDeCommunaute.h"

using namespace std;


CarteCaisseDeCommunaute::CarteCaisseDeCommunaute();
CarteCaisseDeCommunaute::CarteCaisseDeCommunaute(int id) {
	Carte(id);
	if (id == 0) {
		this->description_ = "Placez-vous sur la case départ";
	}
	if (id == 1) {
		this->description_ = "Erreur de la banque en votre faveur. Recevez 200 M";
	}
	if (id == 2) {
		this->description_ = "Payez la note du médecin 50 M";
	}
	if (id == 3) {
		this->description_ = "La vente de votre stock vous rapporte 50 M";
	}
	if (id == 4) {
		this->description_ = "Vous êtes libéré de prison. Cette carte peut être conservée jusqu’à ce qu’elle soit utilisée ou vendue.";
	}
	if (id == 5) {
		this->description_ = "Aller en prison. Rendez-vous directement à la prison. Ne franchissez pas par la case départ, ne touchez pas 200 M";
	}
	if (id == 6) {
		this->description_ = "Retournez à Belleville";
	}
	if (id == 7) {
		this->description_ = "Recevez votre revenu annuel 100 M";
	}
	if (id == 8) {
		this->description_ = "C’est votre anniversaire. Chaque joueur doit vous donner 10 M";
	}
	if (id == 9) {
		this->description_ = "Les contributions vous remboursent la somme de 20 M";
	}
	if (id == 10) {
		this->description_ = "Recevez votre intérêt sur l’emprunt à 7% 25 M";
	}
	if (id == 11) {
		this->description_ = "Payez votre Police d’Assurance 50 M";
	}
	if (id == 12) {
		this->description_ = "Payez une amende de 10 M ou bien tirez une carte « CHANCE »";
	}
	if (id == 13) {
		this->description_ = "Rendez-vous à la gare la plus proche. Si vous passez par la case départ, recevez 200 M";
	}
	if (id == 14) {
		this->description_ = "Vous avez gagné le deuxième Prix de Beauté. Recevez 10 M";
	}
	if (id == 15) {
		this->description_ = "Vous héritez 100 M";
	}
	else {
		throw std::invalid_argument("Carte non existante");
	}
}