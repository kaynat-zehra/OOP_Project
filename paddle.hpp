#pragma once
#include <iostream>
#include "Paddle_struct.hpp"

class Paddle: public Unit{
    public: 
    Paddle(){}; // constructor
    virtual void Update(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key) =0;
};