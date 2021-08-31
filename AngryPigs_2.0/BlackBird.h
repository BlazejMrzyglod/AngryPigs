#pragma once
#include "Friendly.h"
#include "GameEngine.h"
class BlackBird :
    public Friendly
{
public:
    BlackBird(string id = "", string name = "", bool isVisible = true, int health = 100, int attackStrenght = 10, int level = 1, int mana = 10, int armor = 100);
    virtual ~BlackBird();
};

