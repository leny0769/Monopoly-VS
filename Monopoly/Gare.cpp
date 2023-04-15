#include <string>
#include "CasePropriete.h"
#include "Gare.h"
using namespace std;



Gare::Gare();
Gare::Gare(int position, std::string classe,int loyerGare[4], std::string nom, int prix, std::string type_couleur) {
    CasePropriete(position,classe,nom, prix,type_couleur);
    this->loyer_ = loyerGare;
}
