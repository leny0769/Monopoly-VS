#include <string>
#include "Carte.h"

using namespace std;


class CarteCaisseDeCommunaute : public Carte {
public:
    CarteCaisseDeCommunaute();
    CarteCaisseDeCommunaute(string description,int id) {
        Carte(description, id);
    }

private:
};