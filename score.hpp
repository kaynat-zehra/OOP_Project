#pragma once
#include <iostream>
#include "score_struct.hpp"
#include "Unit.hpp"

class Score:public Unit{
    public:
    Score();
    void score_set(int scores);
    private:
    score_struct s;
};