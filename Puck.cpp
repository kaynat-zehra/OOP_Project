// #include <iostream>
#include "Puck.hpp"

// void Puck::Update(){
//     puck.x_coordinate+=velocity_x;
//     puck.y_coordinate+=velocity_y;
//     if (puck.y_coordinate>=599 || puck.y_coordinate<=0){
//         velocity_y*=-1;
//     }
//     // SDL_RenderCopy(gRenderer, assets, &puck.srcRect, &puck.moverRect);

// }
// void Puck::set_coordinates(int x,int y){
//     puck.x_coordinate=x;
//     puck.y_coordinate=y;
// }

// void Puck::set_velocity(double v){
//     velocity_x=v;
//     velocity_y=v;
// }
Puck::Puck(){
    srcRect = {puck.x_coordinate, puck.y_coordinate, puck.puck_w, puck.puck_h};
    moverRect = {500-50+2,300-40+2,70,50};
}

void Puck::Update()
{
    
 

    // Add velocity variables for the puck's movement
    static int puckVelocityX = 200;
    static int puckVelocityY = 100;

    // Update puck position based on velocity
    moverRect.x += puckVelocityX;
    moverRect.y += puckVelocityY;

    // Add collision detection with screen boundaries
    if (moverRect.x + moverRect.w > 999)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x-=150;
        // moverRect.y -= 130;

    }

    if (moverRect.y + moverRect.h > 599)
    {
        // Reverse the Y velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
                moverRect.y -= 150;
    }
    if (moverRect.x + moverRect.w < 0)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x+=150;
        // moverRect.y -= 130;

    }
    if (moverRect.y  + moverRect.h <0)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
        moverRect.y+=250;
        // puck.moverRect.y -= 130;

    }



}
