#ifndef CARTE_H
#define CARTE_H

#include <string>

using namespace std;


class Carte {
    public:
        Carte();
        Carte(string description);
        void afficherCarte();

    private:
        string description_;
};

#endif;