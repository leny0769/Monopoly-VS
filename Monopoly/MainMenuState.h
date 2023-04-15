#ifndef MAINMENUSTATE_H
#define MAINMENUSTATE_H

#include "GameState.h"
#include <iostream> 

class MainMenuState : public GameState
{
	public :
        void afficherInterface() override;
        void jouerMusique() override;
};

#endif;