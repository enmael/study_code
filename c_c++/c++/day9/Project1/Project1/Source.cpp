/*
#include <iostream>

using namespace std;


class A
{
public:
	static int num;
};
int A::num = 0;
int main()
{
	int n = NULL;
	A a;
	a.num = 1;
	A b;
	b.num = 2;
	A c;
	c.num = 3;
	cout << "n : " << sizeof(n) << endl;
	cout << "A : " << sizeof(A) << endl;
	cout << "A : " << sizeof(a.num) << endl;
	cout << "A : " << &a.num << endl;
	cout << "B : " << &b.num << endl;
	cout << "C : " << &c.num << endl;

	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int number = 12;
//x int number = 12;

class A
{
public:
	static int num;
	static void HelloWorld()
	{
		cout << "Hello world" << endl;
	}
};

int A::num = 0;

int main()
{
	A a;
	a.HelloWorld();

	A::HelloWorld();


	return 0;
}
*/
/*
#include "GameManager.h"
class A
{
public:
	static A* a;   //00000236918C8BA0,00000236918D43B0  
};

A* A::a = nullptr;//0000000000000000


int main()
{

	A a;
	a.a = new A; //00000236918C8BA0  
	printf("%p\n", a.a);
	A::a = new A; //00000236918D43B0
	printf("%p\n", A::a);


	return 0;
}
*/

#include <iostream>

using namespace std;
class A
{
private:
	static A* a;   //00000236918C8BA0
public:
	static A* Create()
	{
		if (a == nullptr)
		{
			a = new A;
		}

		return a;

	}

public:
	void HelloWorld() {}
};

A* A::a = nullptr;//0000000000000000
// ½Ì±ÛÅæ ÆÐÅÏ 

int main()
{
	A::Create()->HelloWorld();

	A::Create()->HelloWorld();
	return 0;
}