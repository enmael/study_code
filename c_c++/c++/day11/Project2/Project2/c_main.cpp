// ���� �����ڶ� �����ΰ�?
//  �������ε� �Ű������� ��ü�� �ٴ´�.
// �ʿ��Ҷ� ���� �˾Ƽ� ������!!!!
//--> �۾����Ҷ� ���� ������ �ؾ� �����ϴ� ����� 
// 
/*
#include<iostream>
using namespace std;
//���ø�  == Ʋ // typename == Ÿ�� �̸� // �̸� ������� ���ϴµ�
// �ٵ� �׳� t1, t2, t3, �׷������� ����Ѵ�
template <typename T1, typename T2>
void A(T a) //void A(T a,T s) //�ڷ����� ������ �̷��� ����϶� 
{
	// ������ Ÿ���� �������� �������� ����ϸ鼭 ����϶� 
	//����ü , ������ �׵��� ���� ����, �Ǽ�, ���ڿ���� �׷��� �ƹ��ų� ������
	// �����ϰ� ������ 
	cout << a << endl;
}
//�������� �ٸ��� ���� �׳� ���� ���� ������ �̳��

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
// ����ü ����
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
// Ŭ������ ���� 
#include <iostream>

using namespace std;


template <typename T>
class A
{
public:
	T temp;
public:
	//A() {}
	A<T>() {} // default ������
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
//��õ�帮�°� 
// �ƹ����� ���־�� �Ӹ��ӿ� ���´� 
// ������ �ּҸ� �־���Ѵ� 
// ������ �����̴� �̰� 

/*
#include <iostream>
using namespace std;
template <typename T>
void A(T a)
{}

template <typename T> // ������ ����
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
	B(&a); // int* //�ߵ� ������

	C(a); //int& a = a;
	C(new int); // T == int*  int*& a = new int; //�ߵ� ������

	return 0;
}
*/

// ���� ������ ���� ������
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

//Ŭ�� ����ϴ°��� �⺻����/ �������� �ɼǱ��
// �ɼ� ��ɵ� �� ������� �˾ƾ��Ѵ�. 
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