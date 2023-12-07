#pragma once
#include <iostream>
#include "Paddle_struct.hpp"

class Paddle: public Unit{
    public: 
    Paddle(){}; // constructor
    virtual void Update_paddle(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key) {};
};