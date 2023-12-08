#pragma once
#include <iostream>
#include "SDL.h"

class Unit
{
    public:
    int frame;
    SDL_Rect srcRect, moverRect;
    static SDL_Renderer* gRenderer;
    static SDL_Texture* assets;

    Unit(); //constructor
    virtual void Update(){
        std::cout << "This is unit update\n";
    }; // implemented in Puck, paddle
    void draw(SDL_Renderer* gRenderer, SDL_Texture* assets); // function for drawing images on the screen
    
};