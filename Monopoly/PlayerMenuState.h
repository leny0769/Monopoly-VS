#ifndef PLAYERMENUSTATE_H
#define PLAYERMENUSTATE_H

#include "GameState.h"
#include <iostream> 
#include <SFML/Graphics.hpp>

class PlayerMenuState : public GameState
{
    public:
        int afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) override;
        void jouerMusique() override;
};

#endif;
