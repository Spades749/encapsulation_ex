#include <iostream>
#include "entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y) {}

Vector2 Entity::GetPosition() {
    return position;
}

void Entity::SetPosition(Vector2 _p) {
    position.SetVector2(_p.GetX(), _p.GetY());
}
