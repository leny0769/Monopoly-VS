#ifndef GARE_H
#define GARE_H

#include <string>
#include "CasePropriete.h"

using namespace std;


class Gare : public CasePropriete {
    public:
        Gare();
        Gare(int position, std::string classe, int loyerGare[4], std::string nom, int prix, std::string type_couleur);

    private:
        int loyer_[4];
};

#endif;