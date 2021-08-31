#pragma once
#include "Armor.h"
class Shield :
    public Armor
{
public:
    Shield(string id = "", string name = "", bool isVisible = true, int durability = 10, int strenght = 1);
    virtual ~Shield();
};

