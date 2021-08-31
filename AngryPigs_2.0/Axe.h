#pragma once
#include "Weapon.h"
class Axe :
    public Weapon
{
public:
    Axe(string id = "", string name = "", bool isVisible = true, int durability = 10, int hitStrenght = 1);
    virtual ~Axe();

};

