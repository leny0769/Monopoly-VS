#ifndef GARE_H
#define GARE_H

#include <string>
#include "CasePropriete.h"

using namespace std;


class Gare : public CasePropriete {
    public:
        Gare();
        Gare(int loyer[4], string nom, int prix, int valeurHypotheque, string type_couleur, int position);

    private:
        int loyer_[4];
};

#endif;