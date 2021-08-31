#pragma once
#include "Weapon.h"
class Knife :
    public Weapon
{
public:
    Knife(string id = "", string name = "", bool isVisible = true, int durability = 10, int hitStrenght = 1);
    virtual ~Knife();
};

