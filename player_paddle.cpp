#include <iostream>
#include "player_paddle.hpp"
#include <SDL.h>

PlayerPaddle::PlayerPaddle(){
    srcRect = {pp.x_coordinate, pp.y_coordinate, pp.paddle_w, pp.paddle_h};
    moverRect = {970-34,212,34,130};
}
void PlayerPaddle::LimitMovement() {
    if (moverRect.y <= 0) {
            moverRect.y = 0+moverRect.h;
        }
        if (moverRect.y + moverRect.h >= 600) {
            moverRect.y = 600 - moverRect.h;
        }
    }
void PlayerPaddle::Update_paddle(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key){
    // if (SDL_KEYDOWN){
        if (key==SDLK_UP){
            moverRect.y-=80;
    LimitMovement();

        }
        else if (key==SDLK_DOWN){
            moverRect.y+=80;
    LimitMovement();
        }
}

