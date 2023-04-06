#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"
#include <string>
#include "CasePropriete.h"

class Joueur {
private:
	string nom_;
	int argent_;
	unordered_map<std::string, CasePropriete[]> proprietes_;
	Pion pion_;
	int position_;
	int carteSortiePrison_;
	int nombreTourPrison_;
	int nombreDoubles_;
	bool prison_;
public:
	Joueur() {

	}
	Joueur(string nom, int argent, Pion pion)
	{
		this->argent_ = argent;
		this->position_ = 0;
		this->nom_ = nom;
		this->pion_ = pion;
		this->prison_ = false;
		this->carteSortiePrison_ = 0;
		this->nombreDoubles_ = 0;
		this->nombreTourPrison_ = 0;
	}
	int getSolde() {
		return this->argent_;
	}
	string getNom() {
		return this->nom_;
	}
	int getNbCarteSortiePrison() {
		return this->carteSortiePrison_;
	}
	int getNbTourPrison() {
		return this->nombreTourPrison_;
	}
	int getNbDoubles() {
		return this->nombreDoubles_;
	}
	void setNbCarteSortiePrison(int a) {
		if (a >= 0) {
			this->carteSortiePrison_ = a;
		}
	}
	void setEnPrison(bool b)
	{
		this->prison_ = b;
	}
	void setNbDouble(int a) {
		if (a >= 0)
		{
			this->nombreDoubles_ = a;
		}
	}
	void setNombreTourPrison(int a)
	{
		if (a >= 0) {
			this->nombreTourPrison_ = a;
		}
	}
	void allerEnPrison()
	{
		this->position_ = 10;
		this->setEnPrison(true);
	}
	void addArgent(int montant) {
		argent_ += montant;
	}
	bool subArgent(int montant) {
		argent_ -= montant;
	}
};
