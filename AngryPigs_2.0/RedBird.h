#pragma once
#include "Friendly.h"
#include "Level.h"


class RedBird :
    public Friendly
{
public:
    RedBird(string id = "", string name = "", bool isVisible = true, int health = 50, int attackStrenght = 10, int level = 1, int mana = 100, int armor = 0);
    virtual ~RedBird();
};

