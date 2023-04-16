#include <string>
#include "Case.h"

using namespace std;

Case::Case() {
}

Case::Case(int position, string classe) {
    this->position_ = position;
    this->class_ = classe;
}

int Case::getPosition() {
    return this->position_;
}

string Case::getClass() {
    return this->class_;
}

