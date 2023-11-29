#include <iostream>

class Paddle{
    protected:
    float x, y;
    float width, height;
    int speed;
    void LimitMovement() {
        if (y <= 0) {
            y = 0;
        }
        if (y + height >= 600) {
            y = 600 - height;
        }
    }
    public:
    void Update() {
        if (IsKeyDown(KEY_UP)) {
            y = y - speed;
        }
        if (IsKeyDown(KEY_DOWN)) {
            y = y + speed;
        }
        LimitMovement();
    }
};