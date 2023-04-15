#include <string>
#include "Joueur.h"
#include "Case.h"
#include "CaseParcGratuit.h"
using namespace std;



CaseParcGratuit::CaseParcGratuit();
CaseParcGratuit::CaseParcGratuit(int  position) {
     Case(position);
     this->argentStock_ = 0;
}

void CaseParcGratuit::ajouterArgent(int montant) {
    this->argentStock_ += montant;
}

void CaseParcGratuit::recupererArgent(Joueur joueur) {
    joueur.addArgent(this.argentStock_);
    this->argentStock_ = 0;
}