#include <iostream>
#include "Puck_struct.hpp"

class Puck{
    public:
    void set_coordinates(int x,int y);
    void reset_puck();
    void set_velocity(double v);
    bool is_colliding();
    private:
    Puck_struct puck;
    double velocity;
};