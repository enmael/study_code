#include "SceneManager.h"

int main()
{
	SceneManager::Get().LoadScene(LOGO);

	while (true)
	{
		system("cls");
		SceneManager::Get().Progress();
		SceneManager::Get().Render();
		Sleep(50);
	}

	SceneManager::Get().Release();

	return 0;
}