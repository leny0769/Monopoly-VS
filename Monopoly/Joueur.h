#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
#include <unordered_map>
#include <iostream>
#include "Pion.h"

using namespace std;

class Joueur {
    public:
		Joueur();
		Joueur(string nom, int argent);
		bool isEnPrison();
		int getSolde();
		string getNom() const;
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
		void subArgent(int montant);
		int getPosition();
		void setPosition(int position);
		void doitHypothéquer(int soldeMin);
		bool operator==(const Joueur& j2) const;
		friend ostream& operator<<(ostream& os, const Joueur& obj);

    private:
        string nom_;
        int argent_;
        int position_;
        int carteSortiePrison_;
        bool prison_;
		int nombreDoubles_;
		int nombreTourPrison_;
		string statut_;
		//unordered_map<std::string, CasePropriete[]> proprietes_;
};

#endif;