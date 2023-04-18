#include "Game.h"
//#include <SFML/Graphics.hpp>
#include "MainMenuState.h"

void Game::setState(GameState* state) {
    delete currentState_;
    currentState_ = state;
}

int Game::afficherInterface(sf::RenderWindow& window, sf::Font monopolyFont, int nbPlayer) {
    return currentState_->afficherInterface(window, monopolyFont, nbPlayer);
}

void Game::jouerMusique() {
    currentState_->jouerMusique();
}