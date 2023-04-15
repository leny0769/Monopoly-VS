#include <string>
#include "Case.h"
#include "CaseDepart.h"
using namespace std;



CaseDepart::CaseDepart();
CaseDepart::CaseDepart(int position, int salaire) {
    Case(position);
    this->salaire_ = salaire;
    }
int CaseDepart::getSalaire() {
    return this->salaire_;
}
