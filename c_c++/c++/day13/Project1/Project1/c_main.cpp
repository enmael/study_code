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
	//반환형 operator 연산자(매개변수들)
	//{}
	// 사칙연산이 모두 가능하군아!!!!!!!!!!!!
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
//이거 대허서 잘모르겠다
//아직 까지 노가다를 안해서 그런것 같다 라는 생각이든다.
//집에 가서 AR 글래스로 닌텐도 스위치 해보고싶다.
//오우 세상에 미친세상아 크아 
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

//반환형 operator연산자(매개변수들)
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

//  operator를 어떻게 사용해야되는지 모르겠다 ㅇㅂㄴㅇ
// 집에가서 AR 글래스 한번 써보고싶다

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
	void operator++() { cout << "레벨업" << endl; } //++b;
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
// 이물건을 도대체 어디에 사용가능한가.
*/
//20분만 더하면 집에 간다 집에가서 AR 글래스 맥에 연결해서 야무지게 놀아야지 쿠쿠루 삥뽕
// 오늘 강의내용 머리속에 잘 안들어온다.
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