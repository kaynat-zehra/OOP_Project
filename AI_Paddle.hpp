#pragma once
#include <iostream>
#include "paddle.hpp"
// #include "Paddle_struct.hpp"

class AIPaddle : public Paddle{
    public:
    AIPaddle(); //constructor
    void Update(); // updates the position of ai paddle
    Paddle_struct ai_paddle;
};