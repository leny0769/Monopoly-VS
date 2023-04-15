#ifndef CASEPARCGRATUIT_H
#define CASEPARCGRATUIT_H

#include <string>
#include "Case.h"
#include "Joueur.h"

using namespace std;


class CaseParcGratuit : public Case {
    public:
        CaseParcGratuit();
        CaseParcGratuit(int  position, std::string classe);
        void ajouterArgent(int montant);
        void recupererArgent(Joueur& joueur);

    private:
        int argentStock_;
};

#endif;