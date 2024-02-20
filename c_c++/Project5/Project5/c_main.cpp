/*
#include<stdio.h>
int main()
{
	printf("asdasd\n");
}
*/

/*
#include <stdio.h>
#include <Windows.h>

#pragma region Enum
// ����
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

#pragma endregion

#pragma region Struct


#pragma endregion


#pragma region Game

void StageInitialize();
void StageProgress();
void StageRender();
void StageRelease();
#pragma endregion

#pragma region WIN_API
void MovePos(int x, int y);
void Paint(int color);
void HideCursor();

#pragma endregion

int main()
{
    HideCursor(); 
    StageInitialize(); 


    while (true)
    {
        system("cls");
        StageProgress();
        Sleep(50);
        StageRender();
        system("cls");
        Sleep(50);

    }

    StageRelease();

    return 0;
}

#pragma region Stage
void StageInitialize()
{

}

void StageProgress()
{
    printf("hell0\n");
    
}


void StageRender()
{
    printf("kill_me\n");

}

void StageRelease()
{
}
#pragma endregion

#pragma region WIN_API
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
    //�̰� ���ϴ� �Լ� ���
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 1;
    info.bVisible = false;

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}


#pragma endregion
*/

// �׷��ϱ� ���⿡ ���� �Լ� �ϳ� �ϳ��� ���ؼ� �����ּ��� �ް� ���� �𸣴� �κ��� �������� �����غ��� ������ ����.

/*
#include <stdio.h>	
#include <Windows.h>	

#pragma region Enum
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

#pragma endregion

#pragma region Struct

struct Obj
{
	int x;
	int y;
	COLOR color;
	const char* shape;
};

#pragma endregion


#pragma region Game


Obj* player = nullptr; // player�� �ּҸ� OBJ�� ���� �ϴ��� ���� ó �ȳ��� nullptr�� �ִ´� 
void StageInitialize();
void StageProgress();
void StageRender();
void StageRelease();
#pragma endregion

#pragma region WIN_API
void MovePos(int x, int y);
void Paint(int color);
void HideCursor();

#pragma endregion
//######################################################
int main()
{
	HideCursor();
	StageInitialize();

	while (true)
	{
		system("cls");
		StageProgress();
		StageRender();
		// �Լ� �ϳ��� 3�� �־ ȿ�������� ����ҷ� �ƴϸ� �׳� ���ε��� �ؼ� �ڵ� �������???
		//MovePos(player->x, player->y);
		//Paint(player->color);
		//printf(player->shape);
		Sleep(50);
	}

	StageRelease();

	return 0;
}
//#######################################################
#pragma region Stage

void StageInitialize()
{	
	//(Obj*)malloc(sizeof(Obj)) player��  Obj�� �ּҰ��� ó �ִ´�??
	player = (Obj*)malloc(sizeof(Obj)); // �̰� �� �̷��� ó�ϴ��� �𸣰ڳ�
	player->x = 10; 
	player->y = 10;
	player->color = YELLOW;
	player->shape = "��";
	// �׷� �߹�
	// player�� 10,10����ġ�� YELLO�� ����� �� ���� ǥ�� �ҽ� �Ѵٴ°� �˰ڴµ�.
	// (Obj*)malloc(sizeof(Obj)) player �׷��ϱ� �� �밡���� �����Ҵ翡 ���� �ڷᰡ ����.
	// �׷��� ���� �Ҵ翡 ���ؼ� �����ض� �̳��
}

void StageProgress()
{	
	//Ű���� �� �Է� ������ player�� �����̰��Ѵٴ� �Լ��� 
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

}


void StageRender()
{
	//�׷��ϱ� stageRender�̶�� �Լ�����
	//MovePos : �ܼ�â�� player�� ��ġ ���� �ٲ��ִ� �Լ�
	//Paint : player�� ������ �ٲ��ش� �Լ�
	//shape���� �÷����� ����� ����ְ� 
	//�� 3������ ��ٰ� �ѹ��� ������ 
	// �� �̷��� �Լ��� �Լ� ���°� �Ⱦ���... �̷��� �ּ� ��ġ�� �ް���..
	MovePos(player->x, player->y);
	Paint(player->color);
	printf(player->shape);

}

void StageRelease()
{
}
#pragma endregion

#pragma region WIN_API
void MovePos(int x, int y)
{	
	//����ü 
	COORD pos; 
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //�ܼ�â�� �����ġ �ٲ��ִ� �Լ�
}

void Paint(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // ���� ���� �ٲ��ִ� �Լ�
}

void HideCursor()
{

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info); //�ܼ�â�� ��Ÿ���� Ŀ���� �����ִ� �Լ�

}


#pragma endregion
*/
#include <stdio.h>
#include <Windows.h>

