/*
#include <iostream>

using namespace std;

class Pet
{};

class Obj
{
public:
	int x;
	int y;
	int z;
	int i1;
	int i2;
public:
	//��ȯ�� operator ������(�Ű�������)
	//{}
	// ��Ģ������ ��� �����ϱ���!!!!!!!!!!!!
	Obj operator +(const Obj& other)
	{
		cout << "operator +" << endl;
		Obj  obj;
		obj.x = x + other.x;
		obj.y = y - other.y;
		obj.z = z * other.z;
		//obj.z = z / other.z;
		//obj.z = z % other.z;

		return obj;
	}
};

int main()
{
	Obj a;
	a.x = 1;
	a.y = 5;
	a.z = 3;
	Obj b;
	b.x = 3;
	b.y = 2;
	b.z = 1;

	Obj c = a + b;

	cout << "c.x : " << c.x << " / c.y : " << c.y << " / c.z : " << c.z<< endl;
	//
	return 0;
}
*/
//�̰� ���㼭 �߸𸣰ڴ�
//���� ���� �밡�ٸ� ���ؼ� �׷��� ���� ��� �����̵��.
//���� ���� AR �۷����� ���ٵ� ����ġ �غ���ʹ�.
//���� ���� ��ģ����� ũ�� 
/*
#include <iostream>

using namespace std;

class Pet
{};

class Obj
{
public:
	int x;
	int y;
public:
	void operator +(const Obj& other)
	{
		cout << "IN" << endl;
	}
};

//��ȯ�� operator������(�Ű�������)
void operator+(const Obj& a, const Obj& b)
{
	cout << "OUT" << endl;
}

int main()
{
	Obj a;
	a.x = 1;
	a.y = 1;
	Obj b;
	b.x = 2;
	b.y = 2;

	a + b;
	a.operator+(b);

	return 0;
}
*/

//  operator�� ��� ����ؾߵǴ��� �𸣰ڴ� ��������
// �������� AR �۷��� �ѹ� �Ẹ��ʹ�

/*
#include <iostream>

using namespace std;

class Pet
{};

class Obj
{
public:
	int lv = 0;
public:
	void operator++() { cout << "������" << endl; } //++b;
	void operator++(int) { lv++; } // b++;
};

int main()
{
	int a = 0;
	a++;
	++a;

	Obj b;
	b++;
	++b;

	cout << b.lv << endl;


	return 0;
}
// �̹����� ����ü ��� ��밡���Ѱ�.
*/
//20�и� ���ϸ� ���� ���� �������� AR �۷��� �ƿ� �����ؼ� �߹����� ��ƾ��� ����� ���
// ���� ���ǳ��� �Ӹ��ӿ� �� �ȵ��´�.
/*
#include <iostream>

using namespace std;

class Obj
{
public:
	int a;
	int b;
public:
	Obj() = default;
	Obj(const Obj& other)
	{
		cout << "Copy" << endl;
	}
	Obj& operator=(const Obj& other)
	{
		cout << "Operator=" << endl;
		return *this;
	}

};

int main()
{
	Obj a;
	a.a = 1;
	a.b = 2;

	Obj b = a;
	Obj c;
	c = a;
	cout << "c.a : " << c.a << " / c.b : " << c.b << endl;


	return 0;
}
*/