#ifndef GROUPESERVICEPUBLIC_H
#define GROUPESERVICEPUBLIC_H

#include <string>
#include "ServicePublic.h"
#include <list>
#include "Joueur.h"

using namespace std;

class GroupeServicePublic : public ServicePublic {
public:
    GroupeServicePublic();
    GroupeServicePublic(string couleur_ou_type);
    void addProperty(ServicePublic& propriete);
    string getName();
    int nombreServicePublicPossedees(Joueur j);

private:
    std::string couleur_ou_type_;
    std::list<GroupeServicePublic> listServicePublic;
};
