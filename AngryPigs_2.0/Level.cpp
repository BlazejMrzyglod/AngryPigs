#include "Level.h"

Level::Level(string id, string name, bool isVisible, int number, int smallPigs, int mediumPigs, int bigPigs) :
	VisualGameObject(id, name, isVisible)
{
	Number = number;
	NrOfSmallPigs=smallPigs;
	NrOfMediumPigs = mediumPigs;
	NrOfBigPigs = bigPigs;

	for (int i = 0; i < NrOfSmallPigs; i++)
	{
		small.push_back(SmallPig());
	}

	for (int i = 0; i < NrOfMediumPigs; i++)
	{
		medium.push_back(MediumPig());
	}

	for (int i = 0; i < NrOfBigPigs; i++)
	{
		big.push_back(BigPig());
	}
}

Level::~Level()
{
}

void Level::dmgAllSmallPigs(int dmg)
{
	vector < SmallPig >::iterator it_small = small.begin();
	for (; it_small != small.end(); it_small++)
		it_small->TakeDmg(dmg);

}

void Level::dmgAllMediumPigs(int dmg)
{


	vector < MediumPig >::iterator it_medium = medium.begin();
	for (; it_medium != medium.end(); it_medium++)
		it_medium->TakeDmg(dmg);

}

void Level::dmgAllBigPigs(int dmg)
{
	vector < BigPig >::iterator it_big = big.begin();
	for (; it_big != big.end(); it_big++)
		it_big->TakeDmg(dmg);
}

vector<SmallPig>& Level::GetSmall()
{
	
	return small;
}

vector<MediumPig>& Level::GetMedium()
{
	;
	return medium;
}

vector<BigPig>& Level::GetBig() 
{
	
	return big;
}

int Level::GetNrOFSmallPigs() const
{
	return NrOfSmallPigs;
}

int Level::GetNrOFMediumPigs() const
{
	return NrOfMediumPigs;
}

int Level::GetNrOFBigPigs() const
{
	return NrOfBigPigs;
}

void Level::EraseSmall()
{
	small.erase(small.begin());
}

void Level::EraseMedium()
{
	medium.erase(medium.begin());
}

void Level::EraseBig()
{
	big.erase(big.begin());
}

int Level::GetSmallHealth()
{
	return small.begin()->GetHealth();
}

int Level::GetMediumHealth()
{
	return medium.begin()->GetHealth();;
}

int Level::GetBigHealth()
{
	return big.begin()->GetHealth();;
}

