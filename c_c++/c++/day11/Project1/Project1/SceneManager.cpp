#include "SceneManager.h"
#include "Logo.h"
#include "Menu.h"
#include "Stage.h"

void SceneManager::LoadScene(SCENE_ID id)
{
	if (currentScene != nullptr)
	{
		currentScene->Release();
		delete currentScene;
		currentScene = nullptr;
	}

	switch (id)
	{
	case LOGO:
		currentScene = new Logo;
		break;
	case MENU:
		currentScene = new Menu;
		break;
	case STAGE:
		currentScene = new Stage;
		break;
	default:
		break;
	}

	currentScene->Initialize();
}

void SceneManager::Progress()
{
	currentScene->Progress();
}

void SceneManager::Render()
{
	currentScene->Render();
}

void SceneManager::Release()
{
	currentScene->Release();
}
