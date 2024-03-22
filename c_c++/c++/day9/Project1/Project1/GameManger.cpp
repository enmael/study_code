#pragma once

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
};
