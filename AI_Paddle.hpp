#pragma once
#include <iostream>
#include "paddle.hpp"
// #include "Paddle_struct.hpp"

class AIPaddle : public Paddle{
    public:
    AIPaddle(); //constructor
    void Update(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key); // updates the position of ai paddle
    Paddle_struct ai_paddle;
};