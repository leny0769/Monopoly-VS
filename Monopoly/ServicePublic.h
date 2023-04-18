#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "Case.h"
#include "Joueur.h"

using namespace std;

class GroupeServicePublic;

class ServicePublic : public Case {
    public:
        ServicePublic();
        ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur);
        int getLoyer() override;
        //GroupeServicePublic* getGroupeServicePublic() override;
        int getValeurHypotheque() override;

    private:
        int loyer_[4];
        //GroupeServicePublic* groupeServicePublic_;
};

#endif