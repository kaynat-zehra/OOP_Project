#pragma once
#include <iostream>
#include "paddle.hpp"
class PlayerPaddle : public Paddle{
    public:
    PlayerPaddle(); // constructor
    void Update(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key); //handles collision and movement for paddle
    void LimitMovement(); // helper function

    private:
    Paddle_struct pp;
};