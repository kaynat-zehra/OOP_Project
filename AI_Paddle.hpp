#pragma once
#include <iostream>
#include "paddle.hpp"
// #include "Paddle_struct.hpp"

class AIPaddle : public Paddle{
    public:
    AIPaddle();
    void Update();
    Paddle_struct ai_paddle;
    // bool is_collision();
    
    // void Update(int ball_y){//parameter is the y coordinate of the ball
    //     if (y + height / 2 > ball_y) {
    //         y = y - speed;
    //     }
    //     if (y + height / 2 <= ball_y) {
    //         y = y + speed;
    //     }
    //     LimitMovement();
    // }
};