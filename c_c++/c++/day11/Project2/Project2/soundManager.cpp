#pragma once
#include "Singleton.h"
class GameManager : public Singleton<GameManager>
{
public:
	int level;
};
