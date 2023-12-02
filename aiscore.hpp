#pragma once
#include <iostream>
#include "score_struct.hpp"
#include "Unit.hpp"

class AiScore:public Unit{
    public:
    AiScore();
    void aiscore_set(int scores);
    private:
    score_struct as;
};