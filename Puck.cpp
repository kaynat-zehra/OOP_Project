#include <iostream>
#include "Puck.hpp"

void Puck::set_coordinates(int x,int y){
    puck.x_coordinate=x;
    puck.y_coordinate=y;
}

void Puck::set_velocity(double v){
    velocity=v;
}