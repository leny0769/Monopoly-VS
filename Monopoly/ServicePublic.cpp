#include <string>
#include "CasePropriete.h"
#include "Joueur.h"

using namespace std;


class ServicePublic : public CasePropriete {
public:
    ServicePublic();
    ServicePublic(int[4] loyer, string nom, int prix, int valeurHypotheque, string type_couleur, int position, Joueur proprietaire) {
        CasePropriete(nom, prix, valeurHypotheque,type_couleur, position, proprietaire);
        this.loyer_ = loyer;
    }

    int getLoyer() {
    }
private:
    int[4] loyer_;
};