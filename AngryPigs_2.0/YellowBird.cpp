#include "YellowBird.h"

YellowBird::YellowBird(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor) :
	Friendly(id, name, isVisible, health, attackStrenght, level, mana, armor, "yellow")
{
}

YellowBird::~YellowBird()
{
}

