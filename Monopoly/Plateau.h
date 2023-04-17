#ifndef PLATEAU_H
#define PLATEAU_H

#include <string>
#include <unordered_map>
#include <vector>
#include "Case.h"
#include <memory>

using namespace std;


class Plateau {
    public:
        Plateau();
        Case* getCase(int position);
        vector<std::unique_ptr<Case>> getCases();

    private:
        //vector<std::unique_ptr<Case>> cases_;
        vector<Case*> cases_;
        unordered_map<std::string, int> nombrePropriete_;
};

#endif;