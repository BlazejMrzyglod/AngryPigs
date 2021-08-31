#include "Friendly.h"

Friendly::Friendly(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor, const string color):
	Character(id, name, isVisible, health, attackStrenght, level, mana, armor), Color(color)
{
}

Friendly::~Friendly()
{
}
