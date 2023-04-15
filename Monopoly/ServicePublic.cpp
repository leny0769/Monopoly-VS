#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;



ServicePublic();
ServicePublic(int position, int loyer[4], std::string nom, int prix, std::string type_couleur) {
    CasePropriete(position,nom, prix,type_couleur);
    this.loyer_ = loyer;
}

int getLoyer() {
}