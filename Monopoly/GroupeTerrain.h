#ifndef GROUPETERRAIN_H
#define GROUPETERRAIN_H

#include <string>
#include "Case.h"
#include <list>

using namespace std;

class GroupeTerrain : public Case {
    public:
        GroupeTerrain();
        GroupeTerrain(string couleur_ou_type);
        void addProperty(Case& propriete);
        string getName();
        bool uniqueProprietaire();

    private:
        std::string couleur_ou_type_;
        std::list<std::unique_ptr <Case>> listProprietes;
    };

#endif