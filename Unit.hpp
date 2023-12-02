#include <iostream>
#include "SDL.h"
// #include "drawing.hpp"
#pragma once
// class Drawing{
//     public:
//         //The window renderer
//     static SDL_Renderer* gRenderer;
//     //global reference to png image sheets
//     static SDL_Texture* assets;
// };
class Unit
{
    public:
    int frame;
    SDL_Rect srcRect, moverRect;
    static SDL_Renderer* gRenderer;
    static SDL_Texture* assets;

    public:
    Unit(); //constructor
    void draw(SDL_Renderer* gRenderer, SDL_Texture* assets); 
    
};