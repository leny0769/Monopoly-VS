#include "SFML/Graphics.hpp"
#include "PlayerMenuState.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "Game.h"
#include <iostream> 
#include "JeuMonopoly.h"
#include "Joueur.h"

int main()
{
	// Fenêtre
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Monopoly by Antoine PERRIN-DELORT & Lény METZGER", sf::Style::Close);

	// Ajout de l'icone
	sf::Image favicon;
	favicon.loadFromFile("Assets/icone_monopoly.png");
	window.setIcon(256, 256, favicon.getPixelsPtr());

	// Monopoly Font
	sf::Font monopolyFont;
	monopolyFont.loadFromFile("Fonts/KabelBdNormal.ttf");


	Game& game = Game::getInstance();

	game.setState(new MainMenuState());
	game.afficherInterface(window, monopolyFont, NULL);
	//currentState_->jouerMusique();

	// Changer l'état du jeu pour le menu de sélection de joueur
	game.setState(new PlayerMenuState());
	int nbPlayer = game.afficherInterface(window, monopolyFont, NULL);
	//currentState_->jouerMusique();

	// Changer l'état du jeu pour être en jeu
	game.setState(new InGameState());
	game.afficherInterface(window, monopolyFont, nbPlayer);
	//currentState_->jouerMusique();

	std::cout << nbPlayer << std::endl;

	/*vector<Joueur> joueurs;
	Joueur moi("Antoine", 9999);
	cout << moi.isEnPrison();
	cout << moi.getNbCarteSortiePrison();
	Joueur autre("Autre", 9999);
	joueurs.push_back(moi);
	joueurs.push_back(autre);

	JeuMonopoly Partie(joueurs);

	while (Partie.isOngoing()) {
		Joueur j = Partie.getJoueur();
		cout << "C'EST AU TOUR DE : " + j.getNom() << std::endl;
		Partie.jouerTour(j);
		Partie.getNextJoueur();
	}
	Joueur gagnant = Partie.getWinner();*/

	return 0;
}
