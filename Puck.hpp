#pragma once
#include <iostream>
#include <cstdlib>
#include "Goal.hpp"
#include "Puck_struct.hpp"

class Puck : public Unit{
    public:
    Puck();
    void Update(); // collision handling
    void reset_puck(); // reset puck to original position
    void update_colliding_ai(); // check for collision with ai paddle
    void update_colliding_player(); // check for collision with player paddle
    void call_goal_p(SDL_Renderer* gRenderer, SDL_Texture* assets,int score); // draw player score
    void call_goal_ai(SDL_Renderer* gRenderer, SDL_Texture* assets,int score); // draw AI score
    int get_s_player(); // returns player score
    int get_ai_player(); // returns ai sore
    
    private:
    Puck_struct puck;
    
};

