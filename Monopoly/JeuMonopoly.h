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
#include <list>
#include <vector>


using namespace std;


class JeuMonopoly {
    public:
        JeuMonopoly();
        JeuMonopoly(vector<Joueur>& joueurs);
        int getTourDuJoueur();
        vector<De> getDes();
        vector<Joueur> getJoueurs();
        Joueur getJoueur();
        void commencerPartie();
        void finirPartie();
        void lancerDes();
        void getNextJoueur();
        bool isOngoing();
        Joueur getWinner();
        void jouerTour(Joueur& j);
        void tirerCarteChance(Joueur& j);
        void tirerCarteCaisseDeCommunaute(Joueur& j);
        int getSalaire();
        int getNbJoueurEnVie();

    private:
        int salaire_;
        int tourDuJoueur_;
        vector<De> des_;
        Plateau plateau_;
        //Banque banque_;
        vector<Joueur> joueurs_;
        list<CarteChance> cartesChance_[16];
        list<CarteCaisseDeCommunaute> cartesCaisseDeCommunautes_[16];
        //Langue langue_;
};

#endif;