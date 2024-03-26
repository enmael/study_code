#include "Menu.h"
#include "SceneManager.h"

void Menu::Initialize()
{
}

void Menu::Progress()
{
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Get().LoadScene(STAGE);
	}
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{
}
