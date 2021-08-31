#pragma once
#include "Level.h"
#include "Friendly.h"
#include <stdlib.h>
#include <iostream>

using namespace std;
__interface IDisplayGameEngine {
	virtual int DisplayMap(int current);
	virtual void DisplayLevel(Level level, vector <Friendly*> friendlies);
};
class InConsoleDisplayEngine: public IDisplayGameEngine
{
public:
	virtual int DisplayMap(int current);
	virtual void DisplayLevel(Level level, vector <Friendly*> friendlies);
};

