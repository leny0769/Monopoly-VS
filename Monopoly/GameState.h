#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <SFML/Graphics.hpp>

class GameState
{
	public : 
		virtual int afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) = 0;
		virtual void jouerMusique() = 0;
};

#endif;