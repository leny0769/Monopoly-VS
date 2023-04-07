#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"

using namespace std;


class Plateau {
public:
    Plateau();
    Case getCase(int position) {
        if ((position >= 0) && (position < this->cases_.size()) {
            return this.cases_[position];
        }
    }
    vector<Case> getCase() {
        return this->cases_;
    }

private:
    vector<Case> cases_;
    unordered_map<std::string, int> nombrePropriete_;
};