#include <string>
#include <cstdlib>
#include <ctime>
#include "De.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <random>

using namespace std;



De::De(int numDe) {
    this->diceTexture = new sf::Texture[6];
    this->diceTexture[0].loadFromFile(diceTextureImg[0]);
    this->diceTexture[1].loadFromFile(diceTextureImg[1]);
    this->diceTexture[2].loadFromFile(diceTextureImg[2]);
    this->diceTexture[3].loadFromFile(diceTextureImg[3]);
    this->diceTexture[4].loadFromFile(diceTextureImg[4]);
    this->diceTexture[5].loadFromFile(diceTextureImg[5]);

    this->dice = new sf::RectangleShape[6];
    for (int i = 0; i < 6; i++) {
        this->dice[i].setSize(sf::Vector2f(100.0f, 100.f));
        this->dice[i].setPosition(876.0f + (numDe * 150.0f), 50.0f);
        this->dice[i].setTexture(&diceTexture[i]);
        this->diceTexture[i].setSmooth(true);
    }
}

int De::getValeur() {
    return this->valeur;
}

void De::lancerDe() {
    // Création d'un générateur de nombres aléatoires
    std::random_device rd;
    std::mt19937 gen(rd());

    // Création d'une distribution uniforme pour les valeurs de 1 à 6
    std::uniform_int_distribution<> dis(1, 6);

    // Lancement du dé et stockage du résultat
    this->valeur = dis(gen);
}

void De::afficherResultat(sf::RenderWindow& window) {
    if (this->valeur >= 1 && this->valeur <= 6) {
        window.draw(this->dice[getValeur() - 1]);
    }
}
