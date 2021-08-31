#pragma once
#include "Equipment.h"
class Magic :
    public Equipment
{

public:
    Magic(string id = "", string name = "", bool isVisible = true, int durability = 10, int power = 1);
    virtual ~Magic();
};


