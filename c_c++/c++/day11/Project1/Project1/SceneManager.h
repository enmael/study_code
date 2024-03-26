#pragma once
#include "Scene.h"
class SceneManager
{
public:
	static SceneManager& Get()
	{
		static SceneManager instance;
		return instance;
	}
private:
	Scene* currentScene = nullptr;
public:
	void LoadScene(SCENE_ID id);
	void Progress();
	void Render();
	void Release();

};

