#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>
#include <CasePropriete.h>

using namespace std;


class Terrain : public CasePropriete {
    public:
        Terrain();
        Terrain(int loyer[5], string nom, int prix, int valeurHypotheque, string type_couleur, int position);

    private:
        int loyer_[5];
        int nombreMaison_;
};

#endif;