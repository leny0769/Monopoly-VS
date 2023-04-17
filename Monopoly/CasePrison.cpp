#include <string>
#include "Case.h"
#include "CasePrison.h"
using namespace std;


CasePrison::CasePrison() {

}

CasePrison::CasePrison(int position, std::string classe,int prixLiberation) : Case(position, classe) {
    this->prixLiberation_ = prixLiberation;
}
