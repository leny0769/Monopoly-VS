#ifndef JEUMONOPOLY_H
#define JEUMONOPOLY_H

#include <string>
#include <Joueur.h>
#include <De.h>
#include <Plateau.h>
#include <Banque.h>
#include <CarteChance.h>
#include <CarteCaisseDeCommunaute.h>
#include <Langue.h>


using namespace std;


class JeuMonopoly {
    public:
        JeuMonopoly();
        JeuMonopoly(De des[2], Plateau plateau, Banque banque, vector<Joueur> joueurs, CarteChance cartesChance[16], 
            CarteCaisseDeCommunaute cartesCaisseDeCommunaute[16], Langue langue);
        void commencerPartie();
        void finirPartie();
        void lancerDes();
        void getNextJoueur();
        void jouerTour(Joueur j);

    private:
        Joueur tourDuJoueur_;
        De des_[2];
        Plateau plateau_;
        Banque banque_;
        vector<Joueur> joueurs_;
        CarteChance cartesChance_[16];
        CarteCaisseDeCommunaute CarteCaisseDeCommunautes_[16];
        Langue langue_;
};

#endif;