#include <iostream>
#include "score.hpp"

Score::Score(){
    srcRect={211,76,31,58};
    moverRect={250,s.y_coordinate,s.w,s.h};
}
void Score::score_set(int scores){
    switch (scores){
        case 0:
        srcRect={211,76,31,58};
        break;
        case 1:
        srcRect={21,15,6,50};
        break;
        case 2:
        srcRect={60,13,29,45};
        break;
        case 3:
        srcRect={};
        break;
        case 4:
        srcRect={};
        break;
        case 5:
        srcRect={};
        break;
        case 6:
        srcRect={};
        break;
        case 7:
        srcRect={};
        break;
        case 8:
        srcRect={};
        break;
        case 9:
        srcRect={};
        break;
        case 10:
        srcRect={};
        break;
        default:
        break;


    }
}