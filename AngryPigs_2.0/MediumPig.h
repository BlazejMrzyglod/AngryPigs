#pragma once
#include "Enemy.h"
class MediumPig :
    public Enemy
{
public:
    MediumPig(string id = "", string name = "", bool isVisible = true, int health = 20, int attackStrenght = 10, int level = 1, int mana = 0, int armor = 10);
    virtual MediumPig& operator=(const MediumPig& pig);
    virtual ~MediumPig();
};

