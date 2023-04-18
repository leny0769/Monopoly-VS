#ifndef CASEPARCGRATUIT_H
#define CASEPARCGRATUIT_H

#include <string>
#include <iostream>
#include "Case.h"
#include "Joueur.h"
#include "GroupeTerrain.h"
#include "GroupeGare.h"
#include "GroupeServicePublic.h"

using namespace std;


class CaseParcGratuit : public Case {
    public:
        CaseParcGratuit();
        CaseParcGratuit(int  position, std::string classe);
        void ajouterArgent(int montant) override;
        void recupererArgent(Joueur& joueur) override;
        int getArgentStock() override;

        int getPrix() override { throw std::runtime_error("méthode d'une autre classe"); };
        void setProprietaire(Joueur& proprietaire)  override { throw std::runtime_error("méthode d'une autre classe"); };


        //METHODES CASEPROPRIETE
        bool getSansProprietaire() override { throw std::runtime_error("méthode d'une autre classe"); };
        bool getHypotheque()  override { throw std::runtime_error("méthode d'une autre classe"); };
        Joueur getProprietaire()  override { throw std::runtime_error("méthode d'une autre classe"); };
        std::string getNom() override { throw std::runtime_error("méthode d'une autre classe"); };
        std::string getTypeCouleur()  override { throw std::runtime_error("méthode d'une autre classe"); };
        void setHypotheque(bool b)  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getValeurHypotheque()  override { throw std::runtime_error("méthode d'une autre classe"); };

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


        //METHODE CASE DEPART
        int getSalaire()  override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODE CASE TAXE
        int getTaxe() override { throw std::runtime_error("méthode d'une autre classe"); };

        //METHODE CASE PRISON
        int getPrixLiberation()  override { throw std::runtime_error("méthode d'une autre classe"); };


    private:
        int argentStock_;
};

#endif;