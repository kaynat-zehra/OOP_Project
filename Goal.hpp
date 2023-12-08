#include <iostream>
#include "Unit.hpp"
class Goal : public Unit{
    int width=0;
    int height=0;
    public:

    Goal(){}; // constructor
    Goal(int x, int y, int w, int h):width(w),height(h){ // setting coordinates
        srcRect = {x,y,w,h};
        moverRect = {550, 55, w, h};
    }
    void Update(){};
    void set_moverRect(int x, int y){ // sets moverRect coordinates
        moverRect={x,y,width,height};
    }
};
