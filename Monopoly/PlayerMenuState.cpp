#include "PlayerMenuState.h"
//#include <SFML/Graphics.hpp>
#include <iostream> 

/*
int PlayerMenuState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	bool gameStarted = false;
	int totalPlayers = -1;

	// Gestion du menu de sélection du nombre de joueur
	while (!gameStarted) {

		gameStarted = true;

		// Keeps the total number of players
		// that the user has asked for
		// the game supports 3 - 5 players.

		// Background screen
		sf::Texture playerNumberScreenTexture;
		playerNumberScreenTexture.loadFromFile("assets/menu.jpg");
		sf::RectangleShape playerNumberScreen(sf::Vector2f(1280.0f, 720.0f));
		playerNumberScreen.setTexture(&playerNumberScreenTexture);


		// 2 player
		//sf::Texture twoPlayerTexture;
		//twoPlayerTexture.loadFromFile("assets/3-player-card.png");
		sf::RectangleShape twoPlayerCard(sf::Vector2f(150.0f, 100.0f));
		//twoPlayerCard.setTexture(&woPlayerTexture);
		twoPlayerCard.setPosition(sf::Vector2f(150.0f, 200.0f));

		// 3 player
		//sf::Texture twoPlayerTexture;
		//twoPlayerTexture.loadFromFile("assets/3-player-card.png");
		sf::RectangleShape threePlayerCard(sf::Vector2f(150.0f, 100.0f));
		//twoPlayerCard.setTexture(&woPlayerTexture);
		threePlayerCard.setPosition(sf::Vector2f(350.0f, 200.0f));

		// 4 player
		//sf::Texture twoPlayerTexture;
		//twoPlayerTexture.loadFromFile("assets/3-player-card.png");
		sf::RectangleShape fourPlayerCard(sf::Vector2f(150.0f, 100.0f));
		//twoPlayerCard.setTexture(&woPlayerTexture);
		fourPlayerCard.setPosition(sf::Vector2f(550.0f, 200.0f));

		// 5 player
		//sf::Texture twoPlayerTexture;
		//twoPlayerTexture.loadFromFile("assets/3-player-card.png");
		sf::RectangleShape fivePlayerCard(sf::Vector2f(150.0f, 100.0f));
		//twoPlayerCard.setTexture(&woPlayerTexture);
		fivePlayerCard.setPosition(sf::Vector2f(750.0f, 200.0f));

		// 6 player
		//sf::Texture twoPlayerTexture;
		//twoPlayerTexture.loadFromFile("assets/3-player-card.png");
		sf::RectangleShape sixPlayerCard(sf::Vector2f(150.0f, 100.0f));
		//twoPlayerCard.setTexture(&woPlayerTexture);
		sixPlayerCard.setPosition(sf::Vector2f(950.0f, 200.0f));

		//bool playerSelected = false;

		//sf::Clock clk;

		while (totalPlayers == -1) {
			sf::Event evt;
			while (window.pollEvent(evt)) {
				if (evt.type == evt.Closed) {
					window.close();
				}

				if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
					sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));

					// Checks if any of the cards have been clicked
					sf::FloatRect twoCardBound = twoPlayerCard.getGlobalBounds();
					sf::FloatRect threeCardBound = threePlayerCard.getGlobalBounds();
					sf::FloatRect fourCardBound = fourPlayerCard.getGlobalBounds();
					sf::FloatRect fiveCardBound = fivePlayerCard.getGlobalBounds();
					sf::FloatRect sixCardBound = sixPlayerCard.getGlobalBounds();

					if (twoCardBound.contains(mousePos)) totalPlayers = 2;
					if (threeCardBound.contains(mousePos)) totalPlayers = 3;
					if (fourCardBound.contains(mousePos)) totalPlayers = 4;
					if (fiveCardBound.contains(mousePos)) totalPlayers = 5;
					if (sixCardBound.contains(mousePos)) totalPlayers = 6;
				}

			}


			window.draw(playerNumberScreen);
			window.draw(twoPlayerCard);
			window.draw(threePlayerCard);
			window.draw(fourPlayerCard);
			window.draw(fivePlayerCard);
			window.draw(sixPlayerCard);
			window.display();

		}

	}

	return totalPlayers;
}

void PlayerMenuState::jouerMusique() {
    std::cout << "Jouer de la musique du menu de sélection de joueur\n";
}
*/