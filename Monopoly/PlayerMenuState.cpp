#include "PlayerMenuState.h"
#include <SFML/Graphics.hpp>
#include <iostream> 


int PlayerMenuState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	bool gameStarted = false;
	int totalPlayers = -1;

	// Gestion du menu de sélection du nombre de joueur
	while (!gameStarted) {

		gameStarted = true;


		// Background screen
		sf::Texture playerNumberScreenTexture;
		playerNumberScreenTexture.loadFromFile("Assets/menu.jpg");
		sf::RectangleShape playerNumberScreen(sf::Vector2f(1280.0f, 720.0f));
		playerNumberScreen.setTexture(&playerNumberScreenTexture);


		// 2 player
		sf::Texture twoPlayerTexture;
		twoPlayerTexture.loadFromFile("Assets/2PlayerButton.png");
		sf::RectangleShape twoPlayerCard(sf::Vector2f(200.0f, 100.0f));
		twoPlayerCard.setTexture(&twoPlayerTexture);
		twoPlayerCard.setPosition(sf::Vector2f(140.0f, 210.0f));

		// 3 player
		sf::Texture threePlayerTexture;
		threePlayerTexture.loadFromFile("Assets/3PlayerButton.png");
		sf::RectangleShape threePlayerCard(sf::Vector2f(200.0f, 100.0f));
		threePlayerCard.setTexture(&threePlayerTexture);
		threePlayerCard.setPosition(sf::Vector2f(540.0f, 210.0f));

		// 4 player
		sf::Texture fourPlayerTexture;
		fourPlayerTexture.loadFromFile("Assets/4PlayerButton.png");
		sf::RectangleShape fourPlayerCard(sf::Vector2f(200.0f, 100.0f));
		fourPlayerCard.setTexture(&fourPlayerTexture);
		fourPlayerCard.setPosition(sf::Vector2f(940.0f, 210.0f));

		// 5 player
		sf::Texture fivePlayerTexture;
		fivePlayerTexture.loadFromFile("Assets/5PlayerButton.png");
		sf::RectangleShape fivePlayerCard(sf::Vector2f(200.0f, 100.0f));
		fivePlayerCard.setTexture(&fivePlayerTexture);
		fivePlayerCard.setPosition(sf::Vector2f(340.0f, 410.0f));

		// 6 player
		sf::Texture sixPlayerTexture;
		sixPlayerTexture.loadFromFile("Assets/6PlayerButton.png");
		sf::RectangleShape sixPlayerCard(sf::Vector2f(200.0f, 100.0f));
		sixPlayerCard.setTexture(&sixPlayerTexture);
		sixPlayerCard.setPosition(sf::Vector2f(740.0f, 410.0f));


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
}