#pragma once
#include <iostream>

using namespace std;

class GameManager
{
private:
	static GameManager* instnace;
public:
	static GameManager* GetInstance()
	{
		if (instnace == nullptr)
		{
			instnace = new GameManager;
		}

		return instnace;
	}
public:
	void HelloWorld()
	{
		cout << "Hello world" << endl;
	}
};