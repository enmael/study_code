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
	//��ȯ����(*�������̸�)(�Լ��� ���� �Ű����� ��ϵ�)
	void(*p)();

	//�Լ� �����Ϳ� �Լ� A�� �ּ� ����(����)
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

	// �Ӿ� �̰� ����ϸ� �ΰ� �װ� �Դٸ� ���ٸ� �ϴ� �޴� ����� �ְڳ�
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
// ��¡�� �ȸ�ų���� �ִµ� Ÿ�� ���� ����Ҷ��� �ִ�

/*
#include <iostream>
using namespace std;

//typedef �Լ���ȯ��(*�Լ������� �ڷ��� �̸�)(�Լ� �Ű����� ������ Ÿ�Ե�);
//typedef int(*Func)(int, int);

int Add(int a, int b) { return a + b; }

//C++
//using Ÿ������ = ����;
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
using int64 = __int64;//8byte ����ҷ���
using uint8 = unsigned __int8;
using uint16 = unsigned __int16;
using uint32 = unsigned __int32;
using uint64 = unsigned __int64;


int main()
{
	BYTE a;
	a = 'c';
	//���� �̷��Ե� �Ǵ±���  �Ƽ��� ���翡�Ĥ� ���������Ĥ���ƾ�
	cout << a << endl;


	return 0;
}
*/
/*
#include <iostream>
#include <functional>// ȣ��

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