#pragma once
#include "Friendly.h"
class YellowBird :
    public Friendly
{
public:
    YellowBird(string id = "", string name = "", bool isVisible = true, int health = 20, int attackStrenght = 50, int level = 1, int mana = 10, int armor = 0);
    virtual ~YellowBird();
};

