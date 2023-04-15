#ifndef PLAYERMENUSTATE_H
#define PLAYERMENUSTATE_H

#include "GameState.h"
#include <iostream> 

class PlayerMenuState : public GameState
{
public:
    void afficherInterface() override;
    void jouerMusique() override;
};

#endif;
