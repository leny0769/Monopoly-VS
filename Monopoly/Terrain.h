#ifndef TERRAIN_H
#define TERRAIN_H

#include <string>
#include "CasePropriete.h"
#include "GroupeTerrain.h"

using namespace std;

class GroupeTerrain;

class Terrain : public CasePropriete {
    public:
        Terrain();
        Terrain(int position, std::string classe,int loyer[5], string nom, int prix, string type_couleur);
        GroupeTerrain* getGroupeTerrain() override;
        int getLoyer() override;
        int getValeurHypotheque() override;
        void construireMaison() override;
        void vendreMaison() override;



        //METHODES SERVICEPUBLIC
        //int getLoyer();
        GroupeServicePublic* getGroupeServicePublic()  override { throw std::runtime_error("méthode d'une autre classe"); };
        //int getValeurHypotheque();

        //METHODES GARE
        //virtual int getLoyer() = 0;
        GroupeGare* getGroupeGare()  override { throw std::runtime_error("méthode d'une autre classe"); };
        // virtual int getValeurHypotheque() = 0;

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
        int loyer_[5];
        int nombreMaison_;
        GroupeTerrain* groupeTerrain_;
};

#endif;