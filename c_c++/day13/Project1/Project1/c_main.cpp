//13일차 강의 내용
// ui 이 한번 만들어보기
// 충돌했을때 사라지는것
/*
#include <stdio.h>
#include <Windows.h>

//커서이동 시켜주는 애
void MovePos(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

enum SCENE_ID
{
	LOGO,
	MENU,
	STAGE,

};

struct Obj
{
	int x;
	int y;
	const char* shape;

};

SCENE_ID sceneID;

int menuIndex = 0;
Obj arrow;
Obj startText;
Obj optionText;
Obj exitText;

void Logo();
void Menu();
void Stage();


void GamePlay()
{
	switch (sceneID)
	{
	case LOGO:
		Logo();
		break;
	case MENU:
		Menu();
		break;
	case STAGE:
		Stage();
		break;
	default:
		break;
	}
}

//###################################################
int main()
{
	sceneID = LOGO;

	arrow.x = 7;
	arrow.y = 10;
	arrow.shape = "▶";

	startText.x = 10;
	startText.y = 10;
	startText.shape = "START";

	optionText.x = 10;
	optionText.y = 12;
	optionText.shape = "OPTION";

	exitText.x = 10;
	exitText.y = 14;
	exitText.shape = "EXIT";


	while (true)
	{
		system("cls");
		GamePlay();
		Sleep(50);
	}


	return 0;
}
//###################################################

void Logo()
{
	MovePos(10, 10);
	printf("LOGO");

	if (GetAsyncKeyState(VK_RETURN))
	{
		sceneID = MENU;
	}
}

void Menu()
{
	if (GetAsyncKeyState(VK_UP) && arrow.y > startText.y)
	{
		arrow.y -= 2;
		menuIndex--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		arrow.y += 2;
		if (arrow.y > exitText.y)
		{
			arrow.y = exitText.y;
		}
		else
		{
			menuIndex++;
		}
	}

	if (GetAsyncKeyState(VK_SPACE))
	{
		switch (menuIndex)
		{
		case 0:
			sceneID = STAGE;
			break;
		case 2:
			exit(true);
			break;
		default:
			break;
		}
	}

	MovePos(arrow.x, arrow.y);
	printf(arrow.shape);

	MovePos(startText.x, startText.y);
	printf(startText.shape);

	MovePos(optionText.x, optionText.y);
	printf(optionText.shape);

	MovePos(exitText.x, exitText.y);
	printf(exitText.shape);

	MovePos(20, 20);
	printf("MenuIndex : %d", menuIndex);

}

void Stage()
{
	MovePos(10, 10);
	printf("STAGE");
}
*/
/*
#include <stdio.h>
#include <Windows.h>

//커서이동 시켜주는 애
void MovePos(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

struct Obj
{
	int x;
	int y;
	const char* shape;
};

Obj* player = nullptr;

void Init();
void Play();


int main()
{
	Init();

	while (true)
	{
		system("cls");
		Play();
		Sleep(50);
	}

	return 0;
}

void Init()
{
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->shape = "옷";
}

void Play()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		player->x--;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		player->x++;
	}

	if (GetAsyncKeyState(VK_UP))
	{
		player->y--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		player->y++;
	}

	MovePos(player->x, player->y);
	printf(player->shape);
}
*/
/*
#include <stdio.h>
#include <Windows.h>

//커서이동 시켜주는 애
void MovePos(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#define BULLET_COUNT 10

struct Obj
{
	bool act;
	int x;
	int y;
	const char* shape;
};

Obj* player = nullptr;
Obj* bullets[BULLET_COUNT];

void Init();
void Play();


int main()
{
	Init();

	while (true)
	{
		system("cls");
		Play();
		Sleep(50);
	}

	return 0;
}

void Init()
{
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->shape = "옷";

	for (int i = 0; i < BULLET_COUNT; i++)
	{
		bullets[i] = (Obj*)malloc(sizeof(Obj));
		bullets[i]->act = false;
		bullets[i]->x = i;
		bullets[i]->y = 0;
		bullets[i]->shape = "▶";
	}
}

void Play()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		player->x--;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		player->x++;
	}

	if (GetAsyncKeyState(VK_UP))
	{
		player->y--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		player->y++;
	}

	if (GetAsyncKeyState(VK_SPACE))
	{
		for (int i = 0; i < BULLET_COUNT; i++)
		{
			if (bullets[i]->act == false)
			{
				bullets[i]->act = true;
				bullets[i]->x = player->x;
				bullets[i]->y = player->y;
				break;
			}

		}

	}

	MovePos(player->x, player->y);
	printf(player->shape);

	for (int i = 0; i < BULLET_COUNT; i++)
	{
		MovePos(bullets[i]->x, bullets[i]->y);
		printf(bullets[i]->shape);
	}
}
*/


