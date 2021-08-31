#pragma once
#include <string> 
using namespace std;
class GameObject
{
protected:
	string Id, Name;
public:
	GameObject(string id = "", string name = "");
	virtual ~GameObject() = 0;
	virtual string ToString() const;
	friend class GameEngine;
};

