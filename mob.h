#pragma once
#include "entity.h"
#include "alive.h"
#include "amovable.h"

class Mob : public Entity, public Alive, public AMovable {
public:
    Mob(float x, float y, float maxHealth, float dirX, float dirY, float speed);

    virtual void ApplyDamage(float damage) override;
    virtual void Move() override;
};
