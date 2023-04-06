#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "CasePropriete.h"

using namespace std;


class ServicePublic : public CasePropriete {
    public:
        ServicePublic();
        ServicePublic(int loyer, string nom, int prix, int valeurHypotheque, string type_couleur, int position);

    private:
        int loyer_;
};

#endif;