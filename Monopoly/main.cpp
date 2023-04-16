#include <SFML/Graphics.hpp>
//#include "JeuMonopoly.h"
//#include "Joueur.h"
#include <iostream> 
#include "PlayerMenuState.h"
#include "MainMenuState.h"
#include "InGameState.h"
#include "Game.h"


extern const int NB_JOUEUR;


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


	/*JeuMonopoly Partie;
	
	while (Partie.isOngoing()) {
		Joueur j = Partie.getJoueur();
		Partie.jouerTour(j);
		Partie.getNextJoueur();
	}
	Joueur gagnant = Partie.getWinner();*/

	return 0;
}