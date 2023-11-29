#include<iostream>
#include "Air_Hockey.hpp"
// #include "puck.cpp"
#include <vector>
using namespace std;

// Unit pigeon;
// Unit bee={};
Unit paddle1= {{28,71,34,130},{30,212,34,130}};
Unit paddle2={{28,71,34,130},{970-34,212,34,130}};
// Unit puck={{72,72,119,101},{506-82,293-60,119,101}};
Unit puck={{72,72,119,101},{506-82,293-60,70,50}};


void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets){

    
                    SDL_RenderCopy(gRenderer, assets, &paddle1.srcRect, &paddle1.moverRect);
                    SDL_RenderCopy(gRenderer, assets, &paddle2.srcRect, &paddle2.moverRect);
                    SDL_RenderCopy(gRenderer, assets, &puck.srcRect, &puck.moverRect);

                

    
        }
    
void updatePuckPosition()
{
    // Implement your game logic for puck movement here
    // For example, you can move the puck in a straight line or
    // add logic to handle collisions, etc.

    // Update puck position based on velocity or other factors
    // puck.moverRect.x += 80; // Adjust the movement speed as needed
    // puck.moverRect.y += 80; // Adjust the movement speed as needed

    // // Add collision detection or other game logic here

    // // Example: If the puck goes off the screen, reset its position
    // if (puck.moverRect.x >= 999 && puck.moverRect.y<599)
    // {
    //     // puck.moverRect.x = puck.moverRect.w / 2;
    //     puck.moverRect.x-=160;
    //     puck.moverRect.y -= 130;
    // } 
    // else if (puck.moverRect.y >= 599 && puck.moverRect.y<999)
    // {
    //     // puck.moverRect.x = puck.moverRect.w / 2;
    //     puck.moverRect.y-=250;
    //     puck.moverRect.x += 140;
    // }
    // else{

    // }
 

    // Add velocity variables for the puck's movement
    static int puckVelocityX = 200;
    static int puckVelocityY = 100;

    // Update puck position based on velocity
    puck.moverRect.x += puckVelocityX;
    puck.moverRect.y += puckVelocityY;

    // Add collision detection with screen boundaries
    if (puck.moverRect.x + puck.moverRect.w > 999)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        puck.moverRect.x-=150;
        // puck.moverRect.y -= 130;

    }

    if (puck.moverRect.y + puck.moverRect.h > 599)
    {
        // Reverse the Y velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
                puck.moverRect.y -= 150;
    }
    if (puck.moverRect.x + puck.moverRect.w < 0)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        puck.moverRect.x+=150;
        // puck.moverRect.y -= 130;

    }
    if (puck.moverRect.y  + puck.moverRect.h <0)
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
        puck.moverRect.y+=250;
        // puck.moverRect.y -= 130;

    }



}
 

void createObject(int x, int y){
    Unit create_obj;
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

