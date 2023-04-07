#include <string>
#include "Carte.h"
#include "Joueur.h"
#include "Case.h"
using namespace std;


class CaseParcGratuit : public Case {
public:
    CaseParcGratuit();
    CaseParcGratuit(int  position) {
        Case(position);
    }
};
