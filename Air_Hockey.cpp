
#include<iostream>
#include "Air_Hockey.hpp"
// #include "puck.hpp"
#include <vector>
using namespace std;

// Unit pigeon;
// Unit bee={};
// Unit paddle1= {{28,71,34,130},{30,212,34,130}};
// Unit paddle2={{28,71,34,130},{970-34,212,34,130}};
// Unit puck={{72,72,119,101},{506-82,293-60,119,101}};
// Unit puck={{72,72,119,101},{506-82,293-60,70,50}};
Puck p;
AIPaddle ai;
PlayerPaddle p1;
AiScore ais;
Score ps;
int aiscores=0;
int scores=0;
void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets){

                    p.draw(gRenderer,assets);
                    p.Update();
                    ai.draw(gRenderer,assets);
                    ai.Update_paddle();
                    p1.draw(gRenderer,assets);
                    p1.Update_paddle();
                    ais.draw(gRenderer,assets);
                    ais.aiscore_set(aiscores);
                    ps.draw(gRenderer,assets);
                    ps.score_set(scores);
                    // SDL_RenderCopy(gRenderer, assets, &paddle1.srcRect, &paddle1.moverRect);
                    // SDL_RenderCopy(gRenderer, assets, &paddle2.srcRect, &paddle2.moverRect);
                    // SDL_RenderCopy(gRenderer, assets, &p.srcRect, &p.moverRect);   
        }
    
 

void createObject(int x, int y){
    Unit create_obj;
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;

}

