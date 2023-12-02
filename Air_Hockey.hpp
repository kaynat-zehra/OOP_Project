#pragma once
#include<SDL.h>
#include "Puck.hpp"
#include "AI_Paddle.hpp"
#include "player_paddle.hpp"
#include "score.hpp"
#include "aiscore.hpp"



void drawObjects(SDL_Renderer* gRnderer, SDL_Texture* assets);
void createObject(int x, int y);
void move(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key);
void is_collision();				
// void updatePuckPosition();

// struct Unit{
// SDL_Rect srcRect, moverRect;
// };


// struct Puck_struct{
//     int x_coordinate;
//     int y_coordinate;
//     int radius{36};
//     Puck_struct():x_coordinate(506-82),y_coordinate(293-60){};
// };

// class Puck{
//     public:
//     Puck(){};
//     void Update(){
//     puck.x_coordinate+=velocity_x;
//     puck.y_coordinate+=velocity_y;
//     if (puck.y_coordinate>=599 || puck.y_coordinate<=0){
//         velocity_y*=-1;
//     }
//     // SDL_RenderCopy (gRender, assets, )
//     // return *this;
//     }
//     int get_x_coordinate(){
//         return puck.x_coordinate;
//     }
//     int get_y_coordinate(){
//         return puck.y_coordinate;
//     }
//     void set_coordinates(int x,int y);
//     void reset_puck();
//     void set_velocity(double v);
//     bool is_colliding();
//     Puck_struct puck;
//     double velocity_x;
//     double velocity_y;
// };