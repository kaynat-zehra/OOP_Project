#include <iostream>
#include <chrono>
#include <thread>
#include <unistd.h>
#include "Puck.hpp"
#include "score.hpp"

score s_ai;
score s_player;

// objects of type goal for player score
Goal one(21, 15, 10, 50);
Goal two(60, 13, 29, 45);
Goal three(108, 12, 34, 46);
Goal four(162, 12, 29, 49);
Goal five(203, 11, 32, 53);
Goal six(12, 85, 32, 53);
Goal seven(60, 82, 35, 52);
Goal eight(115, 81, 32, 50);
Goal nine(164, 79, 29, 53);
Goal zero(211, 76, 31, 58);

// objects of type goal for ai-score
Goal one2(21, 15, 10, 50);
Goal two2(60, 13, 29, 45);
Goal three2(108, 12, 34, 46);
Goal four2(162, 12, 29, 49);
Goal five2(203, 11, 32, 53);
Goal six2(12, 85, 32, 53);
Goal seven2(60, 82, 35, 52);
Goal eight2(115, 81, 32, 50);
Goal nine2(164, 79, 29, 53);
Goal zero2(211, 76, 31, 58);


Puck::Puck(){ // constructor
    srcRect = {puck.x_coordinate, puck.y_coordinate, puck.puck_w, puck.puck_h};
    moverRect = {500-50+2,300-40+2,119,101};
}
int Puck::get_s_player(){
    return s_player.get_score();

}
int Puck::get_ai_player(){
    return s_ai.get_score();
}
    static int puckVelocityX = 20*3;
    static int puckVelocityY = 0;//10*2;

void Puck::reset_puck(){
    // resets the puck and initializes velocity in a random direction
    moverRect = {500-80+2,300-60+2,119,101};
    int arr[2] = {20*3,-20*3};
    int arr2[2] = {10*3,-10*3};
    int random = rand()%2;
    int random1 = rand()%2;
    puckVelocityX = arr[random];
    puckVelocityY = arr2[random1];
}

void Puck::Update()
{
    // Add velocity variables for the puck's movement
    moverRect.x += puckVelocityX;
    moverRect.y += puckVelocityY;

    // Add collision detection with screen boundaries
    if (moverRect.x + moverRect.w > 999) //collision with right hand side wall
    {
        if (moverRect.y >=220 && moverRect.y + moverRect.h<=380){
        std::cout<<"score\n";
            moverRect.x += 200; 
                    reset_puck();
        s_player.increment_score();
        std::cout << "ai score: "<< s_player.get_score() << "\n";
        }
        else 
            {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x-=15*3;
        std::cout << "It works\n"; 
        }

    }

    if (moverRect.y + moverRect.h > 599) // collision with bottom wall
    {
        // Reverse the Y velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
                moverRect.y -= 15*3;
    }
    if (moverRect.x < 0) //colllision with left hand side wall
    {
        if (moverRect.y <=220 || moverRect.y + moverRect.h>=380){
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x+=15*3;
        std::cout << "It works\n"; 
        }
        else 
            {
        std::cout<<"score\n";
            moverRect.x -= 200;
            reset_puck();
            s_ai.increment_score();
            std::cout << "player score: "<< s_ai.get_score() << "\n";
            }

    }
    if (moverRect.y  + moverRect.h <60) // collision with top wall
    {
        // Reverse the X velocity to make the puck bounce back
        puckVelocityY = -puckVelocityY;
        moverRect.y+=25*3;

    }
}

void Puck::update_colliding_player(){
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x-=15*3;

    }
void Puck::update_colliding_ai(){
        // Reverse the X velocity to make the puck bounce back
        puckVelocityX = -puckVelocityX;
        moverRect.x+=15*3;

    }
void Puck::call_goal_p(SDL_Renderer* gRenderer, SDL_Texture* assets,int score){
    // checks the player score and draws it on the game screen
    if (score==0){
        zero.draw(gRenderer, assets);
    }
    else if (score==1){
        one.draw(gRenderer, assets);
    }
    else if (score==2){
        two.draw(gRenderer, assets);
    }
    else if (score==3){
        three.draw(gRenderer, assets);
    }
    else if (score==4){
        four.draw(gRenderer, assets);
    }
    else if (score==5){
        five.draw(gRenderer, assets);
    }
    else if (score==6){
        six.draw(gRenderer, assets);
    }
    else if (score==7){
        seven.draw(gRenderer, assets);
    }
    else if (score==8){
        eight.draw(gRenderer, assets);
    }
    else if (score==9){
        nine.draw(gRenderer, assets);
    }
    else if (score==10){
        one.draw(gRenderer, assets);
        zero.set_moverRect(570,55);
        zero.draw(gRenderer,assets);
    }
}

void Puck::call_goal_ai(SDL_Renderer* gRenderer, SDL_Texture* assets,int score){
    // checks the ai score and draws it on the screen
    if (score==0){
        zero2.set_moverRect(425,55);
        zero2.draw(gRenderer, assets);
    }
    else if (score==1){
        one2.set_moverRect(425,55);
        one2.draw(gRenderer, assets);
    }
    else if (score==2){
        two2.set_moverRect(425,55);
        two2.draw(gRenderer, assets);
    }
    else if (score==3){
        three2.set_moverRect(425,55);
        three2.draw(gRenderer, assets);
    }
    else if (score==4){
        four2.set_moverRect(425,55);
        four2.draw(gRenderer, assets);
    }
    else if (score==5){
        five2.set_moverRect(425,55);
        five2.draw(gRenderer, assets);
    }
    else if (score==6){
        six2.set_moverRect(425,55);
        six2.draw(gRenderer, assets);
    }
    else if (score==7){
        seven2.set_moverRect(425,55);
        seven2.draw(gRenderer, assets);
    }
    else if (score==8){
        eight2.set_moverRect(425,55);
        eight2.draw(gRenderer, assets);
    }
    else if (score==9){
        nine2.set_moverRect(425,55);
        nine2.draw(gRenderer, assets);
    }
    else if (score==10){
        one2.set_moverRect(400,55);
        one2.draw(gRenderer, assets);
        zero2.draw(gRenderer,assets);
    }
}
