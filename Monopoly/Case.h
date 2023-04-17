#ifndef CASE_H
#define CASE_H

#include <string>
#include "Joueur.h"

using namespace std;


class Case {
    public:
        Case() {
        };
        Case(int position, const string classe) {
            position_ = position;
            class_ = classe;
        }
        virtual int getPrix() = 0;
        virtual void setProprietaire(Joueur& proprietaire) = 0;
        virtual string getClass() {
            return class_;
        };
        virtual int getPosition() {
            return position_;
        };


    protected:
        int position_;
        string class_;
        //PathImage image_;
};

#endif;