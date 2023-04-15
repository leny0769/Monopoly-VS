#include <string>
#include "Case.h"
using namespace std;



Case::Case();
Case::Case(int position) {
    this->position_ = position;
}
int Case::getPosition() {
    return this->position_;
}

