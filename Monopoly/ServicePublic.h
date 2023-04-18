#ifndef SERVICEPUBLIC_H
#define SERVICEPUBLIC_H

#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;

class GroupeServicePublic;

class ServicePublic : public CasePropriete {
    public:
        ServicePublic();
        ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur);
        int getLoyer() override;
        GroupeServicePublic* getGroupeServicePublic() override;
        int getValeurHypotheque() override;


        //METHODES TERRAIN
        GroupeTerrain* getGroupeTerrain()  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getLoyer()  override { throw std::runtime_error("méthode d'une autre classe"); };
        int getValeurHypotheque() override { throw std::runtime_error("méthode d'une autre classe"); };
        void construireMaison() override { throw std::runtime_error("méthode d'une autre classe"); };
        void vendreMaison() override { throw std::runtime_error("méthode d'une autre classe"); };


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
        int loyer_[4];
        GroupeServicePublic* groupeServicePublic_;
};

#endif