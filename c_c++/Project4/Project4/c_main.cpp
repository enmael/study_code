/*
#include <stdio.h>
#include <Windows.h>

#define BulletCount 10
#define EnemyCount 10

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
struct Info
{
	int x;
	int y;
	COLOR color;

};

struct Bullet
{
	bool act;
	Info info;
	const char* shape;
};

struct Enemy
{
	bool act;
	int x;
	int y;
	COLOR color;
	const char* shape[3];
};

struct Obj
{
	int x;
	int y;
	COLOR color;	  //Info
	int aniIndex;
	const char* shape[10][3];

};
#pragma endregion


#pragma region Game
Obj* player = nullptr;
Bullet* bullets[BulletCount] = {};
Enemy* enemies[EnemyCount] = {};


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
		Sleep(20);	   //20ms

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
	player->color = WHITE;
	player->aniIndex = 0;
	player->shape[0][0] = "   -----|-----";
	player->shape[0][1] = "*>=====[_]L)";
	player->shape[0][2] = "      -'-`-";

	player->shape[1][0] = "    ----|---- ";
	player->shape[1][1] = "*>=====[_]L)";
	player->shape[1][2] = "      -'-`-";

	player->shape[2][0] = "     ---|---  ";
	player->shape[2][1] = "*>=====[_]L)";
	player->shape[2][2] = "      -'-`-";

	player->shape[3][0] = "      --|--   ";
	player->shape[3][1] = "*>=====[_]L)";
	player->shape[3][2] = "      -'-`-";

	player->shape[4][0] = "       -|-    ";
	player->shape[4][1] = "*>=====[_]L)";
	player->shape[4][2] = "      -'-`-";

	player->shape[5][0] = "        +     ";
	player->shape[5][1] = "*>=====[_]L)";
	player->shape[5][2] = "      -'-`-";

	player->shape[6][0] = "       -|-    ";
	player->shape[6][1] = "*>=====[_]L)";
	player->shape[6][2] = "      -'-`-";

	player->shape[7][0] = "      --|--   ";
	player->shape[7][1] = "*>=====[_]L)";
	player->shape[7][2] = "      -'-`-";

	player->shape[8][0] = "     ---|---  ";
	player->shape[8][1] = "*>=====[_]L)";
	player->shape[8][2] = "      -'-`-";

	player->shape[9][0] = "    ----|---- ";
	player->shape[9][1] = "*>=====[_]L)";
	player->shape[9][2] = "      -'-`-";
	for (int i = 0; i < BulletCount; i++)
	{
		bullets[i] = (Bullet*)malloc(sizeof(Bullet));
		bullets[i]->act = false;
		bullets[i]->info.x = i;
		bullets[i]->info.y = 0;
		bullets[i]->info.color = LIGHTBLUE;
		bullets[i]->shape = "●";
	}
	for (int i = 0; i < EnemyCount; i++)
	{
		enemies[i] = (Enemy*)malloc(sizeof(Enemy));
		enemies[i]->act = true;
		enemies[i]->x = rand() % 20 + 20;
		enemies[i]->y = rand() % 30;
		enemies[i]->color = (COLOR)(rand() % 14 + 1);
		enemies[i]->shape[0] = "□□□□□";
		enemies[i]->shape[1] = "□□□□□";
		enemies[i]->shape[2] = "□□□□□";
	}
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

	if (GetAsyncKeyState(VK_SPACE))
	{
		for (int i = 0; i < BulletCount; i++)
		{
			if (bullets[i]->act == false)
			{

				bullets[i]->info.x = player->x + 6;
				bullets[i]->info.y = player->y + 1;
				bullets[i]->act = true;
				break;
			}
		}
	}

	for (int i = 0; i < BulletCount; i++)
	{
		if (bullets[i]->act == true)
		{
			bullets[i]->info.x++;
			if (bullets[i]->info.x >= 40)
			{
				bullets[i]->info.x = i;
				bullets[i]->info.y = 0;
				bullets[i]->act = false;
			}
		}
	}
}

int stageCount = 0;

void StageRender()
{
	stageCount++;
	if (stageCount == 3)
	{
		player->aniIndex++;

		player->aniIndex %= 10;
		stageCount = 0;
	}

	for (int i = 0; i < 3; i++)
	{
		MovePos(player->x, player->y + i);
		Paint(player->color);
		printf(player->shape[player->aniIndex][i]);
	}


	for (int i = 0; i < BulletCount; i++)
	{
		MovePos(bullets[i]->info.x, bullets[i]->info.y);
		Paint(bullets[i]->info.color);
		printf(bullets[i]->shape);
	}

	for (int i = 0; i < EnemyCount; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MovePos(enemies[i]->x, enemies[i]->y + j);
			Paint(enemies[i]->color);
			printf(enemies[i]->shape[j]);
		}

	}
}

void StageRelease()
{
	if (player != nullptr)
	{
		free(player);
		player = nullptr;
	}

	for (int i = 0; i < BulletCount; i++)
	{
		if (bullets[i] != nullptr)
		{
			free(bullets[i]);
			bullets[i] = nullptr;
		}
	}

	for (int i = 0; i < EnemyCount; i++)
	{
		if (enemies[i] != nullptr)
		{
			free(enemies[i]);
			enemies[i] = nullptr;
		}
	}
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
*/
/*
- 9일차 강의내용 정리
- 더블 버퍼에 대한 내용 설명하는 날
- 창을 두개 만든다.?
- 지우고 보여주고 지우고 보여주고를 반복한다.
*/
#include <stdio.h>
#include <Windows.h>

