#include "InGameState.h"
#include "De.h"
#include <SFML/Graphics.hpp>
#include <iostream> 
#include "Joueur.h"
#include <chrono>

int InGameState::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
	
	// Fond
	sf::Texture gameScreenTexture;
	gameScreenTexture.loadFromFile("Assets/Monopoly.png");
	sf::RectangleShape gameScreen(sf::Vector2f(1280.0f, 720.0f));
	gameScreen.setTexture(&gameScreenTexture);
	gameScreenTexture.setSmooth(true);


	// Bouton pour les dés 
	sf::Texture diceButtonTexture;
	diceButtonTexture.loadFromFile("assets/LancerDés.png");
	sf::RectangleShape diceButton(sf::Vector2f(111.0f, 111.0f));
	diceButton.setPosition(750.0f, 600.0f);
	diceButton.setTexture(&diceButtonTexture);


	// 2 dés
	De de1(0);
	De de2(1);


	// Pions et Joueurs
	const char* playerPieceFileName[6] = {
		"Assets/PionPlayer1.png",
		"Assets/PionPlayer2.png",
		"Assets/PionPlayer3.png",
		"Assets/PionPlayer4.png",
		"Assets/PionPlayer5.png",
		"Assets/PionPlayer6.png"
	};

	Joueur* joueurs = new Joueur[nbPlayer];

	sf::Texture* playerTextures = new sf::Texture[nbPlayer];
	sf::RectangleShape* playerPieces = new sf::RectangleShape[nbPlayer];

	for (int i = 0; i < nbPlayer; i++) {
		playerTextures[i].loadFromFile(playerPieceFileName[i]);
		playerPieces[i].setTexture(&playerTextures[i]);
		playerPieces[i].setSize(sf::Vector2f(10.0f, 10.0f));
		playerTextures[i].setSmooth(true);

		Joueur joueur("Leny", 1500);
		joueurs[i] = joueur;
		//cout << joueur;
	}





	/*int* playerPrevPos = new int[nbPlayer];
	for (int i = 0; i < nbPlayer; i++)
		playerPrevPos[i] = 0;*/


	int tourDuJoueur = 1;
	bool updateTour = false;
	auto start_time = std::chrono::steady_clock::now();

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
				auto current_time = std::chrono::steady_clock::now();

				if (diceButtonBounds.contains(mousePos) && std::chrono::duration_cast<std::chrono::seconds>(current_time - start_time).count() > 2) {
					de1.lancerDe();
					de2.lancerDe();
					std::cout << "Resultat du De 1 : " + std::to_string(de1.getValeur()) << std::endl;
					std::cout << "Resultat du De 2 : " + std::to_string(de2.getValeur()) << std::endl;
					int resultat = de1.getValeur() + de2.getValeur();
					start_time = std::chrono::steady_clock::now();
					
					std::cout <<  joueurs[tourDuJoueur - 1].getPosition() << std::endl;
					joueurs[tourDuJoueur - 1].setPosition((joueurs[tourDuJoueur - 1].getPosition() + resultat) % 40);
					std::cout << joueurs[tourDuJoueur - 1].getPosition() << std::endl;
					updateTour = true;
				}
			}
		}

		window.clear();

		window.draw(gameScreen);
		window.draw(diceButton);

		de1.afficherResultat(window);
		de2.afficherResultat(window);

		
		for (int i = 0; i < nbPlayer; i++) {
			int playerPosition = joueurs[i].getPosition();
			//int playerPosition = game.getPlayerPosition(i);
			printPlayerOnCell(window, playerPieces[i], i + 1, playerPosition, nbPlayer);
			//playerPrevPos[i] = game.getPlayerPosition(i);
		}

		window.display();

		if (updateTour) {
			tourDuJoueur = ((tourDuJoueur) % (nbPlayer)) + 1;
			std::cout << tourDuJoueur << std::endl;
			updateTour = false; 
		}
	}

	return 0; 
}

void InGameState::jouerMusique() {
}

void InGameState::printPlayerOnCell(sf::RenderWindow& window, sf::RectangleShape shape, int numJoueur, int numCase, int nbPlayer) {

	int x, y = 0;

	if (numCase == 0) {
		y = 663;
		x = (int)(625 + 14 + (numJoueur - 1) * (50 / (nbPlayer - 1)));
	}
	else if (numCase >= 1 && numCase <= 9) {
		y = 670;
		x = (int)(118 + (9 - numCase) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbPlayer - 1)));
	}
	// TODO : gérer le cas ou on est en prison
	else if (numCase == 10) {
		y = 685;
		x = (int)(28 + 14 + (numJoueur - 1) * (50 / (nbPlayer - 1)));
	}
	if (numCase >= 11 && numCase <= 19) {
		y = (int)(107 + (19 - numCase) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbPlayer - 1)));
		x = 57;
	}
	else if (numCase == 20) {
		y = 57;
		x = (int)(28 + 14 + (numJoueur - 1) * (50 / (nbPlayer - 1)));
	}
	if (numCase >= 21 && numCase <= 29) {
		y = 50;
		x = (int)(118 + (numCase - 21) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbPlayer - 1)));
	}
	else if (numCase == 30) {
		y = 57;
		x = (int)(625 + 14 + (numJoueur - 1) * (50 / (nbPlayer - 1)));
	}
	if (numCase >= 31 && numCase <= 39) {
		y = (int)(107 + (numCase - 31) * 56.25 + 10 + (numJoueur - 1) * (25 / (nbPlayer - 1)));
		x = 677;
	}

	sf::Vector2f playerPos = window.mapPixelToCoords(sf::Vector2i(x, y));

	shape.setPosition(playerPos);
	window.draw(shape);
}
