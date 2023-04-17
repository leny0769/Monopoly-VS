#ifndef CARTE_H
#define CARTE_H

#include <string>

using namespace std;


class Carte {
    public:
        Carte();
        Carte(int id);
        void afficherCarte();

    protected:
        string description_;
        int id_;
};

#endif;