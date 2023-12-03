#pragma once
#include <iostream>
#include "paddle.hpp"
class PlayerPaddle : public Paddle{
    public:
    PlayerPaddle();
    void Update(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key);
    void LimitMovement();
    // bool update_collision();

    private:
    Paddle_struct pp;
};