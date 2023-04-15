#include <string>
#include "Case.h"
using namespace std;



Case::Case();
Case::Case(int position, std::string classe) {
    this->position_ = position;
    this->class_ = classe;
}
int Case::getPosition() {
    return this->position_;
}
std::string Case::getClass() {
    return this->class_;
}

