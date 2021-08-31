#pragma once
#include "Enemy.h"
class BigPig :
    public Enemy
{
public:
    BigPig(string id = "", string name = "", bool isVisible = true, int health = 40, int attackStrenght = 20, int level = 1, int mana = 0, int armor = 20);
    virtual BigPig& operator=(const BigPig& pig);
    virtual ~BigPig();
};

