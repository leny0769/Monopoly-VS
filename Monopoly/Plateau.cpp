#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"

using namespace std;



Plateau();
Case getCase(int position) {
    if ((position >= 0) && (position < this->cases_.size()) {
        return this.cases_[position];
    }
}
vector<Case> getCase() {
    return this->cases_;
}