#define BufferWidth 80	// 가로 버퍼 크기
#define BufferHeight 40	// 세로 버퍼 크기

#pragma region Map
int map[40][40] =
{
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},

};
#pragma endregion

HANDLE hbuffer[2];		// 창 두개를 제어하는 핸들
int screeIndex;			// hbuffer[screeIndex]. screenIndex == 0 or 1

 // 버퍼 초기화 함수
void IntrBuffer()
{
	//현재 스크린 index값은 0
	screeIndex = 0;
	
	//size.x = 80, size.y = 40 의 화면크기
	COORD size = { BufferWidth, BufferHeight };

	//창 크기 왼쪽 : 0, 위쪽 : 0, 오른쪽 : 80 - 1, 아래쪽 : 40 - 1 
	SMALL_RECT rect = { 0, 0, BufferWidth - 1, BufferHeight - 1 };

	//0번 버퍼 만들기
	hBuffer[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//0번 화면 버퍼 사이즈 설정(만든 버퍼 주소, 크기)
	SetConsoleScreenBufferSize(hBuffer[0], size);
	//0번 창 사이즈 설정
	SetConsoleWindowInfo(hBuffer[0], TRUE, &rect);

	//1번 버퍼 만들기
	hBuffer[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	//1번 화면 버퍼 사이즈 설정(만든 버퍼 주소, 크기)
	SetConsoleScreenBufferSize(hBuffer[1], size);
	//1번 창 사이즈 설정
	SetConsoleWindowInfo(hBuffer[1], TRUE, &rect);ㄴㄴ

	//커서 정보 등록 : 깜박이는 커서 안보이게
	CONSOLE_CURSOR_INFO info;	//콘솔 커서 정보 구조체
	info.dwSize = 1;			//커서 크기
	info.bVisible = FALSE;		//커서 안보이게

	//0 && 1 각각의 버퍼에 커서 정보 등록
	SetConsoleCursorInfo(hBuffer[0], &info);
	SetConsoleCursorInfo(hBuffer[1], &info);
}


void FliBuffer()	//버퍼 뒤집기
{
	//해당 버퍼 활성화
	SetConsoleActiveScreenBuffer(hBuffer[screeIndex]);

	//[0]->[1] / [1]->[0]
	screeIndex = !screeIndex;
}

void ClearBuffer()		//버퍼 창 깨끗이
{	
	//시작위치
	//pos.x =0, pos.y =0
	COORD pos = { 0, 0 };
	//매개변수 채울혀고
	DWORD dw;

	//화면을 ' '로 채움
	FillConsoleOutputCharacter(hBuffer[screeIndex], ' ', BufferWidth * BufferHeight, pos, &dw);
}

//버퍼에 쓰기
void WriteBuffer(int x, int y, const char* shape, int color)
{
	//위치설정
	//pos.X = x * 2, pos.Y = y
	COORD pos = { x * 2, y };

	//커서 위치 이동
	SetConsoleCursorPosition(hBuffer[screeIndex], pos);

	//색깔 바꿔주고
	SetConsoleTextAttribute(hBuffer[screeIndex], color);

	//매개변수 채우기 위해
	DWORD dw;

	//해당 버퍼에 쓰기
	WriteFile(hBuffer[screeIndex], shape, strlen(shape), &dw, NULL);
}

//버퍼 해제
void ReleaseBuffer()
{
	//버퍼 닫기
	CloseHandle(hBuffer[0]);
	CloseHandle(hBuffer[1]);
}
int main()
{
	InitBuffer();

	while (true)
	{
		for (int y = 0; y < 40; y++)
		{
			for (int x = 0; x < 40; x++)
			{
				switch (map[y][x])
				{
				case 1:
					WriteBuffer(x, y, "■", 13);
					break;
				case 0:
					WriteBuffer(x, y, "○", 14);
					break;
				default:
					break;
				}
			}
		}


		FlipBuffer();
		ClearBuffer();

		Sleep(30);
	}

	ReleaseBuffer();
}