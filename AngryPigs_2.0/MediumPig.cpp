#include "MediumPig.h"

MediumPig::MediumPig(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor) :
	Enemy(id, name, isVisible, health, attackStrenght, level, mana, armor, "medium")
{
}

MediumPig& MediumPig::operator=(const MediumPig& pig)
{
	this->~MediumPig();
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

MediumPig::~MediumPig()
{
}
