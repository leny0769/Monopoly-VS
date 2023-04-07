#include <string>
#include "Carte.h"
#include "Case.h"

using namespace std;


class CaseDepart : public Case {
public:
    CaseDepart();
    CaseDepart(int salaire, int position) {
        Case(position);
        this->salaire_ = salaire;
    }
    int getSalaire();

private:
    int salaire_;
};