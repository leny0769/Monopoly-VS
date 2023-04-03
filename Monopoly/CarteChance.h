#ifndef CARTECHANCE_H
#define CARTECHANCE_H

#include <string>
#include <Carte.h>

using namespace std;


class CarteChance : public Carte {
    public:
        CarteChance();
        CarteChance(string description);

    private:
};

#endif;