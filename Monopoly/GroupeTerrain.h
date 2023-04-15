#ifndef GROUPETERRAIN_H
#define GROUPETERRAIN_H

#include <string>
#include "CasePropriete.h"
#include <list>

using namespace std;

class GroupeTerrain : public CasePropriete {
    public:
        GroupeTerrain();
        GroupeTerrain(string couleur_ou_type);
        void addProperty(CasePropriete& propriete);
        string getName();
        bool uniqueProprietaire();

    private:
        std::string couleur_ou_type_;
        std::list<CasePropriete> listProprietes;
    };

#endif