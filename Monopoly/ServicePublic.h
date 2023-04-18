#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;

class GroupeServicePublic;

class ServicePublic /* : public CasePropriete*/ {
    public:
        ServicePublic();
        ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur);
        //int getLoyer();
        GroupeServicePublic* getGroupeServicePublic();
        int getValeurHypotheque();

    private:
        int loyer_[4];
        GroupeServicePublic* groupeServicePublic_;
};

#endif