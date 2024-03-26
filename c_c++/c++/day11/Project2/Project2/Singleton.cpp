#include "GameManager.h"
#include "SoundManager.h"

int main()
{
	GameManager::Instance()->level = 12;
	SoundManager::Instance()->volume = 1.1;


	return 0;
}
