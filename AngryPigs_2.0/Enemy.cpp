#include "Enemy.h"

Enemy::Enemy(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor, const string size) :
	Character(id, name, isVisible, health, attackStrenght, level, mana, armor), Size(size)
{
}

Enemy::~Enemy()
{
}
