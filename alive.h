#pragma once
#include <iostream>

class Alive {
private:
    float max_health;
    float current_health;
public:
    Alive(float, float);

    virtual float GetMaxHealth();
    virtual float GetCurrentHealth();
    virtual void ApplyDamage(float damage);
};
