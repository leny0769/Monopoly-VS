#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;


class ServicePublic : public CasePropriete {
    public:
        ServicePublic();
        ServicePublic(int position, int loyer[4], std::string nom, int prix, std::string type_couleur);

    private:
        int[4] loyer_;
};

#endif;