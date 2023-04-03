#ifndef PION_H
#define PION_H

#include <string>

using namespace std;


class Pion {
    public:
        Pion();
        Pion(string nom);

    private:
        string nom_;
};

#endif;