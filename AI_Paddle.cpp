#include <iostream>
// #include "paddle.hpp"
#include "AI_Paddle.hpp"

AIPaddle::AIPaddle(){
    srcRect = {ai_paddle.x_coordinate, ai_paddle.y_coordinate, ai_paddle.paddle_w, ai_paddle.paddle_h};
    moverRect = {30,212,34,130};
}

void AIPaddle::Update_paddle(){
    moverRect.x += 0;
    moverRect.y += 100;

    moverRect.y = moverRect.h/2;
}

