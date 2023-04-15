#ifndef CASECAISSEDECOMMUNAUTE_H
#define CASECAISSEDECOMMUNAUTE_H

#include <string>
#include "Case.h"

using namespace std;


class CaseCaisseDeCommunaute : public Case {
    public:
        CaseCaisseDeCommunaute();
        CaseCaisseDeCommunaute(int position, std::string classe);

    private:
};

#endif;