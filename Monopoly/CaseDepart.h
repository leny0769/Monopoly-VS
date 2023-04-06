#ifndef CASEDEPART_H
#define CASEDEPART_H

#include <string>
#include "Carte.h"

using namespace std;


class CaseDepart : public Case {
    public:
        CaseDepart();
        CaseDepart(int salaire, int position);
        int getSalaire();

    private:
        int salaire_;
};

#endif;