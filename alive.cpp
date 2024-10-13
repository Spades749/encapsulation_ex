#include "alive.h"

Alive::Alive(float _maxhealth, float _currenthealth) : max_health(_maxhealth), current_health(_currenthealth) {}

float Alive::GetMaxHealth() {
    return max_health;
}

float Alive::GetCurrentHealth() {
    return current_health;
}

void Alive::ApplyDamage(float damage) {
    current_health -= damage;
    if (current_health <= 0) {
        std::cout << "Alive object just died." << std::endl;
    } else {
        std::cout << "Received damage : " << damage << ", remaining health : " << current_health << std::endl;
    }
}
