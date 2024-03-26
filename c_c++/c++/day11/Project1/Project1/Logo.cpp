#include "Logo.h"
#include "SceneManager.h"

void Logo::Initialize()
{
}

void Logo::Progress()
{
	if (GetAsyncKeyState(VK_RETURN))
	{
		SceneManager::Get().LoadScene(MENU);
	}

}

void Logo::Render()
{
	cout << "Logo" << endl;
}

void Logo::Release()
{
}
