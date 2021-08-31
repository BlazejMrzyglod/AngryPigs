#include "VisualGameObject.h"

VisualGameObject::VisualGameObject(string id, string name, bool isVisible):
	GameObject(id, name)
{
	IsVisible = isVisible;
}

VisualGameObject::~VisualGameObject()
{
}

string VisualGameObject::ToString() const
{
	return GameObject::ToString() + " " + (IsVisible ? "true" : "false");
}
