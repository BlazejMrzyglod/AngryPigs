#include "GameObject.h"

GameObject::GameObject(string id, string name)
{
    Id = id;
    Name = name;
}

GameObject::~GameObject()
{
}

string GameObject::ToString() const
{
    return Id + " " + Name;
}
