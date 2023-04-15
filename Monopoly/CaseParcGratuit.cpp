#include <string>
#include "Carte.h"
#include "Joueur.h"
#include "Case.h"
using namespace std;



CaseParcGratuit();
CaseParcGratuit(int  position) {
     Case(position);
     this.argentStock_ = 0;
}

void ajouterArgent(int montant) {
    this.argentStock_ += montant;
}

void recupererArgent(Joueur joueur) {
    joueur.addArgent(this.argentStock_);
    this.argentStock_ = 0;
}