#include<iostream>
#include "HUMania.hpp"
#include <vector>
using namespace std;

// Unit pigeon;
// Unit bee={};
Unit pigeon = {{7,48,155,143},{30,40,50,50}};
// First rectangle is srcRect, second is moverRect
// these values are taken from the corresponding image in assets file
// use spritecow.com to find exact values of other asset images
Unit bee={{540,370,193,115},{30,40,50,50}};
Unit butterfly={{257, 24, 173, 134},{30,40,50,50}};
vector <Unit> pigeons;
// vector<Unit> pigeons={{{7,48,155,143},pigeon.moverRect},{{0,233,153,124},pigeon.moverRect},{{2,361,159,164},pigeon.moverRect},};
// vector<Unit> bees={{{527,128,194,115}},{{527,255,194,115}},{{540,370,193,115}}};
vector<Unit> bees;
vector<Unit> butterflies;
//create 2 more vectors for bees and butterflies
// vector<Unit> bees={};

void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* assets){

    // this functios is drawing one pigeon only right now
    // for (int i=0;i<3;i++){
        
    //     if (pigeons[i].moverRect.x<=999){
    //         if (i==0){
    //             pigeons[i].srcRect={7,48,155,143};
    //         }
    //         else if (i==1){
    //             pigeons[i].srcRect={0,233,153,124};
    //         }
    //         else if (i==2){
    //             pigeons[i].srcRect={2,361,159,164};

    //         }
        
    //     SDL_RenderCopy(gRenderer, assets, &pigeons[i].srcRect, &pigeons[i].moverRect);}
    //     else if (pigeons[i].moverRect.x>999){
    //         pigeons[i].moverRect.x=0;
    //     }

    // }
    // SDL_RenderCopy(gRenderer, assets, &bee.srcRect, &bee.moverRect);
        // pigeon=pigeons[-1];
        // pigeons.pop_back();
        
        // 
        static int count=0;
            
            {for (int i=0;i<pigeons.size();i++)
                if (pigeons[i].moverRect.x<=999){
                {pigeons[i].moverRect.x+=10;
                if (count%3==0){
                    pigeons[i].srcRect={7,48,155,143};
                    count++;
                }
                else if (count%3==1){
                    pigeons[i].srcRect={0,233,153,124};
                    count++;
                }
                else if (count%3==2){
                pigeons[i].srcRect={2,361,159,164};
                count++;
                }
               
            SDL_RenderCopy(gRenderer, assets, &pigeons[i].srcRect, &pigeons[i].moverRect);
        }}
        else if (pigeons[i].moverRect.x>=999){
            pigeons[i].moverRect.x=0;
        }
        }
        

        static int count2=0;
            
            {for (int i=0;i<bees.size();i++)
                if (bees[i].moverRect.x<=999){
                {bees[i].moverRect.x+=10;
                if (count2%3==0){
                    bees[i].srcRect={527,128,194,115};
                    count2++;
                }
                else if (count2%3==1){
                    bees[i].srcRect={527,255,194,115};
                    count2++;
                }
                else if (count2%3==2){
                bees[i].srcRect={540,370,193,115};
                count2++;
                }
               
            SDL_RenderCopy(gRenderer, assets, &bees[i].srcRect, &bees[i].moverRect);
        }}
        else if (bees[i].moverRect.x>=999){
            bees[i].moverRect.x=0;
        }
        }

        static int count3=0;
            
            {for (int i=0;i<butterflies.size();i++)
                if (butterflies[i].moverRect.x<=999){
                {butterflies[i].moverRect.x+=10;
                if (count3%3==0){
                    butterflies[i].srcRect={257, 24, 173, 134};
                    count3++;
                }
                else if (count3%3==1){
                    butterflies[i].srcRect={257, 182, 192, 214};
                    count3++;
                }
                else if (count3%3==2){
                butterflies[i].srcRect={248, 432, 248, 179};
                count3++;
                }
               
            SDL_RenderCopy(gRenderer, assets, &butterflies[i].srcRect, &butterflies[i].moverRect);
        }}
        else if (butterflies[i].moverRect.x>=999){
            butterflies[i].moverRect.x=0;
        }
        }}
    
    // TODO: Write code to iterate over all the vectors and draw objects here: 
    
    // moves the pigeon two pixel towards right
    // changing the srcRect to other positions of pigeon will make the fly animation
    // SDL_RenderPresent is already called in game.cpp file, you don't need to call here


void createObject(int x, int y){
    Unit move_obj;
    int r = rand()%3;
    if(r==0){
        // Unit pigeon1;
        // pigeon.moverRect=move_obj.moverRect;
        pigeons.push_back({{7,48,155,143}});
        pigeons.push_back({{0,233,153,124}});
        pigeons.push_back({{2,361,159,164}});
        move_obj.moverRect={x,y,50,50};
        pigeons.push_back(move_obj);
    }
    else if(r==1){
        // Unit pigeon1;
        // pigeon.moverRect=move_obj.moverRect;
        bees.push_back({{527,128,194,115}});
        bees.push_back({{527,255,194,115}});
        bees.push_back({{540,370,193,115}});
        move_obj.moverRect={x,y,50,50};
        bees.push_back(move_obj);
    }
    else if (r==2){
        butterflies.push_back({257, 24, 173, 134});
        butterflies.push_back({257, 182, 192, 214});
        butterflies.push_back({248, 432, 248, 179});
        move_obj.moverRect={x,y,50,50};
        butterflies.push_back(move_obj);
    }
   
    // TODO: create an object randomly, and push it into corresponding vector
    
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}

