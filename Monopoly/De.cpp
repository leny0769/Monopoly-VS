#include <string>
#include <cstdlib>
#include <ctime>
#include "De.h"
using namespace std;



De::De() {

}

int De::getValeur() {
    return this->valeur;
}

void De::lancerDe() {
    srand(time(NULL));
    int rand = std::rand();
    this->valeur = rand % 7;
}

void De::afficherResultat() {

}
