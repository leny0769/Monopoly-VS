#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>
#include "CasePropriete.h"

using namespace std;


class Terrain : public CasePropriete {
    public:
        Terrain();
        Terrain(int position, std::string classe,int loyer[5], string nom, int prix, string type_couleur);

    private:
        int loyer_[5];
        int nombreMaison_;
};

#endif;