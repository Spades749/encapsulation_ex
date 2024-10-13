#pragma once
#include "vector2.h"

class AMovable {
private:
    Vector2 direction;
    float speed;
public:
    AMovable(float, float, float);

    virtual void SetDir(Vector2);
    virtual void SetSpeed(float _spd);
    virtual void Move() = 0;
};
