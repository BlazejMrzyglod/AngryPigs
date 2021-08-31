#include "Equipment.h"

Equipment::Equipment(string id, string name, bool isVisible, int durability, int strenght):
		VisualGameObject(id, name, isVisible)
{
	Durability = durability;
	Strenght = strenght;
}

Equipment::~Equipment()
{
}

int Equipment::ChangeDurability(int change)
{
	return Durability += change;
}

int Equipment::GetDurability()
{
	return Durability;
}

int Equipment::GetStrenght()
{
	return Strenght;
}
