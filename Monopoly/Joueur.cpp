#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"
#include <string>
#include "CasePropriete.h"

/*Joueur::Joueur() {

}*/

/*Joueur::Joueur(string nom, int argent, Pion pion)
{
	this->argent_ = argent;
	this->position_ = 0;
	this->nom_ = nom;
	this->pion_ = pion;
	this->prison_ = false;
	this->carteSortiePrison_ = 0;
	this->nombreDoubles_ = 0;
	this->nombreTourPrison_ = 0;
	this->statut_ = "playing";
}*/

int Joueur::getPosition() {
	return this->position_;
}

int Joueur::getSolde() {
	return this->argent_;
}

string Joueur::getNom() {
	return this->nom_;
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

void Joueur::incrementPosition() {
	this->position_ = (this->getPosition() + 1) % 40;
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

