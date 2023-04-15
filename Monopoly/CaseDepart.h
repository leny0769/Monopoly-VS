#ifndef CASEDEPART_H
#define CASEDEPART_H

#include <string>
#include "Case.h"

using namespace std;


class CaseDepart : public Case {
    public:
        CaseDepart();
        CaseDepart(int position, int salaire);
        int getSalaire();

    private:
        int salaire_;
};

#endif;