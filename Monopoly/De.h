#ifndef DE_H
#define DE_H

#include <string>

using namespace std;


class De {
    public:
        De();
        int getValeur();
        void lancerDe();
        void afficherResultat();

    private:
        int valeur;
};

#endif;