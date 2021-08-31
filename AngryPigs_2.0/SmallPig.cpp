#include "SmallPig.h"

SmallPig::SmallPig(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor) :
	Enemy(id, name, isVisible, health, attackStrenght, level, mana, armor, "small")
{
}

SmallPig& SmallPig::operator=(const SmallPig& pig)
{
	this->~SmallPig();
	Id = pig.Id;
	Name = pig.Name;
	IsVisible = pig.IsVisible;
	Health = pig.Health;
	AttackStrenght = pig.AttackStrenght;
	Level = pig.Level;
	Mana = pig.Mana;
	Armor = pig.Armor;
	return *this;
}

SmallPig::~SmallPig()
{
}
