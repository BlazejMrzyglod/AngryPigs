#pragma once
#include "Equipment.h"
class Weapon :
    public Equipment
{

public:
    Weapon(string id = "", string name = "", bool isVisible = true, int durability = 10, int hitStrenght = 1);
    virtual ~Weapon();
};

