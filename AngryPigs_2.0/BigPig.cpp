#include "BigPig.h"

BigPig::BigPig(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor) :
	Enemy(id, name, isVisible, health, attackStrenght, level, mana, armor, "big")
{
}

BigPig& BigPig::operator=(const BigPig& pig)
{
	this->~BigPig();
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

BigPig::~BigPig()
{
}
