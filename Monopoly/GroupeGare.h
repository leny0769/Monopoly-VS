#ifndef GROUPEGARE_H
#define GROUPEGARE_H

#include <string>
#include "Gare.h"
#include <list>
#include "Joueur.h"

using namespace std;

class GroupeGare : public Gare {
public:
    GroupeGare();
    GroupeGare(string couleur_ou_type);
    void addProperty(Gare& propriete);
    string getName();
    int nombreGarePossedees(Joueur j);

private:
    std::string couleur_ou_type_;
    std::list<Gare> listGare;
};
