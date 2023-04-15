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
Case FabriqueCase::creerCase(std::string type, int position, std::string classe,int salaire = 0,int prixLiberation = 0, std::string nom = "", int prix = 0, std::string type_couleur = "", int* loyerTerrain[5] = nullptr, int taxe = 0, int loyerGareService[4] = nullptr) {
	if (type == "taxe") {
		return CaseTaxe(position,classe, taxe);
	}
	if (type == "terrain") {
		return Terrain(position, classe,loyerTerrain, nom, prix, type_couleur);
	}
	if (type == "service") {
		return ServicePublic(position, classe,loyerGareService, nom,prix, type_couleur);
	}
	if (type == "gare") {
		return Gare(position, classe, loyerGareService, nom, prix, type_couleur);
	}
	if (type == "prison") {
		return CasePrison(position,classe, prixLiberation);
	}
	if (type == "parc") {
		return CaseParcGratuit(position,classe);
	}
	if (type == "depart") {
		return CaseDepart(position, classe,salaire);
	}
	if (type == "chance") {
		return CaseChance(position,classe);
	}
	if (type == "commaunaute") {
		return CaseCaisseDeCommunaute(position,classe);
	}
}

