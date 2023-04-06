#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"
#include "CasePropriete.h"

using namespace std;


class Joueur {
    public:
        Joueur();
        Joueur(string nom, int argent, Pion pion);
        void allerEnPrison();
        void addArgent(int montant);
        bool subArgent(int montant);

    private:
        string nom_;
        int argent_;
        unordered_map<std::string, CasePropriete[]> proprietes_;
        Pion pion_;
        int position_;
        int carteSortiePrison_;
        bool prison_;
};

#endif;