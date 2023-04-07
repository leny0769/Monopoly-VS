#include <string>
#include "Carte.h"

using namespace std;


class CasePrison : public Case {
public:
    CasePrison();
    CasePrison(int prix) {
        this->prix_ = prix:
    }

private:
    int prix_;
};