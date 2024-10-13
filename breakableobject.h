#pragma once
#include "entity.h"
#include "alive.h"

class BreakableObject : public Entity, public Alive {
public:
    BreakableObject(float x, float y, float maxHealth);

    virtual void ApplyDamage(float damage) override;
};
