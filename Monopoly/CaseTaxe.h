#ifndef CASETAXE_H
#define CASETAXE_H

#include <string>
#include "Carte.h"
#include "Case.h"
using namespace std;


class CaseTaxe : public Case {
public:
    CaseTaxe();
    CaseTaxe(int position, int taxe);
    int getTaxe();

private:
    int taxe_;
};

#endif;