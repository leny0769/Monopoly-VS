#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include "Joueur.h"
#include "Case.h"
#include "Joueur.h"
#include "GroupeTerrain.h"
#include "GroupeServicePublic.h"
#include "GroupeGare.h"
#include <iostream>
using namespace std;

class CasePropriete : public Case {

    public:
        //METHODES CASEPROPRIETE
        CasePropriete();
        CasePropriete(int position, std::string classe, std::string nom, int prix, std::string type_couleur);


        //METHODES CASEPROPRIETE
        bool getSansProprietaire() override;
        bool getHypotheque()  override;
        Joueur getProprietaire()  override;
        std::string getNom() override ;
        std::string getTypeCouleur()  override;
        void setHypotheque(bool b)  override ;
        int getValeurHypotheque()  override;

        //METHODES TERRAIN
        GroupeTerrain* getGroupeTerrain()  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getLoyer()  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getValeurHypotheque() override { throw std::runtime_error("méthode d'une autre classe"); };
        void construireMaison() override { throw std::runtime_error("méthode d'une autre classe"); };
        void vendreMaison() override { throw std::runtime_error("méthode d'une autre classe"); };

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