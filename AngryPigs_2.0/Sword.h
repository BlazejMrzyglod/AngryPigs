#pragma once
#include "Weapon.h"
class Sword :
    public Weapon
{
public:
    Sword(string id = "", string name = "", bool isVisible = true, int durability = 10, int hitStrenght = 1);
    virtual ~Sword();
};

