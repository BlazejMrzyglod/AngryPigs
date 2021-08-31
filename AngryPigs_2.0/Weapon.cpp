#include "Weapon.h"

Weapon::Weapon(string id, string name, bool isVisible, int durability, int hitStrenght) :
	Equipment(id, name, isVisible, durability, hitStrenght)
{
	
}

Weapon::~Weapon()
{
}
