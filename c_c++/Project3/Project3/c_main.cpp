
#include <stdio.h>
#include <Windows.h>

//색깔을 저장에 둔곳
enum COLOR
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE,

};
// 플레이어의 구조체
struct Player
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape;
};
// 충동할 물체의 구조체
struct Enemy
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape[3];
};

//선언
Player* player = nullptr;
Enemy* enemy = nullptr;

void StageInitialize();
void StageProgress();
void StageRender();
void StageRelease();

void MovePos(int x, int y);
void Paint(int color);
void HideCursor();

int main()
{
	HideCursor();
	StageInitialize();


	while (true)
	{
		system("cls");
		StageProgress();
		StageRender();
		Sleep(50);

	}

	StageRelease();

	return 0;
}

void StageInitialize()
{

	player = (Player*)malloc(sizeof(Player));
	player->act = true;
	player->x = 10;
	player->y = 10;
	player->color = WHITE;
	player->shape = "＠";
	enemy = (Enemy*)malloc(sizeof(Enemy));
	enemy->act = true;
	enemy->x = 10;
	enemy->y = 10;
	enemy->color = YELLOW;
	enemy->shape[0] = "□□□□";
	enemy->shape[1] = "□□□□";
	enemy->shape[2] = "□□□□";

}

void StageProgress()
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
	// 충돌이 일어나는 부분 코드 
	if (enemy->x <= player->x && player->x < enemy->x + 4 &&
		enemy->y <= player->y && player->y < enemy->y + 3)
	{
		enemy->color = RED;
	}
	else
	{
		enemy->color = YELLOW;
	}
}


void StageRender()
{

	for (int i = 0; i < 3; i++)
	{
		MovePos(enemy->x, enemy->y + i);
		Paint(enemy->color);
		printf(enemy->shape[i]);

	}

	MovePos(player->x, player->y);
	Paint(player->color);
	printf(player->shape);

}

void StageRelease()
{
}

void MovePos(int x, int y)
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Paint(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void HideCursor()
{

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}
