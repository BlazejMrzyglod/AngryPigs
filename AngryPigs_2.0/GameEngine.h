#pragma once
#include "InConsoleDisplayEngine.h"
#include "Friendly.h"
#include "Enemy.h"
#include "Weapon.h" 
#include "Level.h"
#include "RedBird.h"
#include "YellowBird.h"
#include "BlackBird.h"
#include <vector>
#include <cstdlib>
#include <ctime>
class GameEngine
{
protected:
	IDisplayGameEngine* displayEngine;

	vector <Friendly*> friendlies;
	vector <Level> levels;

	bool GameOver;
	bool LevelOver;
	int currentLevel;

public:
	GameEngine();
	virtual void RunGame();
	virtual vector <Friendly*> GetFriendlies();
};

