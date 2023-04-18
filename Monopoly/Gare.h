#ifndef GARE_H
#define GARE_H

#include <string>
#include "Case.h"

using namespace std;

class GroupeGare;

class Gare : public Case {
    public:
        Gare();
        Gare(int position, std::string classe, int loyerGare[4], std::string nom, int prix, std::string type_couleur);
        int getLoyer() override;
        //GroupeGare* getGroupeGare() override;
        int getValeurHypotheque() override;


    private:
        int loyer_[4];
        //GroupeGare* groupeGare_;
};

#endif;