#ifndef CASEALLERPRISON_H
#define CASEALLERPRISON_H

#include <string>
#include "Case.h"

using namespace std;


class CaseAllerPrison : public Case {
public:
    CaseAllerPrison();
    CaseAllerPrison(int position, std::string classe);

private:
};

#endif;