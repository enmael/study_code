// 복사 생성자란 무엇인가?
//  생성자인데 매개변수로 객체를 바는다.
// 필요할때 내가 알아서 만들어라!!!!
//--> 작업을할때 내가 조합을 해야 쓸만하다 기억함 
// 
/*
#include<iostream>
using namespace std;
//탬플릿  == 틀 // typename == 타입 이름 // 이름 마음대로 정하는데
// 다들 그냥 t1, t2, t3, 그런식으로 사용한다
template <typename T1, typename T2>
void A(T a) //void A(T a,T s) //자료형이 같으면 이렇게 사용하라 
{
	// 데이터 타입이 정해지지 않은것을 고려하면서 사용하라 
	//구조체 , 포인터 그딴거 말고 정수, 실수, 문자열등등 그런거 아무거나 넣을지
	// 생각하고 돌려라 
	cout << a << endl;
}
//지료형이 다르면 따로 그냥 새로 만들어서 돌려라 이놈아

int main()
{
	A<int, float>(1, 1.1, 2);
	A(1, 1.1, 2);
}
*/
/*
#include <iostream>

using namespace std;


template <typename T, typename T2>
void A(T a, T2 b, T c)
{
	//??
	cout << a << endl;
}

int main()
{
	A<int, float>(1, 1.1, 2);
	A(2, 1.1, 4);
}
*/
/*
// 구조체 탬플
#include <iostream>

using namespace std;


template <typename T>
struct A
{
	T temp;
};

int main()
{
	A<int> a;
	a.temp = 1;
	cout << a.temp << endl;

	A<float>b;
	b.temp = 1.1;
	cout << b.temp << endl;

	A<char*>c;
	c.temp = new char;
	cout << c.temp << endl;

	return 0 ;
}
*/
/*
// 클래스의 탬플 
#include <iostream>

using namespace std;


template <typename T>
class A
{
public:
	T temp;
public:
	//A() {}
	A<T>() {} // default 생성자
	A<T>(T data)
	{
		temp = data;
	}
	//~A() {}
	~A<T>() {}
};

int main()
{

	A<int> a; // T == int
	a.temp = 1;

	A<float> b(1.1); // T == float

	return 0;
}
*/
//추천드리는건 
// 아무값이 막넣어보면 머리속에 남는다 
// 므조건 주소만 넣어야한다 
// 포인터 전용이다 이건 

/*
#include <iostream>
using namespace std;
template <typename T>
void A(T a)
{}

template <typename T> // 포인터 전용
void B(T* a)
{}

template <typename T>
void C(T& a)
{
}

int main()
{
	A(1); // T == int
	B(new int);// T == int

	int a = 0;
	A(a);
	B(&a); // int* //야도 포인터

	C(a); //int& a = a;
	C(new int); // T == int*  int*& a = new int; //야도 포인터

	return 0;
}
*/

// 오프 무서워 오프 무서워
/*
#include <iostream>
using namespace std;
template <typename T>
class Array
{
public:
	T* p = nullptr;
public:
	Array<T>() { }
	Array<T>(int size)
	{
		p = new T[size];
	}
	~Array()
	{
		if (p != nullptr)
		{
			delete[] p;
		}
	}
};

int main()
{
	Array<int> a(); // T == int
	Array<float> b(10); // T == float

	b.p[0] = 1.1;
	b.p[1] = 2.2;
	b.p[2] = 3.3;


	return 0;
}

//클라스 사용하는것이 기본구조/ 나머지는 옵션기능
// 옵션 기능도 다 사용할줄 알아야한다. 
*/
/*
using namespace std;
template <typename T>
void Test(T a)
{}

int main()
{
	Test(1);
	Test<float>(1.1);
	return 0;
}
*/

/*
using namespace std;
template <typename T>
class A
{
public:
	A(T a){}
};

int main()
{
	A<int> a(1);
	return 0;
}
*/
/*
#include <iostream>

using namespace std;


class A
{
public:
	template <typename T>
	A(T a) {}
};

int main()
{
	A a(1);

	return 0;
}
*/
/*
#include <iostream>

using namespace std;


class A
{
public:
	template <typename T>
	void Test(T a) {}
};

int main()
{
	A a;

	a.Test(1);
	a.Test<int>(1);

	return 0;
}
*/

/*
#include <iostream>
using namespace std;
template <typename T>
class A
{
protected:
	T a;
public:
	void PrintType()
	{
		cout << typeid(a).name() << endl;
	}
};

class B : public A<int>
{
public:
};

class C : public A<float>
{
public:

};

int main()
{

	B b;
	b.PrintType();

	C c;
	c.PrintType();

	return 0;
}
*/
// 