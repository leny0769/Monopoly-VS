#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"
#include "CasePropriete.h"

using namespace std;


class Joueur {
    public:
		int getSolde();
		string getNom();
		int getNbCarteSortiePrison();
		int getNbTourPrison();
		int getNbDoubles();
		string getStatut();
		void setStatut(string stat);
		void setNbCarteSortiePrison(int a);
		void setEnPrison(bool b);
		void setNbDouble(int a);
		void setNombreTourPrison(int a);
		void allerEnPrison();
		void addArgent(int montant);
		bool subArgent(int montant);
		int getPosition();
		void setPosition();
		void incrementPosition();

    private:
        string nom_;
        int argent_;
        unordered_map<std::string, CasePropriete[]> proprietes_;
        Pion pion_;
        int position_;
        int carteSortiePrison_;
        bool prison_;
};

#endif;