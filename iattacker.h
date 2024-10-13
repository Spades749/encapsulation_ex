#pragma once
#include "alive.h"

class IAttacker {
public:
    virtual void Attack(Alive* target) = 0;
};
