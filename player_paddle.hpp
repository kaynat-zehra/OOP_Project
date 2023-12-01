#pragma once
#include <iostream>
#include "paddle.hpp"
class PlayerPaddle : public Paddle{
    public:
    PlayerPaddle();
    void Update_paddle();
    void LimitMovement();
    private:
    Paddle_struct pp;
};