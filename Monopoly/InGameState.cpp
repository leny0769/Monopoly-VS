#include "InGameState.h"
//#include <SFML/Graphics.hpp>
#include <iostream> 
/*
int InGameState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	
	// Fond
	sf::Texture gameScreenTexture;
	gameScreenTexture.loadFromFile("Assets/Monopoly.png");
	sf::RectangleShape gameScreen(sf::Vector2f(1280.0f, 720.0f));
	gameScreen.setTexture(&gameScreenTexture);
	gameScreenTexture.setSmooth(true);

	// Bouton pour les d�s 
	sf::Texture diceButtonTexture;
	diceButtonTexture.loadFromFile("assets/LancerD�s.png");
	sf::RectangleShape diceButton(sf::Vector2f(111.0f, 111.0f));
	diceButton.setPosition(750.0f, 600.0f);
	diceButton.setTexture(&diceButtonTexture);

	// 2 d�s
	const char* diceTextureImg[6] =
	{
		"Assets/Face1.png",
		"Assets/Face2.png",
		"Assets/Face3.png",
		"Assets/Face4.png",
		"Assets/Face5.png",
		"Assets/Face6.png"
	};

	sf::Texture* diceTexture = new sf::Texture[2];
	diceTexture[0].loadFromFile(diceTextureImg[0]);
	diceTexture[1].loadFromFile(diceTextureImg[1]);

	sf::RectangleShape* dice = new sf::RectangleShape[2];
	for (int i = 0; i < 2; i++) {
		dice[i].setSize(sf::Vector2f(100.0f, 100.f));
		dice[i].setPosition(876.0f + (i * 150.0f), 50.0f);
		dice[i].setTexture(&diceTexture[i]);
		diceTexture[i].setSmooth(true);
	}

	// Pions
	const char* playerPieceFileName[6] = {
		"Assets/PionPlayer1.png",
		"Assets/PionPlayer2.png",
		"Assets/PionPlayer3.png",
		"Assets/PionPlayer4.png",
		"Assets/PionPlayer5.png",
		"Assets/PionPlayer6.png"
	};

	sf::Texture* playerTextures = new sf::Texture[nbPlayer];
	sf::RectangleShape* playerPieces = new sf::RectangleShape[nbPlayer];

	for (int i = 0; i < nbPlayer; i++) {
		playerTextures[i].loadFromFile(playerPieceFileName[i]);
		playerPieces[i].setTexture(&playerTextures[i]);
		playerPieces[i].setSize(sf::Vector2f(10.0f, 10.0f));

		playerTextures[i].setSmooth(true);
	}

	// To handle pieces movement delay
	int* playerPrevPos = new int[nbPlayer];
	for (int i = 0; i < nbPlayer; i++)
		playerPrevPos[i] = 0;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
				sf::Vector2f mousePos = window.mapPixelToCoords(sf::Mouse::getPosition(window));

				sf::FloatRect diceButtonBounds = diceButton.getGlobalBounds();

				if (diceButtonBounds.contains(mousePos)) {
					diceTexture[0].loadFromFile(diceTextureImg[rand() % 6]);
					diceTexture[1].loadFromFile(diceTextureImg[rand() % 6]);
				}
			}
		}

		window.clear();

		window.draw(gameScreen);
		window.draw(diceButton);


		for (int i = 0; i < 2; i++) {
			window.draw(dice[i]);
		}

		for (int i = 0; i < nbPlayer; i++) {
			//int playerPosition = game.getPlayerPosition(i);
			printPlayerOnCell(window, playerPieces[i], i + 1, 30, nbPlayer);
			//playerPrevPos[i] = game.getPlayerPosition(i);
		}

		window.display();
	}

	return 0; 
}

void InGameState::jouerMusique() {
	std::cout << "Jouer de la musique du menu principal\n";
}

void InGameState::printPlayerOnCell(sf::RenderWindow& window, sf::RectangleShape shape, int numJoueur, int numCase, int nbJoueur) {

	int x, y = 0;

	if (numCase == 0) {
		y = 663;
		x = (int)(625 + 14 + (numJoueur - 1) * (50 / (nbJoueur - 1)));
	}
	else if (numCase >= 1 && numCase <= 9) {
		y = 670;
		x = (int)(118 + (9 - numCase) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbJoueur - 1)));
	}
	// TODO : g�rer le cas ou on est en prison
	else if (numCase == 10) {
		y = 685;
		x = (int)(28 + 14 + (numJoueur - 1) * (50 / (nbJoueur - 1)));
	}
	if (numCase >= 11 && numCase <= 19) {
		y = (int)(107 + (19 - numCase) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbJoueur - 1)));
		x = 57;
	}
	else if (numCase == 20) {
		y = 57;
		x = (int)(28 + 14 + (numJoueur - 1) * (50 / (nbJoueur - 1)));
	}
	if (numCase >= 21 && numCase <= 29) {
		y = 50;
		x = (int)(118 + (numCase - 21) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbJoueur - 1)));
	}
	else if (numCase == 30) {
		y = 57;
		x = (int)(625 + 14 + (numJoueur - 1) * (50 / (nbJoueur - 1)));
	}
	if (numCase >= 31 && numCase <= 39) {
		y = (int)(107 + (numCase - 31) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbJoueur - 1)));
		x = 677;
	}

	sf::Vector2f playerPos = window.mapPixelToCoords(sf::Vector2i(x, y));

	shape.setPosition(playerPos);
	window.draw(shape);
}
*/