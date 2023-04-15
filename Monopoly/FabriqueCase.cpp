#include <string>
#include "Case.h"
#include "CaseCaisseDeCommunaute.h"
#include "CaseChance.h"
#include "CaseDepart.h"
#include "CaseParcGratuit.h"
#include "CasePrison.h"
#include "CasePropriete.h"
#include "CaseTaxe.h"
#include "ServicePublic.h"
#include "Gare.h"
#include "Terrain.h"
#include "FabriqueCase.h"
using namespace std;



FabriqueCase::FabriqueCase();
Case FabriqueCase::creerCase(std::string type, int position,int salaire = 0,int prixLiberation = 0, std::string nom = "", int prix = 0, std::string type_couleur = "", int* loyerTerrain[5] = nullptr, int taxe = 0, int loyerGareService[4] = nullptr) {
	if (type == "taxe") {
		return CaseTaxe(position, taxe);
	}
	if (type == "terrain") {
		return Terrain(position, loyerTerrain, nom, prix, type_couleur);
	}
	if (type == "service") {
		return ServicePublic(position, loyerGareService, nom,prix, type_couleur);
	}
	if (type == "gare") {
		return Gare(position, loyerGareService, nom, prix, type_couleur);
	}
	if (type == "prison") {
		return CasePrison(position, prixLiberation);
	}
	if (type == "parc") {
		return CaseParcGratuit(position);
	}
	if (type == "depart") {
		return CaseDepart(position, salaire);
	}
	if (type == "chance") {
		return CaseChance(position);
	}
	if (type == "commaunaute") {
		return CaseCaisseDeCommunaute(position);
	}
}

