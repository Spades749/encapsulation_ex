#include <iostream>
#include "staticobject.h"
#include "breakableobject.h"
#include "mob.h"
#include "player.h"

int main() {
    StaticObject staticObj(5.0f, 10.0f);
    BreakableObject breakableObj(3.0f, 7.0f, 70.0f);
    Mob mob(1.0f, 2.0f, 20.0f, 1.0f, 0.0f, 1.5f);
    Player player(0.0f, 0.0f, 10.0f, 0.0f, 1.0f, 2.0f);

    std::cout << "\n--- Testing Mob movement ---" << std::endl;
    mob.Move();

    std::cout << "\n--- Testing Player movement ---" << std::endl;
    player.Move();

    std::cout << "\n--- Player attacking Mob ---" << std::endl;
    player.Attack(&mob);

    std::cout << "\n--- Player attacking BreakableObject ---" << std::endl;
    player.Attack(&breakableObj);

    std::cout << "\n--- Mob receiving damage ---" << std::endl;
    mob.ApplyDamage(30.0f);

    std::cout << "\n--- BreakableObject receiving damage ---" << std::endl;
    breakableObj.ApplyDamage(60.0f);

    return 0;
}
