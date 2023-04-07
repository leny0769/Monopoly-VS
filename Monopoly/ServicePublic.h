#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;


class ServicePublic : public CasePropriete {
    public:
        ServicePublic();
        ServicePublic(int[4] loyer, string nom, int prix, int valeurHypotheque, string type_couleur, int position, Joueur proprietaire);

    private:
        int[4] loyer_;
};

#endif;