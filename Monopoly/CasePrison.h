#ifndef CASEPRISON_H
#define CASEPRISON_H

#include <string>
#include "Carte.h"

using namespace std;


class CasePrison : public Case {
    public:
        CasePrison();
        CasePrison(int prix, int position);
        void sortirPrison();

    private:
        int prix_;
};

#endif;