#include <iostream>
#include "amovable.h"

AMovable::AMovable(float _dirx, float _diry, float _spd) : direction(_dirx, _diry), speed(_spd){}

void AMovable::SetDir(Vector2 _dir) {
    direction.SetVector2(_dir.GetX(), _dir.GetY());
}

void AMovable::SetSpeed(float _spd) {
    speed = _spd;
}

void AMovable::Move() {
    float newX = direction.GetX() * speed;
    float newY = direction.GetY() * speed;
    std::cout << "Moving to new position : x = " << newX << ", y = " << newY << std::endl;
}
