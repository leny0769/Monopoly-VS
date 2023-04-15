#include <string>
#include "ServicePublic.h"
#include <list>
#include "Joueur.h"
#include "GroupeServicePublic.h"

using namespace std;

GroupeServicePublic::GroupeServicePublic();
GroupeServicePublic::GroupeServicePublic(string couleur_ou_type) {
	this->couleur_ou_type_ = couleur_ou_type;
}
void GroupeServicePublic::addProperty(ServicePublic& propriete) {
	this->listServicePublic.push_back(propriete);
}
string GroupeServicePublic::getName() {
	return this->couleur_ou_type_;
}
int GroupeServicePublic::nombreServicePublicPossedees(Joueur j) {
	int nbServicePublic = 0;
	for (ServicePublic const& i : this->listServicePublic) {
		if (i.getProprietaire() == j) {
			nbServicePublic++;
		}
	}
	return nbServicePublic;
}