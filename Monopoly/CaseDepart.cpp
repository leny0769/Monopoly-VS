#include <string>
#include "Case.h"
#include "CaseDepart.h"
using namespace std;



CaseDepart::CaseDepart() {
}

CaseDepart::CaseDepart(int position, std::string classe, int salaire) : Case(position, classe) {
    this->salaire_ = salaire;
}

int CaseDepart::getSalaire() {
    return this->salaire_;
}
