#ifndef GROUPECASEPROPRIETE_H
#define GROUPECASEPROPRIETE_H

#include <string>
#include "CasePropriete.h"

using namespace std;

class GroupeCasePropriete : public CasePropriete {
    public:
        GroupeCasePropriete();
        GroupeCasePropriete(string couleur_ou_type);
        void addProperty(CasePropriete* propriete);
        string getName();
        bool uniqueProprietaire();

    private:
        std::string couleur_ou_type_;
        std::vector<CasePropriete*> vecProprietes;
    };

#endif