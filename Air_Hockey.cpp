
#include<iostream>
#include "Air_Hockey.hpp"
#include <vector>
using namespace std;

// Unit paddle1= {{28,71,34,130},{30,212,34,130}};
// Unit paddle2={{28,71,34,130},{970-34,212,34,130}};
// Unit puck={{72,72,119,101},{506-82,293-60,119,101}};
// Unit puck={{72,72,119,101},{506-82,293-60,70,50}};

void AirHockey::drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Texture* assets2){

            p.draw(gRenderer,assets);
            p.Update();
            ai.draw(gRenderer,assets);
            ai.Update();
            player.draw(gRenderer,assets);
            p.call_goal_p(gRenderer,assets2, p.get_ai_player());
            p.call_goal_ai(gRenderer,assets2, p.get_s_player());
    }


char AirHockey::win_or_lose(){
    char z='\0';
    Unit create_obj;
    std::cout<<p.get_ai_player()<<'\n';
    std::cout<<p.get_s_player()<<'\n';

    if (p.get_ai_player()==3){ // checks if ai score equals to 3
        return 'a';
    }
    else if (p.get_s_player()==3){ // checks if player score equals to 3
        return 'p';
    }
    return z;

}   

void AirHockey::createObject(int x, int y){
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
    }
 void AirHockey::move( SDL_Renderer* gRenderer, SDL_Texture* assets, SDL_Keycode key){
    player.Update( gRenderer, assets,  key);
 }

 void AirHockey::is_collision(){
    
    if (p.moverRect.x +p.moverRect.w  >= player.moverRect.x && 
    (player.moverRect.y + player.moverRect.h/2 >= p.moverRect.y &&
    p.moverRect.y>=player.moverRect.y-player.moverRect.h/2))
    {
        std::cout<<"a\n";
        p.update_colliding_player();
        std::cout<<"b\n";


    }
    if (p.moverRect.x <= ai.moverRect.x  && 
        (ai.moverRect.y + ai.moverRect.h >= p.moverRect.y &&
    p.moverRect.y>=ai.moverRect.y)){
        std::cout<<"c\n";
        p.update_colliding_ai();
        std::cout<<"d\n";

    }
 }
