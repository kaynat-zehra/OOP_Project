#include <iostream>
#include <cstdlib>
// #include "paddle.hpp"
#include "AI_Paddle.hpp"

AIPaddle::AIPaddle(){ // setting the coordinates
    srcRect = {ai_paddle.x_coordinate, ai_paddle.y_coordinate, ai_paddle.paddle_w, ai_paddle.paddle_h};
    moverRect = {30,212,34,130};

}

void AIPaddle::Update(){ 
    int speed[2] = {50, -50};
    int r = rand() %2; // the paddle startes in a random direction
    static int AIvelocity = speed[r];
    moverRect.y += AIvelocity;

    if (moverRect.y + moverRect.h >599){ // collision with bottom wall
            AIvelocity = -AIvelocity;
            moverRect.y -= 50;

    } 
    if (moverRect.y + moverRect.h/5 <0){ // collision with top wall
            AIvelocity = -AIvelocity;
            moverRect.y += 50;

    }
}

