#ifndef CASEPROPRIETE_H
#define CASEPROPRIETE_H

#include <string>
#include <Joueur.h>
#include <Case.h>

using namespace std;


class CasePropriete : public Case {
    public:
        CasePropriete();
        CasePropriete(string nom, int prix, int valeurHypotheque, string type_couleur, int position);
        int getPrix();
        bool getHypotheque();
        void setProprietaire(Joueur proprietaire);
        void hypothequer();
        void deshypothequer();
        bool payerLoyer(Joueur joueur);

    private:
        string nom_;
        int prix_;
        int valeurHypotheque_;
        Joueur proprietaire_;
        bool hypoteque_;
        string  type_couleur_;
};

#endif;