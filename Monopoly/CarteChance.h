#ifndef CARTECHANCE_H
#define CARTECHANCE_H

#include <string>
#include "Carte.h"
#include <stdexcept>

using namespace std;


class CarteChance : public Carte {
    public:
        CarteChance();
        CarteChance(int id);

    private:
        int id_;
        string description_;
};

#endif;