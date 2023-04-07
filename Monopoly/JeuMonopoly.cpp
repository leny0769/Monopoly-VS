#include <string>
#include "Joueur.h"
#include "De.h"
#include "Plateau.h"
#include "Banque.h"
#include "CarteChance.h"
#include "CarteCaisseDeCommunaute.h"
#include "Langue.h"
#include <vector>


using namespace std;


class JeuMonopoly {
private:
    int tourDuJoueur_;
    De des_[2];
    Plateau plateau_;
    Banque banque_;
    vector<Joueur> joueurs_;
    CarteChance cartesChance_[16];
    CarteCaisseDeCommunaute CarteCaisseDeCommunautes_[16];
    Langue langue_;
public:
    JeuMonopoly();
    JeuMonopoly(De des[2], Plateau plateau, Banque banque, vector<Joueur> joueurs, CarteChance cartesChance[16],
        CarteCaisseDeCommunaute cartesCaisseDeCommunaute[16], Langue langue);
    int getTourDuJoueur() {
        return this->tourDuJoueur_;
    }
    De getDes() {
        return this->des_;
    }
    vector<Joueur> getJoueurs() {
        return this->joueurs_;
    }
    Joueur getJoueur() {
        return this->joueurs_[this->tourDuJoueur_];
    }
    void commencerPartie();
    void finirPartie();
    void lancerDes();
    void getNextJoueur() {
        this->tourDuJoueur_ = (this->tourDuJoueur_ + 1) % this->joueurs_.size;
    }
    bool isOngoing() {
        int joueurEnVie = 0;
        for (Joueur j : this.joueurs_) {
            if (j.getStatut == "playing") {
                joueurEnVie += 1
            }
        }
        if (joueurEnVie >= 2) {
            return true;
        }
        else {
            return false;
        }
    }
    Joueur getWinner() {
        for (Joueur j : this.joueurs_) {
            if (j.getStatut == "playing") {
                return j;
            }
        }
    }
    void jouerTour(Joueur j);
};