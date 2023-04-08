#include <SFML/Graphics.hpp>
//#include "JeuMonopoly.h"
//#include "Joueur.h"

int main()
{
    // Fenêtre
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Monopoly");

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