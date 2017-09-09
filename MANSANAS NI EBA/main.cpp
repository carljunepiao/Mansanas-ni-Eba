/*
    |||This code is originally made by Charlito G. Piao Jr.|||

    Copyright 2014

    Finished at: December 15, 2014
*/

#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Audio.hpp>
#include <math.h>

using namespace std;

#include "Player.hpp"
#include "Blocks.hpp"
#include "Constructor_Player.hpp"
#include "Game.hpp"
#include "Constructor_Game.hpp"
#include "Initialize.hpp"
#include "Declare.hpp"
#include "Game_Screen.hpp"
#include "Game_Run.hpp"
#include "Draw_Obstacles.hpp"
#include "Handle_User.hpp"
#include "Handle_Keys.hpp"
#include "Position_Player.hpp"
#include "Display_RowSprites.hpp"
#include "Sprites_Animation.hpp"

int main(){

    Game game;
    game.run();
}
