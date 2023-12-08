#pragma once
#include<SDL.h>
#include "Puck.hpp"
#include "AI_Paddle.hpp"
#include "player_paddle.hpp"
#include "score.hpp"

class AirHockey{
public:
char win_or_lose(); // returns the result of the game
void drawObjects(SDL_Renderer* gRnderer, SDL_Texture* assets,SDL_Texture* assets2);
void createObject(int x, int y);
void move(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key);
void is_collision(); // updating puck position and velocity on basis of a score. 

protected:
Puck p; 
AIPaddle ai;
PlayerPaddle player;

};

