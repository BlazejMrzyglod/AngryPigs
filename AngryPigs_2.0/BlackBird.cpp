#include "BlackBird.h"

BlackBird::BlackBird(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor) :
	Friendly(id, name, isVisible, health, attackStrenght, level, mana, armor, "black")
{
}

BlackBird::~BlackBird()
{
}

