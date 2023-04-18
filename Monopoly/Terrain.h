#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>
#include <iostream>
#include "Case.h"
using namespace std;


class Terrain : public Case {
    public:
        Terrain();
        Terrain(int position, std::string classe, int loyer[5], string nom, int prix, string type_couleur);
        //GroupeTerrain* getGroupeTerrain() override;
        int getLoyer() override;
        int getValeurHypotheque() override;
        void construireMaison() override;
        void vendreMaison() override;

    private:
        int loyer_[5];
        int nombreMaison_;
        //GroupeTerrain* groupeTerrain_;
};

#endif;