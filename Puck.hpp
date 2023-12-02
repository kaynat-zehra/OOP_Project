#pragma once
#include <iostream>
#include "Puck_struct.hpp"

class Puck : public Unit{
    public:
    Puck();
    void Update();
    // void set_coordinates(int x,int y);
    void reset_puck();
    void set_velocity(double v);
    void update_colliding_ai();
    void update_colliding_player();

    private:
    Puck_struct puck;
    
    // static int puckVelocityX;
    // static int puckVelocityY;
};