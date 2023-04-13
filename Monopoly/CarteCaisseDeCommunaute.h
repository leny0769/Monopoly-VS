#ifndef CARTECAISSEDECOMMUNAUTE_H
#define CARTECAISSEDECOMMUNAUTE_H

#include <string>
#include "Carte.h"

using namespace std;


class CarteCaisseDeCommunaute : public Carte {
    public:
        CarteCaisseDeCommunaute();
        CarteCaisseDeCommunaute(int id);

    private:
        int id_;
        string description_;
};

#endif;