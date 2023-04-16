#ifndef FABRIQUECASE_H
#define FABRIQUECASE_H

#include <string>
#include "Case.h"
using namespace std;


class FabriqueCase {
public:
    FabriqueCase();
    Case creerCase(std::string type, int position, std::string classe, int salaire, int prixLiberation, std::string nom, int prix, std::string type_couleur, int loyerTerrain[5], int taxe, int loyerGareService[4]);
};

#endif;