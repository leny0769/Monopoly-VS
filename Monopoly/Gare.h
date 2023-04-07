#ifndef GARE_H
#define GARE_H

#include <string>
#include "CasePropriete.h"

using namespace std;


class Gare : public CasePropriete {
    public:
        Gare();
        Gare(int[4] loyer, string nom, int prix, int valeurHypotheque, string type_couleur, int position);

    private:
        int[4] loyer_;
};

#endif;