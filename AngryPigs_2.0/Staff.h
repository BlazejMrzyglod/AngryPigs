#pragma once
#include "Magic.h"
class Staff :
    public Magic
{
public:
    Staff(string id = "", string name = "", bool isVisible = true, int durability = 10, int power = 1);
    virtual ~Staff();
};

