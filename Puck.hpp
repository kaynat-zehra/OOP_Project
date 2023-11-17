#include <iostream>
#include "Puck_struct.hpp"

class Puck{
    public:
    void set_coordinates(int x,int y);
    private:
    Puck_struct puck;
    double velocity;
};