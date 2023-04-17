#ifndef CASEPRISON_H
#define CASEPRISON_H

#include <string>
#include "Case.h"


using namespace std;


class CasePrison : public Case {
    public:
        CasePrison();
        CasePrison(int position, std::string classe, int prixLiberation);
        int getPrixLiberation();

    private:
        int prixLiberation_;
};

#endif;