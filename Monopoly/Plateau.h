#ifndef PLATEAU_H
#define PLATEAU_H

#include <string>
#include "Carte.h"
#include <unordered_map>
#include <vector>
#include "Case.h"

using namespace std;


class Plateau {
    public:
        Plateau();
        Case getCase(int position);
        vector<Case> getCases();

    private:
        vector<Case> cases_;
        unordered_map<std::string, int> nombrePropriete_;
};

#endif;