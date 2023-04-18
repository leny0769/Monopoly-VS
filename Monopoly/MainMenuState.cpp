#include "MainMenuState.h"
#include <SFML/Graphics.hpp>
#include <iostream> 


int MainMenuState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	// Intro screen
	sf::RectangleShape introScreen(sf::Vector2f(1280.0f, 720.0f));
	sf::Texture introScreenTexture;
	introScreenTexture.loadFromFile("Assets/menu.jpg");
	introScreen.setTexture(&introScreenTexture);


	sf::Text introScreenText;
	introScreenText.setFont(monopolyFont);
	introScreenText.setFillColor(sf::Color::White);
	introScreenText.setString("Lény METZGER \t Antoine PERRIN-DELORT");
	introScreenText.setCharacterSize(15);
	introScreenText.setPosition(460.0f, 690.0f);

	// New game button
	sf::Texture newGameButtonTexture;
	newGameButtonTexture.loadFromFile("Assets/PlayButton.png");
	sf::RectangleShape newGameButton(sf::Vector2f(350.0f, 80.0f));
	newGameButton.setTexture(&newGameButtonTexture);
	newGameButton.setPosition(sf::Vector2f(480.0f, 160.0f));

	// Quit game button
	sf::Texture quitGameButtonTexture;
	quitGameButtonTexture.loadFromFile("assets/QuitButton.png");
	sf::RectangleShape quitGameButton(sf::Vector2f(350.0f, 80.0f));
	quitGameButton.setTexture(&quitGameButtonTexture);
	quitGameButton.setPosition(sf::Vector2f(480.0f, 320.0f));

	bool play = false;

	// Gestion du menu
	while (!play) {

		sf::Event evt;
		while (window.pollEvent(evt)) {

			if (evt.type == evt.Closed) {
				window.close();
			}

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));
				sf::FloatRect startGameBounds = newGameButton.getGlobalBounds();
				sf::FloatRect exitGameBounds = quitGameButton.getGlobalBounds();

				// Si on clique sur "Exit" : on quitte l'application
				if (exitGameBounds.contains(mousePos)) {
					window.close();
				}

				// Si on clique sur "Start" : la varaiable gameStarted passe à True et la suite de l'exécution est effectuée
				if (startGameBounds.contains(mousePos)) {
					play = true;
				}
			}
		}

		window.clear();
		window.draw(introScreen);

		window.draw(newGameButton);
		window.draw(quitGameButton);
		window.draw(introScreenText);

		window.display();
	}

	return 0;
}

void MainMenuState::jouerMusique() {

}
