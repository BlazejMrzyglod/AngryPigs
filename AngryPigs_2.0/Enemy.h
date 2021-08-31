#pragma once
#include "Character.h"
class Enemy :
    public Character
{
protected:
    const string Size;
public:
    Enemy(string id = "", string name = "", bool isVisible = true, int health = 10, int attackStrenght = 1, int level = 1, int mana = 1, int armor = 0, const string size = "small");
    virtual ~Enemy() = 0;
};

