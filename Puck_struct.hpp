#include <iostream>

struct Puck_struct{
    int get_coordinates(){
        return (x_coordinate,y_coordinate);
    }
    int get_radius(){
        return radius;
    }
    private:
    int x_coordinate;
    int y_coordinate;
    int radius{36};
};