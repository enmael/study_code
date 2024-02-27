//13일차 강의 내용
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