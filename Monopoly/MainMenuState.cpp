#include "MainMenuState.h"
#include <SFML/Graphics.hpp>
#include <iostream> 


int MainMenuState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	// Intro screen
	sf::RectangleShape introScreen(sf::Vector2f(1280.0f, 720.0f));
	sf::Texture introScreenTexture;
	introScreenTexture.loadFromFile("Assets/menu.jpg");
	introScreen.setTexture(&introScreenTexture);


	sf::Text introScreenText[3];
	for (int i = 0; i < 3; i++) {
		introScreenText[i].setFont(monopolyFont);
		introScreenText[i].setFillColor(sf::Color::Black);
	}

	introScreenText[0].setString("START GAME");
	introScreenText[0].setCharacterSize(35);

	introScreenText[1].setString("EXIT GAME");
	introScreenText[1].setCharacterSize(35);

	introScreenText[2].setString("Lény METZGER \t Antoine PERRIN-DELORT");
	introScreenText[2].setCharacterSize(15);

	introScreenText[0].setPosition(503.0f, 185.0f);
	introScreenText[1].setPosition(527.0f, 335.0f);
	introScreenText[2].setPosition(460.0f, 690.0f);

	// New game button
	//sf::Texture newGameButtonTexture;
	//newGameButtonTexture.loadFromFile("assets/new-game-button.png");
	sf::RectangleShape newGameButton(sf::Vector2f(316.0f, 94.0f));
	//newGameButton.setTexture(&newGameButtonTexture);
	newGameButton.setPosition(sf::Vector2f(480.0f, 160.0f));

	// Quit game button
	//sf::Texture newGameButtonTexture;
	//newGameButtonTexture.loadFromFile("assets/new-game-button.png");
	sf::RectangleShape quitButton(sf::Vector2f(316.0f, 94.0f));
	//newGameButton.setTexture(&newGameButtonTexture);
	quitButton.setPosition(sf::Vector2f(480.0f, 310.0f));

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
				sf::FloatRect startGameBounds = introScreenText[0].getGlobalBounds();
				sf::FloatRect exitBounds = introScreenText[1].getGlobalBounds();

				// Si on clique sur "Exit" : on quitte l'application
				if (exitBounds.contains(mousePos)) {
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
		window.draw(introScreenText[0]);

		window.draw(quitButton);
		window.draw(introScreenText[1]);

		window.draw(introScreenText[2]);


		window.display();
	}

	return 0;
}

void MainMenuState::jouerMusique() {
    std::cout << "Jouer de la musique du menu principal\n";
}
