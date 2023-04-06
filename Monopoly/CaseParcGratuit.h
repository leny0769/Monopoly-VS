#ifndef CASEPARCGRATUIT_H
#define CASEPARCGRATUIT_H

#include <string>
#include "Carte.h"
#include "Joueur.h"

using namespace std;


class CaseParcGratuit : public Case {
    public:
        CaseParcGratuit();
        CaseParcGratuit(int  position);
        void recupererArgent(Joueur joueur);

    private:
        int argentStock_;
};

#endif;