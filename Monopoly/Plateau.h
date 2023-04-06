#ifndef PLATEAU_H
#define PLATEAU_H

#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>

using namespace std;


class Plateau {
    public:
        Plateau();
        Case getCase(int position);
        void deplacer(int nombreCase);
        void deplacer(Case c);
        vector<Case> getCase();

    private:
        vector<Case> cases_;
        unordered_map<std::string, int> nombrePropriete_;
};

#endif;