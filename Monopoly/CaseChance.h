#ifndef CASECHANCE_H
#define CASECHANCE_H

#include <string>
#include <Case.h>

using namespace std;


class CaseChance : public Case {
    public:
        CaseChance();
        CaseChance(int position, std::string classe);

    private:
};

#endif;