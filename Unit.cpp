#include <iostream>

#include "unit.hpp"

Unit:: Unit() {};

//fully implemented draw function
void Unit::draw(SDL_Renderer* gRenderer, SDL_Texture* assets)
{
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

