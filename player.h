#pragma once
#include "entity.h"
#include "alive.h"
#include "amovable.h"
#include "iattacker.h"

class Player : public Entity, public Alive, public AMovable, public IAttacker {
public:
    Player(float x, float y, float maxHealth, float dirX, float dirY, float speed);

    virtual void ApplyDamage(float damage) override;
    virtual void Move() override;
    virtual void Attack(Alive* target) override;
};
