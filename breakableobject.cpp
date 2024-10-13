#include <iostream>
#include "breakableobject.h"

BreakableObject::BreakableObject(float x, float y, float maxHealth) : Entity(x, y), Alive(maxHealth, maxHealth) {
    std::cout << "Breakable Object just created at x = " << x
              << " and y = " << y
              << " with " << maxHealth << " life" << std::endl;
}

void BreakableObject::ApplyDamage(float damage) {
    Alive::ApplyDamage(damage);
    if (GetCurrentHealth() <= 0) {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}
