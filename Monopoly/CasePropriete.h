#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include "Joueur.h"
#include "Case.h"
using namespace std;


class CasePropriete : public Case {
    public:
        CasePropriete();
        CasePropriete(int position, std::string classe, std::string nom, int prix, std::string type_couleur);
        bool getSansProprietaire();
        int getPrix();
        bool getHypotheque();
        void setProprietaire(Joueur proprietaire);
        Joueur getProprietaire();
        std::string getNom();
        bool getHypotheque();
        void getTypeCouleur();
        void setProprietaire(Joueur& proprietaire);
        void setHypotheque(bool b);
        int getValeurHypotheque();

    private:
        std::string nom_;
        int prix_;
        int valeurHypotheque_;
        Joueur proprietaire_;
        bool hypotheque_;
        std::string type_couleur_;
        int loyer_[5];
        int nombreMaisons_;
        bool sansProprietaire_;
};

#endif;