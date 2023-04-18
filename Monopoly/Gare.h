#ifndef GARE_H
#define GARE_H

#include <string>
#include "CasePropriete.h"

using namespace std;

class GroupeGare;

class Gare : public CasePropriete {
    public:
        Gare();
        Gare(int position, std::string classe, int loyerGare[4], std::string nom, int prix, std::string type_couleur);
        int getLoyer() override;
        GroupeGare* getGroupeGare() override;
        int getValeurHypotheque() override;

        //METHODES TERRAIN
        GroupeTerrain* getGroupeTerrain()  override { throw std::runtime_error("méthode d'une autre classe"); };
        void construireMaison() override { throw std::runtime_error("méthode d'une autre classe"); };
        void vendreMaison() override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODES SERVICEPUBLIC
        //int getLoyer();
        GroupeServicePublic* getGroupeServicePublic()  override { throw std::runtime_error("méthode d'une autre classe"); };
        //int getValeurHypotheque();



         //METHODES PARC GRATUIT
        void ajouterArgent(int montant)  override { throw std::runtime_error("méthode d'une autre classe"); };
        void recupererArgent(Joueur& joueur)  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getArgentStock()  override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODE CASE DEPART
        int getSalaire()  override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODE CASE TAXE
        int getTaxe() override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODE CASE PRISON
        int getPrixLiberation()  override { throw std::runtime_error("méthode d'une autre classe"); };

    private:
        int loyer_[4];
        GroupeGare* groupeGare_;
};

#endif;