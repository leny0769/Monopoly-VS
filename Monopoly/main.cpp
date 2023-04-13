#include <SFML/Graphics.hpp>
//#include "JeuMonopoly.h"
//#include "Joueur.h"
#include <iostream> 

int main()
{
	// Fenêtre
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Monopoly by Antoine PERRIN-DELORT & Lény METZGER", sf::Style::Close | sf::Style::Titlebar);

	// Ajout de l'icone
	sf::Image favicon;
	favicon.loadFromFile("Assets/icone_monopoly.png");
	window.setIcon(256, 256, favicon.getPixelsPtr());

	// Monopoly Font
	sf::Font monopolyFont;
	monopolyFont.loadFromFile("Fonts/KabelBdNormal.ttf");

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
					if (sixCardBound.contains(mousePos)) totalPlayers = 3;
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

	std::cout << totalPlayers << std::endl;


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
	const char* playerPieceFileName[1] = {
		"Assets/Pion.png"
	};

	int nbPlayer = 1;

	sf::Texture* playerTextures = new sf::Texture[nbPlayer];
	sf::RectangleShape* playerPieces = new sf::RectangleShape[nbPlayer];

	for (int i = 0; i < nbPlayer; i++) {
		playerTextures[i].loadFromFile(playerPieceFileName[i]);
		playerPieces[i].setTexture(&playerTextures[i]);
		playerPieces[i].setSize(sf::Vector2f(20.0f, 20.0f));
		playerPieces[i].setPosition(sf::Vector2f(628.0f, 648.0f));
		playerTextures[i].setSmooth(true);
	}

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
			window.draw(playerPieces[i]);
		}

		window.display();
	}


	/*JeuMonopoly Partie;
	while (Partie.isOngoing()) {
		Joueur j = Partie.getJoueur();
		Partie.jouerTour(j);
		Partie.getNextJoueur();
	}
	Joueur gagnant = Partie.getWinner();*/

	return 0;
}