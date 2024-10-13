#include <iostream>
#include "player.h"

Player::Player(float x, float y, float maxHealth, float dirX, float dirY, float speed) : Entity(x, y), Alive(maxHealth, maxHealth), AMovable(dirX, dirY, speed) {
    std::cout << "Player just created at x = " << x
              << " and y = " << y
              << " with " << maxHealth << " life"
              << " with direction x = " << dirX
              << " and y = " << dirY << std::endl;

    SetSpeed(speed);
}

void Player::ApplyDamage(float damage) {
    Alive::ApplyDamage(damage);
    if (GetCurrentHealth() <= 0) {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::Move() {
    Vector2 currentPosition = GetPosition();

    Vector2 newDir(1.0f, 0.0f);
    float newSpeed = 1.5f;

    SetDir(newDir);
    SetSpeed(newSpeed);

    float newX = currentPosition.GetX() + newDir.GetX() * newSpeed;
    float newY = currentPosition.GetY() + newDir.GetY() * newSpeed;

    SetPosition(Vector2(newX, newY));

    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

void Player::Attack(Alive* target) {
    if (target != nullptr) {
        target->ApplyDamage(10);
        std::cout << "Player just attacked." << std::endl;
    }
}
