#include <iostream>
#include "mob.h"

Mob::Mob(float x, float y, float maxHealth, float dirX, float dirY, float speed) : Entity(x, y), Alive(maxHealth, maxHealth), AMovable(dirX, dirY, speed) {
    std::cout << "Mob just created at x = " << x
              << " and y = " << y
              << " with " << maxHealth << " life"
              << " with direction x = " << dirX
              << " and y = " << dirY << std::endl;

    SetSpeed(speed);
}

void Mob::ApplyDamage(float damage) {
    Alive::ApplyDamage(damage);
    if (GetCurrentHealth() <= 0) {
        std::cout << "Mob just died" << std::endl;
    }
}

void Mob::Move() {
    Vector2 currentPosition = GetPosition();
    Vector2 currentDir = Vector2(1.0f, 0.0f);
    float currentSpeed = 1.5f;

    SetDir(currentDir);

    float newX = currentPosition.GetX() + currentDir.GetX() * currentSpeed;
    float newY = currentPosition.GetY() + currentDir.GetY() * currentSpeed;

    SetPosition(Vector2(newX, newY));

    std::cout << "Mob moved to x = " << newX << " and y = " << newY << std::endl;
}
