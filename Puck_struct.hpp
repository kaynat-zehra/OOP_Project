#include <iostream>

struct Puck_struct{
    int x_coordinate;
    int y_coordinate;
    int radius{36};
    Puck_struct():x_coordinate(506-82),y_coordinate(293-60){};
};