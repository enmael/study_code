/*
# 날짜 : 2024.02.26
# 프로젝트명 : Project1
# 파일명 : c_main.cpp
# 작성자 : 장승배
# 내용   : - 12일차 강의내용 
		   - 리듬 게임 껍데기 한번 만들어 보고싶다
		   - 마리오 게임 만들기

*/
/*
#include<stdio.h>
#include<Windows.h>

void MovePos(int x, int y) //카
{
	COORD pos;
	pos.X = x * 2;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//콘솔창의 출력위치 바꿔주는 함수

}

void HideCursor()
{

	CONSOLE_CURSOR_INFO info;
	info.dwSize = 1;
	info.bVisible = false;

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	//콘솔창에 나타나는 커서를 없애주는 함수


}

void StageProgress() // 키보드 동작하고 플레이와 enmy가 충돌하는 함수
{
	if (GetAsyncKeyState(VK_LEFT))
	{
		printf("a");
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		printf("b");
	}
	if (GetAsyncKeyState(VK_UP))
	{
		printf("c");
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		printf("d");
	}
}
//####################################################################################

int main()
{

	//int x = 10;
	//int y = 10;
	//w/hile(true)
	//{	
	//	system("cls");
	//	MovePos(10,20);
	//	HideCursor();
	//	StageProgress();
	//	printf("▲");
	//	Sleep(50);
	//}
	//return 0;


	{
		int x = 10;
		int y = 20;
		while (true)
		{
			system("cls");

			if (GetAsyncKeyState(VK_LEFT))
			{
				x--;
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
			}
			if (GetAsyncKeyState(VK_SPACE))
			{
				y--;

				if (y < 15) {
					y = 18;
				}
			}

			MovePos(x, y);
			printf("▲");
			Sleep(50);
		}

		return 0;
	}
}
*/
//####################################################################################
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

//########################################################################
int main()
{
	int x = 10;

	int y = 20;
	int iY = y;
	const float G = 9.81;
	float Vo = 10.0f;
	float time = 0.f;
	bool fall = false;
	float h = 0.f;

	while (true)
	{
		system("cls");

		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
		}

		if (GetAsyncKeyState(VK_SPACE))
		{
			fall = true;
			iY = y;
			time = 0.f;

		}

		//  = 0.5f * G * t * t
		// y = v0 * t - 0.5 * G * t * t
		if (fall)
		{
			h = -Vo * time + (0.5f * G * time * time);	 //0.5f * 9.81 * 0
			//y += h;
			y = iY + h;
		}


		if (y > 20) {
			y = 20;
		}

		MovePos(x, y);
		printf("옷");
		time += 0.1;
		Sleep(10);
	}

	return 0;
}
//########################################################################
*/

/*
// 절대 시간을 사용하는방법!!!!!
#include <stdio.h>
#include <Windows.h>

int main()
{
	//윈도 부팅하고 부터 ms 1씩 ++
	//10000
	ULONGLONG deltatime = GetTickCount64();

	while (true)
	{
		//11000                 10001...10002...10003 ..... 11000
		if (deltatime + 1000 <= GetTickCount64())
		{
			system("cls");
			deltatime = GetTickCount64();
			printf("deltatime : %u\n", deltatime);
			// 그러니까 deltatime이 1000초에 한번씩 화면에 출력되게 하는 코드
		}

	}
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

//########################################################################
int main()
{
	int x = 10;

	int y = 20;
	int iY = y;
	const float G = 9.81;
	float Vo = 10.0f;
	float time = 0.f;
	bool fall = false;
	float h = 0.f;

	ULONGLONG deltaTime = GetTickCount64();

	while (true)
	{	
		if (deltaTime + 30 <= GetTickCount64())	// 절대적인 시간으로 작동하는거라는데 그래 음..
		{
			deltaTime = GetTickCount64();

			system("cls");

			if (GetAsyncKeyState(VK_LEFT))
			{
				x--;
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
			}

			if (GetAsyncKeyState(VK_SPACE))
			{
				fall = true;
				iY = y;
				time = 0.f;

			}

			//  = 0.5f * G * t * t
			// y = v0 * t - 0.5 * G * t * t
			if (fall)
			{
				h = -Vo * time + (0.5f * G * time * time);	 //0.5f * 9.81 * 0
				//y += h;
				y = iY + h;
			}


			//if (y > 20) {
			//	y = 20;
			//}

			MovePos(x, y);
			printf("옷");
			time += 0.1;
		
		}
	}

	return 0;
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
	{1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
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
//########################################################################
int main()
{
	int x = 10;

	int y = 20;
	int iY = y;
	const float G = 9.81;
	float Vo = 10.0f;
	float time = 0.f;
	bool jump = false;
	float h = 0.f;



	ULONGLONG deltaTime = GetTickCount64();

	while (true)
	{
		if (deltaTime + 30 <= GetTickCount64())
		{
			deltaTime = GetTickCount64();
			system("cls");

			for (int y = 0; y < 40; y++)
			{
				for (int x = 0; x < 40; x++)
				{
					switch (map[y][x])
					{
					case 1:
						MovePos(x, y);
						printf("■");
						break;
					default:
						break;
					}
				}
			}

			if (GetAsyncKeyState(VK_LEFT))
			{
				x--;
			}
			if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
			}

			if (GetAsyncKeyState(VK_SPACE))
			{
				jump = true;
				iY = y;
				time = 0.f;

			}

			//  = 0.5f * G * t * t
			// y = v0 * t - 0.5 * G * t * t
			if (jump)
			{
				h = -Vo * time + (0.5f * G * time * time);	 //0.5f * 9.81 * 0
				//y += h;
				y = iY + h;
			}

			if (y > 39) 
			{
				y = 38;
			}

			if (x > 40) 
			{
				x--;
			}
			//맵에서 1인 부분만 조심 하면되는거 아닌가?
			//

			MovePos(x, y);
			printf("옷");
			time += 0.1;

		}
	}

	return 0;
}