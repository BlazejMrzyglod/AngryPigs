#pragma once
#include "VisualGameObject.h"
class Equipment :
    public VisualGameObject
{
protected:
    int Durability;
    int Strenght;
public:
    Equipment(string id = "", string name = "", bool isVisible = true, int durability = 10, int strenght=1);
    virtual ~Equipment();
    virtual int ChangeDurability(int change);
    virtual int GetDurability();
    virtual int GetStrenght();

};

