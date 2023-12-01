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
    bool is_colliding();
    private:
    Puck_struct puck;
    
    double velocity_x;
    double velocity_y;
};