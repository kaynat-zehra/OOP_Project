#include <iostream>
#include "Unit.hpp"
class Goal : public Unit{
    int width=0;
    int height=0;
    public:

    Goal(){};
    Goal(int x, int y, int w, int h):width(w),height(h){
        srcRect = {x,y,w,h};
        moverRect = {550, 55, w, h};
    }
    void set_moverRect(int x, int y){
        moverRect={x,y,width,height};
    }
    // void Goal_ai(int x, int y, int w, int h){
    //     srcRect = {x,y,w,h};
    //     moverRect = {425, 55, w, h};
    // }

};
// class Goal2 : public Unit{
//     public:
//     Goal2(){};
//     Goal2(int x, int y, int w, int h){
//         srcRect = {x,y,w,h};
//         moverRect = {425, 55, w, h};
//     }
//     // void Goal_ai(int x, int y, int w, int h){
//     //     srcRect = {x,y,w,h};
//     //     moverRect = {425, 55, w, h};
//     // }
// };

