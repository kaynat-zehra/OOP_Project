#pragma once
#include <iostream>
#include <cstdlib>
#include "Goal.hpp"
#include "Puck_struct.hpp"

class Puck : public Unit{
    public:
    Puck();
    void Update();
    // void set_coordinates(int x,int y);
    void reset_puck();
    void set_velocity(double v);
    void update_colliding_ai();
    void update_colliding_player();
    void score();
    void call_goal_p(SDL_Renderer* gRenderer, SDL_Texture* assets,int score);
    void call_goal_ai(SDL_Renderer* gRenderer, SDL_Texture* assets,int score);
    int get_s_player();
    int get_ai_player();
    private:
    Puck_struct puck;
    
    // static int puckVelocityX;
    // static int puckVelocityY;
};

