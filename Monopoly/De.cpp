#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;



De();
int getValeur() {
    return this->valeur;
}
void lancerDes() {
    srand(time(NULL));
    int rand = std::rand();
    this->valeur = rand % 7;
}
void afficherResultat();