#include <stdio.h>
#include <Windows.h>

//커서이동 시켜주는 애
void MovePos(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#define BULLET_COUNT 10
#define ENEMY_COUNT 10

struct Obj
{
	bool act;
	int x;
	int y;
	const char* shape;
};

Obj* player = nullptr;
Obj* bullets[BULLET_COUNT];
Obj* enemies[ENEMY_COUNT];

void Init();
void Play();


int main()
{
	Init();

	while (true)
	{
		system("cls");
		Play();
		Sleep(50);
	}

	return 0;
}

void Init()
{
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->shape = "옷";

	for (int i = 0; i < BULLET_COUNT; i++)
	{
		bullets[i] = (Obj*)malloc(sizeof(Obj));
		bullets[i]->act = false;
		bullets[i]->x = i;
		bullets[i]->y = 0;
		bullets[i]->shape = "▶";
	}

	for (int i = 0; i < ENEMY_COUNT; i++)
	{
		enemies[i] = (Obj*)malloc(sizeof(Obj));
		enemies[i]->act = false;
		enemies[i]->x = 0;
		enemies[i]->y = 0;
		enemies[i]->shape = "봇";
	}
}

void Play()
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		player->x--;
	}

	if (GetAsyncKeyState(VK_RIGHT))
	{
		player->x++;
	}

	if (GetAsyncKeyState(VK_UP))
	{
		player->y--;
	}

	if (GetAsyncKeyState(VK_DOWN))
	{
		player->y++;
	}

	if (GetAsyncKeyState(VK_SPACE))
	{
		for (int i = 0; i < BULLET_COUNT; i++)
		{
			if (bullets[i]->act == false)
			{
				bullets[i]->act = true;
				bullets[i]->x = player->x;
				bullets[i]->y = player->y;
				break;
			}
		}
	}

	MovePos(player->x, player->y);
	printf(player->shape);

	for (int i = 0; i < BULLET_COUNT; i++)
	{
		if (bullets[i]->act)
		{
			bullets[i]->x++;
			if (bullets[i]->x > 40)
			{
				bullets[i]->x = i;
				bullets[i]->y = 0;
				bullets[i]->act = false;
			}

		}

	}

	for (int i = 0; i < BULLET_COUNT; i++)
	{
		MovePos(bullets[i]->x, bullets[i]->y);
		printf(bullets[i]->shape);
	}


	for (int i = 0; i < ENEMY_COUNT; i++)
	{
		if (enemies[i]->act == false)
		{
			enemies[i]->act = true;
			enemies[i]->x = 39;
			enemies[i]->y = rand() % 40;
			break;

		}
	}

	for (int i = 0; i < ENEMY_COUNT; i++)
	{
		if (enemies[i]->act)
		{
			enemies[i]->x--;
			if (enemies[i]->x <= 0)
			{
				enemies[i]->act = false;
			}

		}
	}


	for (int i = 0; i < ENEMY_COUNT; i++)
	{
		MovePos(enemies[i]->x, enemies[i]->y);
		printf(enemies[i]->shape);
	}
}