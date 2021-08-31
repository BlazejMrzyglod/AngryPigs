#include "Character.h"
#include <iostream>
using namespace std;
Character::Character(string id, string name, bool isVisible, int health, int attackStrenght, int level, int mana, int armor):
	VisualGameObject(id, name, isVisible)
{
	Health = health;
	AttackStrenght = attackStrenght;
	Level = level;
	Mana = mana;
	Armor = armor;
	vector <Equipment*>* vec_ptr;
	vec_ptr = &armors;
	backpack.push_back(vec_ptr);
	vec_ptr = &weapons;
	backpack.push_back(vec_ptr);
	vec_ptr = &magicItems;
	backpack.push_back(vec_ptr);

}

Character::~Character()
{
}

int Character::Attack(Character& target)
{
	if(target.Armor>0)
		return target.Armor -= this->AttackStrenght;
	else
		return target.Health -= this->AttackStrenght;
}


int Character::Cast(Character& target)
{
	if (target.Armor > 0)
	{
		if (this->Mana >= 10)
		{
			this->Mana -= 10;
			return target.Armor -= (20);
		}
		else
		{
			cout << "Za malo many!";
			return target.Armor;
		}
	}

	else
	{
		if (this->Mana >= 10)
		{
			this->Mana -= 10;
			return target.Armor -= (20);
		}
		else
		{
			cout << "Za malo many!";
			return target.Armor;
		}
	}
}

int Character::LevelUp()
{
	Health += 10;
	AttackStrenght += 5;
	Mana += 10;
	Armor += 5;
	return Level += 1;
}

int Character::SetHealth(int health)
{
	Health = health;
	return Health ;
}

int Character::SetAttackStrenght(int attStrenght)
{
	AttackStrenght = attStrenght;
	return AttackStrenght;
}

int Character::SetLevel(int level)
{
	Level = level;
	return Level;
}

int Character::SetMana(int mana)
{
	Mana = mana;
	return Mana;
}

int Character::SetArmor(int armor)
{
	Armor = armor;
	return Armor;
}

int Character::TakeDmg(int dmg)
{
	if (this->Armor > 0)
		return Armor -= dmg;
	else
		return Health -= dmg;
}

int Character::ChangeArmor(int armor)
{
	return Armor += armor;
}

int Character::ChangeAttackStrenght(int attack)
{
	return AttackStrenght += attack;
}

int Character::ChangeMana(int mana)
{
	return Mana+=mana;
}

void Character::AddWeapon( Weapon& weapon)
{
	Weapon* ptr;
	ptr = &weapon;
	weapons.push_back(ptr);
	AttackStrenght += (weapon.GetStrenght()*weapon.GetDurability());
}

void Character::AddArmor(Equipment& armor)
{
	Equipment* ptr;
	ptr = &armor;
	weapons.push_back(ptr);
	Armor += (armor.GetStrenght() * armor.GetDurability());
}

void Character::AddMagicItem(Magic& magic)
{
	Magic* ptr;
	ptr = &magic;
	weapons.push_back(ptr);
	Mana += (magic.GetStrenght() * magic.GetDurability());
}

int Character::GetHealth() const
{
	return Health;
}

int Character::GetAttackStrenght() const
{
	return AttackStrenght;
}

int Character::GetLevel() const
{
	return Level;
}

int Character::GetMana() const
{
	return Mana;
}

int Character::GetArmor() const
{
	return Armor;
}

vector<Equipment*> Character::GetArmors() const
{
	return armors;
}

vector<Equipment*> Character::GetWeapons() const
{
	return weapons;
}

vector<Equipment*> Character::GetMagicItems() const
{
	return magicItems;
}

vector<vector<Equipment*>*> Character::GetBackpack() const
{
	return backpack;
}

