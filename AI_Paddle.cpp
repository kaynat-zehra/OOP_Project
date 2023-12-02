#include <iostream>
#include <cstdlib>
// #include "paddle.hpp"
#include "AI_Paddle.hpp"

AIPaddle::AIPaddle(){
    srcRect = {ai_paddle.x_coordinate, ai_paddle.y_coordinate, ai_paddle.paddle_w, ai_paddle.paddle_h};
    moverRect = {30,212,34,130};
    // moverRect = {30,50,34,130};

}

void AIPaddle::Update_aipaddle(){
    // moverRect.x += 0;
    int speed[2] = {50, -50};
    int r = rand() %2;
    // std::cout << r << std::endl;
    static int AIvelocity = speed[r];
    moverRect.y += AIvelocity;

    if (moverRect.y + moverRect.h >599){
            AIvelocity = -AIvelocity;
            moverRect.y -= 50;

    } 
    if (moverRect.y + moverRect.h/5 <0){
            AIvelocity = -AIvelocity;
            moverRect.y += 50;

    }
    
    

    // moverRect.y = moverRect.h/2;
}

