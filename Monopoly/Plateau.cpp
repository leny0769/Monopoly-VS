#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"
#include "FabriqueCase.h"
#include "Plateau.h"
using namespace std;



Plateau::Plateau() {
    FabriqueCase fabrique = FabriqueCase();
    this->cases_[0] = fabrique.creerCase("depart", 0, salaire = 200);
}
Case Plateau::getCase(int position) {
    if ((position >= 0) && (position < this->cases_.size()) {
        return this->cases_[position];
    }
}
vector<Case> Plateau::getCase() {
    return this->cases_;
}