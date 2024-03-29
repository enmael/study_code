/*
#include <iostream>

using namespace std;

void A()
{
	cout << "Hello world" << endl;
}
//int  B(int b)
//{
//	cout << b << endl;
//}
//double C(double c)
//{
//	cout <<c << endl;
//}

int main()
{
	//반환형식(*포인터이름)(함수랑 같은 매개변수 목록들)
	void(*p)();

	//함수 포인터에 함수 A의 주소 저장(연결)
	p = A;

	A();
	//B(1);
	//C(2.2);
	p();
	printf("%p", A);
	printf("%p", p);

	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int B(int a, int b)
{
	cout << "Hello world" << endl;

	return 0;
}

int main()
{
	int(*p)(int, int);
	//int(*p)(int a, int b);

	p = B;

	B(1, 2);
	p(1, 2);

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

void A()
{
	cout << "Hello world" << endl;
}

int main()
{
	int num;

	void* p = &num;
	*((int*)p) = 12;
	//int(*p)(int, int);
	cout << num << endl;

	p = A;

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

int A(int a, int b)
{
	cout << "Hello world" << endl;
	return 0;
}

int main()
{
	//void(*p)();
	void* p = A; // (*(void(*)())p) == A
	A(1, 2);
	(*(int(*)(int, int))p)(1, 2);

	return 0;
}
*/

#include <iostream>
#include<Windows.h>
/*
using namespace std;

void A()
{
	cout << "A" << endl;
}

void B()
{
	cout << "B" << endl;
}

void C()
{
	cout << "C" << endl;
}

int main()
{
	void(*p)();

	sp = A;
	p();

	p = B;
	p();

	p = C;
	p();

	// 머야 이거 사용하면 로고 그거 왔다리 가다리 하는 메뉴 만들수 있겠네
	return 0;
}
*/
/*
#include <iostream>
#include<Windows.h>
using namespace std;

void Logo()
{
	cout << "logo" << endl;
}

void Main()
{
	cout << "main" << endl;
}

void Option()
{
	cout << "Option" << endl;
}

int main()
{
	while(true)
	{
		system("cls");
		void(*p)();
		//p = Logo;
		//p();
		int a = 0;
		cin >> a;
		if (a == 1)
		{
			p = Logo;
			p();
		}
		else if (a == 2)
		{
			p = Main;
			p();
		}
		else if (a == 3)
		{
			p = Option;
			p();
		}
		Sleep(50);
	};
}
*/
// 유징이 안먹킬떼도 있는데 타임 으로 사용할때도 있다

/*
#include <iostream>
using namespace std;

//typedef 함수반환형(*함수포인터 자료형 이름)(함수 매개변수 데이터 타입들);
//typedef int(*Func)(int, int);

int Add(int a, int b) { return a + b; }

//C++
//using 타입정의 = 정의;
using Func = int(*)(int, int);

int main()
{
	Func a = NULL;
	a = Add;
	cout << a(1, 2) << endl;

	return 0;
}
*/
/*
#include <iostream>

using namespace std;

//C++ 11
using BYTE = unsigned char;
using int8 = __int8;  //char
using int16 = __int16;//short
using int32 = __int32;//int
using int64 = __int64;//8byte 사용할려면
using uint8 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;


int main()
{
	BYTE a;
	a = 'c';
	//세상에 이렇게도 되는군아  아세상에 세사에ㅔㅇ 세에에에ㅔㅇ사아아
	cout << a << endl;


	return 0;
}
*/
/*
#include <iostream>
#include <functional>// 호출

using namespace std;

using P = void(*)(int, int);

int A(int a, int b)
{
	cout << "A" << endl;
	return 0;
}

int main()
{
	std::function<int(int, int)> a;
	a = A;

	cout << a(1, 2) << endl;

	return 0;
}
*/