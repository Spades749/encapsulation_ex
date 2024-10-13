#pragma once
#include "vector2.h"

class Entity {
private:
    Vector2 position;
public:
    Entity(float, float);

    virtual Vector2 GetPosition();
    virtual void SetPosition(Vector2);
};
