#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include "Joueur.h"
#include "Case.h"
#include "Joueur.h"
#include <iostream>

using namespace std;

class Case {

    public:
        Case();
        Case(int position, const string classe, std::string nom, int prix, std::string type_couleur, int taxe);

        virtual string getClass() {
            return class_;
        };
        virtual int getPosition() {
            return position_;
        };


        bool getSansProprietaire();
        bool getHypotheque();
        Joueur getProprietaire();
        std::string getNom();
        std::string getTypeCouleur();
        void setHypotheque(bool b);
        int getPrix();
        void setProprietaire(Joueur& proprietaire);

        //METHODES TERRAIN
        ///virtual GroupeTerrain* getGroupeTerrain();
        virtual int getLoyer() { return 0; };
        virtual int getValeurHypotheque() { return prix_/2; };
        virtual  void construireMaison() { };
        virtual  void vendreMaison() { };

        void ajouterArgent(int montant) {
            this->argentStock_ += montant;
        }
        void recupererArgent(Joueur& joueur) {
            joueur.addArgent(this->argentStock_);
            this->argentStock_ = 0;
        }
        int getArgentStock() {
            return this->argentStock_;
        }

        int getTaxe() {
            return this->taxe_;
        }



    private:
        int position_;
        string class_;
        std::string nom_;
        int prix_;
        int valeurHypotheque_;
        Joueur proprietaire_;
        bool hypotheque_;
        std::string type_couleur_;
        int loyer_[5];
        int nombreMaisons_;
        bool sansProprietaire_;
        int argentStock_;
        int taxe_;
};

#endif;