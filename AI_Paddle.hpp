#include <iostream>
#include "paddle.hpp"

class AIPaddle : public Paddle{
    public:
    void Update(int ball_y){//parameter is the y coordinate of the ball
        if (y + height / 2 > ball_y) {
            y = y - speed;
        }
        if (y + height / 2 <= ball_y) {
            y = y + speed;
        }
        LimitMovement();
    }
};