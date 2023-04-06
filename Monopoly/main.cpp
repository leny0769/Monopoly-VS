#include <SFML/Graphics.hpp>
#include "JeuMonopoly.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Monopoly");

    sf::Texture gameScreenTexture;
    gameScreenTexture.loadFromFile("Assets/Monopoly.png");
    sf::RectangleShape gameScreen(sf::Vector2f(1280.0f, 720.0f));
    gameScreen.setTexture(&gameScreenTexture);

    gameScreenTexture.setSmooth(true);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(gameScreen);
        window.display();
    }

    return 0;
}