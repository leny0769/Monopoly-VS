#ifndef CARTECAISSEDECOMMUNAUTE_H
#define CARTECAISSEDECOMMUNAUTE_H

#include <string>
#include "Carte.h"
#include <stdexcept>

using namespace std;


class CarteCaisseDeCommunaute : public Carte {
    public:
        CarteCaisseDeCommunaute();
        CarteCaisseDeCommunaute(int id);
        string getDescription();

    private:
        int id_;
        string description_;
};

#endif;