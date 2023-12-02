#pragma once
#include<SDL.h>
#include "Puck.hpp"
#include "AI_Paddle.hpp"
#include "player_paddle.hpp"
#include "score.hpp"



void drawObjects(SDL_Renderer* gRnderer, SDL_Texture* assets,SDL_Texture* assets2);
void createObject(int x, int y);
void move(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key);
void is_collision();
// void call_goal_p(SDL_Renderer* gRenderer, SDL_Texture* assets, int score);	
// void call_goal_ai(SDL_Renderer* gRenderer, SDL_Texture* assets, int score);	

// Goal one(21, 15, 10, 50), two(60, 13, 29, 45), three(108, 12, 34, 46), four(162, 12, 29, 49),
// five(203, 11, 32, 53), six(12, 85, 32, 53), seven(60, 82, 35, 52), eight(115, 81, 32, 50),
// nine(164, 79, 29, 53), zero(211, 76, 31, 58);

