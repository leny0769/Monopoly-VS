#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include "Joueur.h"
#include "Case.h"
#include "Joueur.h"

using namespace std;

class CasePropriete : public Case {

    public:
        //METHODES CASEPROPRIETE
        CasePropriete();
        CasePropriete(int position, std::string classe, std::string nom, int prix, std::string type_couleur);
        bool getSansProprietaire();
        int getPrix();
        bool getHypotheque();
        Joueur getProprietaire();
        std::string getNom();
        std::string getTypeCouleur();
        void setProprietaire(Joueur& proprietaire);
        void setHypotheque(bool b);
        int getValeurHypotheque();
        
        virtual int getLoyer() = 0;

        //METHODES TERRAIN
        //virtual GroupeTerrain* getGroupeTerrain() = 0;
        virtual void construireMaison() = 0;
        virtual void vendreMaison() = 0;

        //METHODES SERVICEPUBLIC
        //virtual GroupeServicePublic* getGroupeServicePublic() = 0;
        //int getValeurHypotheque();

        //METHODES GARE
        //GroupeGare* getGroupeGare();

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