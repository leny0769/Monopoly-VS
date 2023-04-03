#ifndef CASECAISSEDECOMMUNAUTE_H
#define CASECAISSEDECOMMUNAUTE_H

#include <string>
#include <Case.h>
#include <CarteCaisseDeCommunaute.h>

using namespace std;


class CaseCaisseDeCommunaute : public Case {
    public:
        CaseCaisseDeCommunaute();
        CaseCaisseDeCommunaute(int position);
        CarteCaisseDeCommunaute tirerCarteCaisseDeCommunaute();

    private:
};

#endif;