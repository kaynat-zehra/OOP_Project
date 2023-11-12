#include<iostream>
#include "Air_Hockey.hpp"
#include <vector>
using namespace std;

// Unit pigeon;
// Unit bee={};
Unit paddle1= {{28,71,34,130},{30,212,34,130}};
Unit paddle2={{28,71,34,130},{970-34,212,34,130}};
Unit puck={{72,72,119,101},{506-82,293-60,119,101}};


void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets){

    
                    SDL_RenderCopy(gRenderer, assets, &paddle1.srcRect, &paddle1.moverRect);
                    SDL_RenderCopy(gRenderer, assets, &paddle2.srcRect, &paddle2.moverRect);
                    SDL_RenderCopy(gRenderer, assets, &puck.srcRect, &puck.moverRect);


    
        }
    
    

void createObject(int x, int y){
    Unit create_obj;
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

