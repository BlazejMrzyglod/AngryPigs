#pragma once
#include "Equipment.h"
class Armor :
    public Equipment
{

public:
    Armor(string id = "", string name = "", bool isVisible = true, int durability = 10, int strenght = 1);
    virtual ~Armor();
};


