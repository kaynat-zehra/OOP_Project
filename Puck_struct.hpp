#include <iostream>

struct Puck_struct{
    double get_coordinates(){
        return (x_coordinate,y_coordinate);
    }
    double get_radius(){
        return radius;
    }
    private:
    double x_coordinate;
    double y_coordinate;
    double radius;
};