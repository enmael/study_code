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
// 색깔갑
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
    //이게 머하는 함수 드라
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 1;
    info.bVisible = false;

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

}


#pragma endregion
*/

// 그러니까 여기에 나온 함수 하나 하나에 대해서 설명주석을 달고서 내가 모르는 부분이 무엇인지 생각해보면 좋을것 같다.

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


Obj* player = nullptr; // player의 주소를 OBJ에 저장 일다은 오류 처 안나게 nullptr을 넣는다 
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
		// 함수 하나에 3개 넣어서 효율적으로 사용할래 아니면 그냥 따로따로 해서 코드 길어질래???
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
	//(Obj*)malloc(sizeof(Obj)) player에  Obj의 주소값을 처 넣는다??
	player = (Obj*)malloc(sizeof(Obj)); // 이걸 왜 이렇게 처하는지 모르겠네
	player->x = 10; 
	player->y = 10;
	player->color = YELLOW;
	player->shape = "옷";
	// 그래 야발
	// player를 10,10의위치에 YELLO의 색깔로 옷 으로 표시 할시 한다는걸 알겠는데.
	// (Obj*)malloc(sizeof(Obj)) player 그러니까 내 대가레은 동적할당에 대한 자료가 없다.
	// 그러니 동적 할당에 대해서 정리해라 이놈아
}

void StageProgress()
{	
	//키보드 값 입력 받으면 player의 움직이게한다는 함수다 
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
	//그러니까 stageRender이라는 함수에는
	//MovePos : 콘솔창에 player의 위치 값을 바꿔주는 함수
	//Paint : player의 색깔을 바꿔준느 함수
	//shape에는 플레이의 모습이 담겨있고 
	//위 3가지의 모근걸 한번에 돌리기 
	// 난 이래서 함수에 함수 쓰는걸 싫어해... 이렇게 주석 안치면 햇갈려..
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
	//구조체 
	COORD pos; 
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //콘솔창의 출력위치 바꿔주는 함수
}

void Paint(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // 글자 색을 바꿔주는 함수
}

void HideCursor()
{

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info); //콘솔창에 나타나는 커서를 없애주는 함수

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
	player->shape = "옷";

	bullets[0] = (Obj*)malloc(sizeof(Obj));
	bullets[0]->act = false;
	bullets[0]->x = 0;
	bullets[0]->y = 0;
	bullets[0]->color = RED;
	bullets[0]->shape = "●";

	bullets[1] = (Obj*)malloc(sizeof(Obj));
	bullets[1]->act = false;
	bullets[1]->x = 1;
	bullets[1]->y = 0;
	bullets[1]->color = RED;
	bullets[1]->shape = "●";

	bullets[2] = (Obj*)malloc(sizeof(Obj));
	bullets[2]->act = false;
	bullets[2]->x = 2;
	bullets[2]->y = 0;
	bullets[2]->color = RED;
	bullets[2]->shape = "●";

	bullets[3] = (Obj*)malloc(sizeof(Obj));
	bullets[3]->act = false;
	bullets[3]->x = 3;
	bullets[3]->y = 0;
	bullets[3]->color = RED;
	bullets[3]->shape = "●";
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
