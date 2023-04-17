#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include "Joueur.h"
#include "Case.h"
#include "Joueur.h"
#include "GroupeTerrain.h"
#include "GroupeServicePublic.h"
#include "GroupeGare.h"
using namespace std;

class CasePropriete : public Case {

    public:
        //METHODES CASEPROPRIETE
        CasePropriete();
        CasePropriete(int position, std::string classe, std::string nom, int prix, std::string type_couleur);
        bool getSansProprietaire();
        int getPrix() override;
        bool getHypotheque();
        Joueur getProprietaire();
        std::string getNom();
        std::string getTypeCouleur();
        void setProprietaire(Joueur& proprietaire) override;
        void setHypotheque(bool b);
        int getValeurHypotheque();

        //METHODES TERRAIN
        GroupeTerrain* getGroupeTerrain();
        int getLoyer();
        int getValeurHypotheque();
        void construireMaison();
        void vendreMaison();

        //METHODES SERVICEPUBLIC
        //int getLoyer();
        GroupeServicePublic* getGroupeServicePublic();
        //int getValeurHypotheque();

        //METHODES GARE

        int getLoyer();
        GroupeGare* getGroupeGare();
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