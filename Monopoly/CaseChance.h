#ifndef CASECHANCE_H
#define CASECHANCE_H

#include <string>
#include "Case.h"


using namespace std;


class CaseChance : public Case {
    public:
        CaseChance();
        CaseChance(int position, std::string classe);

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
};

#endif;