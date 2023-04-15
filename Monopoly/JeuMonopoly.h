#ifndef JEUMONOPOLY_H
#define JEUMONOPOLY_H

#include <string>
#include "Joueur.h"
#include "De.h"
#include "Plateau.h"
#include "Banque.h"
#include "CarteChance.h"
#include "CarteCaisseDeCommunaute.h"
#include "Langue.h"
#include "GameState.h"
#include <algorithm>
#include <random>


using namespace std;


class JeuMonopoly {
    public:
        JeuMonopoly(vector<Joueur> joueurs);
        int getTourDuJoueur();
        De getDes();
        vector<Joueur> getJoueurs();
        Joueur getJoueur();
        void commencerPartie();
        void finirPartie();
        void lancerDes();
        void getNextJoueur();
        bool isOngoing();
        Joueur getWinner();
        void jouerTour(Joueur j);

    private:
        int tourDuJoueur_;
        De des_[2];
        Plateau plateau_;
        Banque banque_;
        vector<Joueur> joueurs_;
        CarteChance cartesChance_[16];
        CarteCaisseDeCommunaute CarteCaisseDeCommunautes_[16];
        Langue langue_;
};

#endif;