#ifndef DE_H
#define DE_H

#include <SFML/Graphics.hpp>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


class De {
    public:
        De();
        De(int numDe);
        int getValeur();
        void lancerDe();
        void afficherResultat(sf::RenderWindow& window);

    private:
        int valeur;
        const char* diceTextureImg[6] =
        {
            "Assets/Face1.png",
            "Assets/Face2.png",
            "Assets/Face3.png",
            "Assets/Face4.png",
            "Assets/Face5.png",
            "Assets/Face6.png"
        };
        sf::Texture* diceTexture;
        sf::RectangleShape* dice;
};

#endif;