#pragma once
#include "Magic.h"
class Robe :
    public Magic
{
public:
    Robe(string id = "", string name = "", bool isVisible = true, int durability = 10, int power = 2);
    virtual ~Robe();
};

