#ifndef CASE_H
#define CASE_H

#include <string>
#include "Joueur.h"

using namespace std;

class Case {
    public:
        Case() {
        };
        Case(int position, const string classe) {
            position_ = position;
            class_ = classe;
        }
        virtual int getPrix() = 0;
        virtual void setProprietaire(Joueur& proprietaire) = 0;
        virtual string getClass() {
            return class_;
        };
        virtual int getPosition() {
            return position_;
        };


        //METHODES CASEPROPRIETE
        virtual bool getSansProprietaire() = 0;
        virtual bool getHypotheque() = 0;
        virtual Joueur getProprietaire() = 0;
        virtual std::string getNom() = 0;
        virtual std::string getTypeCouleur() = 0;
        virtual void setHypotheque(bool b) = 0;
        virtual int getValeurHypotheque() = 0;

        //METHODES TERRAIN
        //virtual GroupeTerrain* getGroupeTerrain() = 0;
        virtual int getLoyer() = 0;
        virtual void construireMaison() = 0;
        virtual void vendreMaison() = 0;

        //METHODES SERVICEPUBLIC
        //int getLoyer();
        //virtual GroupeServicePublic* getGroupeServicePublic() = 0;
        //int getValeurHypotheque();

        //METHODES GARE
        //virtual int getLoyer() = 0;
        //virtual GroupeGare* getGroupeGare() = 0;
       // virtual int getValeurHypotheque() = 0;

        //METHODES PARC GRATUIT
        virtual void ajouterArgent(int montant) = 0;
        virtual void recupererArgent(Joueur& joueur) = 0;
        virtual int getArgentStock() = 0;

        //METHODE CASE DEPART
        virtual int getSalaire() = 0;

        //METHODE CASE TAXE
        virtual int getTaxe() = 0;

        //METHODE CASE PRISON
        virtual int getPrixLiberation() = 0;

    protected:
        int position_;
        string class_;
};

#endif;