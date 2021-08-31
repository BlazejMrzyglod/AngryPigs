#pragma once
#include "Enemy.h"
class SmallPig :
    public Enemy
{
public:
    SmallPig(string id = "", string name = "", bool isVisible = true, int health = 10, int attackStrenght = 5, int level = 1, int mana = 0, int armor = 0);
    virtual SmallPig& operator=(const SmallPig& pig);
    virtual ~SmallPig();
};

