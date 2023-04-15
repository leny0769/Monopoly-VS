#include <string>
#include "Gare.h"
#include <list>
#include "Joueur.h"
#include "GroupeGare.h"

using namespace std;

GroupeGare::GroupeGare();
GroupeGare::GroupeGare(string couleur_ou_type) {
	this->couleur_ou_type_ = couleur_ou_type;
}
void GroupeGare::addProperty(Gare& propriete) {
	this->listGare.push_back(propriete);
}
string GroupeGare::getName() {
	return this->couleur_ou_type_;
}
int GroupeGare::nombreGarePossedees(Joueur j) {
	int nbGares = 0;
	for (Gare const& i : this->listGare) {
		if (i.getProprietaire() == j) {
			nbGares++;
		}
	}
	return nbGares;
}