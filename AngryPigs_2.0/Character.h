#pragma once
#include "Shield.h"
#include "ArmorSet.h"
#include "Sword.h"
#include "Axe.h"
#include "Knife.h"
#include "Robe.h"
#include "Staff.h"
#include <vector>

class Character :
    public VisualGameObject
{
protected:
    int Health, AttackStrenght, Level, Mana, Armor;


    vector <Equipment*> armors;
    vector <Equipment*> weapons;
    vector <Equipment*> magicItems;
   

    vector <vector <Equipment*>*> backpack;
public:
    Character(string id = "", string name = "", bool isVisible = true, int health = 10, int attackStrenght = 1, int level = 1, int mana = 1, int armor = 0);
    virtual ~Character() = 0;
    virtual int Attack(Character& target);
    virtual int Cast(Character& target);
    virtual int LevelUp();
    virtual int SetHealth(int health);
    virtual int SetAttackStrenght(int attStrenght);
    virtual int SetLevel(int level);
    virtual int SetMana(int mana);
    virtual int SetArmor(int armor);
    virtual int TakeDmg(int dmg);
    virtual int ChangeArmor(int armor);
    virtual int ChangeAttackStrenght(int attack);
    virtual int ChangeMana(int mana);
    virtual void AddWeapon(Weapon& weapon);
    virtual void AddArmor(Equipment& armor);
    virtual void AddMagicItem(Magic& magic);
    virtual int GetHealth() const;
    virtual int GetAttackStrenght() const;
    virtual int GetLevel() const;
    virtual int GetMana() const;
    virtual int GetArmor() const;
    virtual vector<Equipment*> GetArmors() const;
    virtual vector<Equipment*> GetWeapons() const;
    virtual vector<Equipment*> GetMagicItems() const;
    virtual vector <vector<Equipment*>*> GetBackpack() const;
};

