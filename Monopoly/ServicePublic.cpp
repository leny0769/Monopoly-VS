#include <string>
#include "CasePropriete.h"
#include "Joueur.h"
#include "ServicePublic.h"
using namespace std;



ServicePublic::ServicePublic();
ServicePublic::ServicePublic(int position, std::string classe, int loyer[4], std::string nom, int prix, std::string type_couleur) {
    CasePropriete(position,classe,nom, prix,type_couleur);
    this->loyer_ = loyer;
}
int ServicePublic::getValeurHypotheque() {
    int valHypotheque = this.getPrix() / 2;
    return valHypotheque;
}
