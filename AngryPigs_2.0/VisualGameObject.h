#pragma once
#include "GameObject.h"
class VisualGameObject :
    public GameObject
{
protected:
    bool IsVisible;
public:
    VisualGameObject(string id = "", string name = "", bool isVisible = true);
    virtual ~VisualGameObject() = 0;
    virtual string ToString() const;

};

