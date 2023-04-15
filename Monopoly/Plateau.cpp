#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"
#include "FabriqueCase.h"
using namespace std;



Plateau() {
    FabriqueCase fabrique = FabriqueCase();
    this.cases_[0] = fabrique.creerCase("depart", 0, salaire = 200);
}
Case getCase(int position) {
    if ((position >= 0) && (position < this->cases_.size()) {
        return this.cases_[position];
    }
}
vector<Case> getCase() {
    return this->cases_;
}