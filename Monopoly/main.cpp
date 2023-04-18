//#include "JeuMonopoly.h"
//#include "Joueur.h"
#include <iostream> 
//#include "PlayerMenuState.h"
//#include "MainMenuState.h"
//#include "InGameState.h"
//#include "Game.h"
#include "Joueur.h"
#include "jeuMonopoly.h"


int main()
{
	vector<Joueur> joueurs;
	joueurs.resize(2);
	Joueur moi = Joueur("Antoine", 9999);
	Joueur autre = Joueur("Autre", 9999);
	joueurs.push_back(moi);
	joueurs.push_back(autre);
	JeuMonopoly Partie = JeuMonopoly(joueurs);
	
	while (Partie.isOngoing()) {
		Joueur j = Partie.getJoueur();
		cout << "C'EST AU TOUR DE : " << j.getNom();
		Partie.jouerTour(j);
		Partie.getNextJoueur();
	}
	Joueur gagnant = Partie.getWinner();

	return 0;
}
