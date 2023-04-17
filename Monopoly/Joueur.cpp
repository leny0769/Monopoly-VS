#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"
#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

Joueur::Joueur() {

}

Joueur::Joueur(string nom, int argent)
{
	this->argent_ = argent;
	this->position_ = 0;
	this->nom_ = nom;
	//this->pion_ = pion;
	this->prison_ = false;
	this->carteSortiePrison_ = 0;
	this->nombreDoubles_ = 0;
	this->nombreTourPrison_ = 0;
	this->statut_ = "playing";
}

int Joueur::getPosition() {
	return this->position_;
}

int Joueur::getSolde() {
	return this->argent_;
}

string Joueur::getNom() const {
	return this->nom_;
}

bool Joueur::isEnPrison() {
	return this->prison_;
}

int Joueur::getNbCarteSortiePrison() {
	return this->carteSortiePrison_;
}

int Joueur::getNbTourPrison() {
	return this->nombreTourPrison_;
}

int Joueur::getNbDoubles() {
	return this->nombreDoubles_;
}

string Joueur::getStatut() {
	return this->statut_;
}

void Joueur::setPosition(int position) {
	if ((position >= 0) && (position < 40)) {
		this->position_ = position;
	}
}

void Joueur::setStatut(string statut) {
	if ((statut == "playing") || (statut == "bankrupt")) {
		this->statut_ = statut;
	}
}

void Joueur::setNbCarteSortiePrison(int a) {
	if (a >= 0) {
		this->carteSortiePrison_ = a;
	}
}

void Joueur::setEnPrison(bool b)
{
	this->prison_ = b;
}

void Joueur::setNbDouble(int a) {
	if (a >= 0)
	{
		this->nombreDoubles_ = a;
	}
}

void Joueur::setNombreTourPrison(int a)
{
	if (a >= 0) {
		this->nombreTourPrison_ = a;
	}
}

void Joueur::allerEnPrison()
{
	this->position_ = 10;
	this->setEnPrison(true);
}

void Joueur::addArgent(int montant) {
	argent_ += montant;
}

bool Joueur::subArgent(int montant) {
	argent_ -= montant;
}

bool Joueur::operator==(const Joueur& j2) const
{
	return (getNom() == j2.getNom());
}

void Joueur::doitHypothéquer(int soldeMin) {
	while (this->getSolde() < soldeMin) {
		cout << "VOTRE SOLDE EST : " << this->getSolde() << " M \n VOUS DEVEZ AVOIR : " << soldeMin << " M POUR VOUS ACQUITTER DE VOS DETTES \n";
		//print liste prop avec nom, pvaleurhypotheque
		cout << "ENTRER LE NOM D'UNE PROPRIETE A HYPOTHEQUER";
		string input;
		std::getline(std::cin, input);
		//boucle sur les prop
	}
}