#pragma region Enum
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

#pragma endregion

#pragma region Struct

struct Obj
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape;
};

#pragma endregion



#pragma region Game
#define BulletCount 4
Obj* bullets[BulletCount] = {};
Obj* player = nullptr;
void StageInitialize();
void StageProgress();
void StageRender();
void StageRelease();
#pragma endregion

#pragma region WIN_API
void MovePos(int x, int y);
void Paint(int color);
void HideCursor();

#pragma endregion

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

#pragma region Stage

void StageInitialize()
{
	player = (Obj*)malloc(sizeof(Obj));
	player->x = 10;
	player->y = 10;
	player->color = YELLOW;
	player->shape = "��";

	bullets[0] = (Obj*)malloc(sizeof(Obj));
	bullets[0]->act = false;
	bullets[0]->x = 0;
	bullets[0]->y = 0;
	bullets[0]->color = RED;
	bullets[0]->shape = "��";

	bullets[1] = (Obj*)malloc(sizeof(Obj));
	bullets[1]->act = false;
	bullets[1]->x = 1;
	bullets[1]->y = 0;
	bullets[1]->color = RED;
	bullets[1]->shape = "��";

	bullets[2] = (Obj*)malloc(sizeof(Obj));
	bullets[2]->act = false;
	bullets[2]->x = 2;
	bullets[2]->y = 0;
	bullets[2]->color = RED;
	bullets[2]->shape = "��";

	bullets[3] = (Obj*)malloc(sizeof(Obj));
	bullets[3]->act = false;
	bullets[3]->x = 3;
	bullets[3]->y = 0;
	bullets[3]->color = RED;
	bullets[3]->shape = "��";
}

int index = 0;

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

	if (GetAsyncKeyState(VK_RETURN))
	{

		if (bullets[0]->act == false)
		{
			bullets[0]->x = player->x;
			bullets[0]->y = player->y;
			bullets[0]->act = true;

		}
		else if (bullets[1]->act == false)
		{
			bullets[1]->x = player->x;
			bullets[1]->y = player->y;
			bullets[1]->act = true;
		}
		else if (bullets[2]->act == false)
		{
			bullets[2]->x = player->x;
			bullets[2]->y = player->y;
			bullets[2]->act = true;
		}
		else if (bullets[3]->act == false)
		{
			bullets[3]->x = player->x;
			bullets[3]->y = player->y;
			bullets[3]->act = true;
		}
		else
		{

		}

	}

	if (bullets[0]->act == true)
	{
		bullets[0]->x++;
		if (bullets[0]->x > 30)
		{
			bullets[0]->act = false;
		}
	}
	if (bullets[1]->act == true)
	{
		bullets[1]->x++;
		if (bullets[1]->x > 30)
		{
			bullets[1]->act = false;
		}
	}
	if (bullets[2]->act == true)
	{
		bullets[2]->x++;
		if (bullets[2]->x > 30)
		{
			bullets[2]->act = false;
		}
	}
	if (bullets[3]->act == true)
	{
		bullets[3]->x++;
		if (bullets[3]->x > 30)
		{
			bullets[3]->act = false;
		}
	}
}


void StageRender()
{
	MovePos(player->x, player->y);
	Paint(player->color);
	printf(player->shape);

	MovePos(bullets[0]->x, bullets[0]->y);
	Paint(bullets[0]->color);
	printf(bullets[0]->shape);

	MovePos(bullets[1]->x, bullets[1]->y);
	Paint(bullets[1]->color);
	printf(bullets[1]->shape);

	MovePos(bullets[2]->x, bullets[2]->y);
	Paint(bullets[2]->color);
	printf(bullets[2]->shape);

	MovePos(bullets[3]->x, bullets[3]->y);
	Paint(bullets[3]->color);
	printf(bullets[3]->shape);



}

void StageRelease()
{
}
#pragma endregion

#pragma region WIN_API
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


#pragma endregion
