
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>

//������ ���忡 �а�
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
// �÷��̾��� ����ü
struct Player
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape;
};
// �浿�� ��ü�� ����ü
struct Enemy
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape[3];
};

//����
Player* player = nullptr;
Enemy* enemy = nullptr;
Enemy* enemy2 = nullptr;
Enemy* enemy3 = nullptr;


void StageInitialize();
void StageProgress();
void StageRender();
void StageRelease();

void MovePos(int x, int y);
void Paint(int color);
void HideCursor();
//######################################################
int main()
{
	HideCursor();
	StageInitialize();


	while (true)
	{
		if (enemy->y < 10 || enemy2->y < 10 || enemy3->y < 10)
		{
			enemy->y++;
			enemy2->y++;
			enemy3->y++;
		}
		else
		{
			enemy->y = 0;
			enemy2->y = 0;
			enemy3->y = 0;
			int random;
			int random2;
			random = rand() % 10;
			random2 = rand() % 10;
			enemy->x = random;
			enemy2->x = random2;
			if (random == random2)
			{
				enemy2->x = 3;
			}
		}
		system("cls");
		StageProgress();
		StageRender();
		Sleep(80);


	}

	StageRelease();

	return 0;
}
//######################################################
void StageInitialize()
{

	player = (Player*)malloc(sizeof(Player));
	player->act = true;
	player->x = 20;
	player->y = 10;
	player->color = WHITE;
	player->shape = "��";
	enemy = (Enemy*)malloc(sizeof(Enemy));
	enemy->act = true;
	enemy->x = 20;
	enemy->y = 0;
	enemy->color = YELLOW;
	enemy->shape[0] = "��";
	enemy->shape[1] = "��";
	enemy->shape[2] = "��";
	enemy2 = (Enemy*)malloc(sizeof(Enemy));
	enemy2->act = true;
	enemy2->x = 20;
	enemy2->y = 0;
	enemy2->color = YELLOW;
	enemy2->shape[0] = "��";
	enemy2->shape[1] = "��";
	enemy2->shape[2] = "��";
	enemy3 = (Enemy*)malloc(sizeof(Enemy));
	enemy3->act = true;
	enemy3->x = 20;
	enemy3->y = 0;
	enemy3->color = YELLOW;
	enemy3->shape[0] = "��";
	enemy3->shape[1] = "��";
	enemy3->shape[2] = "��";

}

void StageProgress() // Ű���� �����ϰ� �÷��̿� enmy�� �浹�ϴ� �Լ�
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
	// �浹�� �Ͼ�� �κ� �ڵ� 
	if (enemy->x <= player->x && player->x < enemy->x + 1 &&
		enemy->y <= player->y && player->y < enemy->y + 3)
	{
		enemy->color = RED;
	}
	else
	{
		enemy->color = YELLOW;
	}
	if (enemy2->x <= player->x && player->x < enemy2->x + 1 &&
		enemy2->y <= player->y && player->y < enemy2->y + 3)
	{
		enemy2->color = RED;
	}
	else
	{
		enemy2->color = YELLOW;
	}
}


void StageRender()
{

	for (int i = 0; i < 3; i++)
	{
		MovePos(enemy->x, enemy->y + i);
		Paint(enemy->color);
		printf(enemy->shape[i]);
		MovePos(enemy2->x, enemy2->y + i);
		Paint(enemy2->color);
		printf(enemy2->shape[i]);
		MovePos(enemy3->x, enemy3->y + i);
		Paint(enemy3->color);
		printf(enemy3->shape[i]);

	}

	MovePos(player->x, player->y);
	Paint(player->color);
	printf(player->shape);

}

void StageRelease()
{
}

void MovePos(int x, int y) //ī
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//�ܼ�â�� �����ġ �ٲ��ִ� �Լ�

}

void Paint(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	//����
}

void HideCursor()
{

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	//�ܼ�â�� ��Ÿ���� Ŀ���� �����ִ� �Լ�


}
