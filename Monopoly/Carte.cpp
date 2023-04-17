#include <string>
#include "Carte.h"
using namespace std;


Carte::Carte() {
}

Carte::Carte(int id) {
	this->id_ = id;
}
int Carte::getID() {
	return this->id_;
}
void Carte::afficherCarte() {
}