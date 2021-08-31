#pragma once
#include "Character.h"
class Friendly :
    public Character
{
protected:
    const string Color;
public:
    Friendly(string id = "", string name = "", bool isVisible = true, int health = 10, int attackStrenght = 1, int level = 1, int mana = 1, int armor = 0, const string color = "red");
    virtual ~Friendly() = 0;
};

