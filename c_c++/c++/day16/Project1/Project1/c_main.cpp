/*
#include <iostream>

using namespace std;

int main()
{
	//�ް� (Left value)
	//(L value)
	//int x;
	//������ (Right value)
	//(R value)
	int x = 5; //������: temp

	return 0;
}
*/
/*
�ް� (Lvalue)

����: �ް�(Lvalue, Locator value)�� �޸� �� ��Ȯ�� ��ġ�� ������, �ش� ��ġ�� ���� �ĺ��� �� �ִ� ǥ������ �ǹ��մϴ�. ��, �Ҵ��� ����� �� �� �ִ� ������ ��ü�Դϴ�.

Ư¡: �ް��� �� ��ü�� �޸� ���� �ּҸ� ������ �����Ƿ�, �ٸ� ������ �� �ּҸ� �Ҵ��ϰų� ������ ����� �� �ֽ��ϴ�.

����: ���� �̸�, �迭�� ���, ������ ��ȯ�ϴ� �Լ� ���� �ֽ��ϴ�.

������ (Rvalue)

����: ������(Rvalue, Right value)�� �ӽ����̰ų� �Ҵ繮�� �����ʿ��� ������ �� �ִ� ǥ������ �ǹ��մϴ�. �������� �޸� �󿡼� ��Ȯ�� ��ġ�� ���ų�, ���α׷� �ڵ忡�� ���� ������ �� ���� �ӽ� ���Դϴ�.

Ư¡: �������� �Ϲ������� �����͸� �����ϰų� �����ϱ� ���� �ӽ� ��ü�� ���ͷ� ������ ���˴ϴ�. �������� �̵� ����ƽ(move semantics)�� ������ ������, ������ ����(&&)�� ���� �̷��� �ӽ� ���� ���ҽ��� ȿ�������� �ٸ� ��ü�� ������ �� �ֽ��ϴ�.

����: ���ͷ� ��(5, 'a'), �ӽ� ��ü(std::string("hello")), ǥ������ ���(getX() + 1) ���� �ֽ��ϴ�.
*/

/*
#include <iostream>

using namespace std;

struct Obj
{
	int x;
	int y;

	Obj() = default;
	Obj(int _x, int _y) : x(_x), y(_y) {}

};

int main()
{
	Obj a; // stack
	a.x = 0;
	a.y = 0;

	cout << "a.x : " << a.x << " / " << "a.y : " << a.y << endl;

	a = Obj(1, 2); // <- �ӽð�ü

	cout << "a.x : " << a.x << " / " << "a.y : " << a.y << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

static void Test(const int& num)
{
	//���� �����°� ������ 
	cout << "���� : " << num << endl;
	cout << "num �ּ� : " << &num << endl;
	//���� �־��ִ°� �ȵ�
	//num = 12;
}

int main()
{
	const int& temp = 5;
	Test(5);

	return 0;
}
*/
/*
#include <iostream>
using namespace std;

//������ == �ӽð�
//��� �ӽð� �̴ϱ� �Լ����� �޾�����
//�ӽð��� ������ ���� �ϴ��� �ܺζ� �ƹ� ��������ϱ�
//���� ����Ҳ�
static void Test(int&& num)
{
	cout << "������ ���� : " << num << endl;
	num = 12;
	cout << "������ ���� : " << num << endl;
}

int main()
{
	Test(5);

	return 0;
}*/
// ������ ���̽��� ���� ���� �� �����ؾߵǴ� c��� ���� ���̽��� ���� �׸��� �� ������ ���� �������� ���� ��

/*
#include <iostream>

using namespace std;

class Obj
{
public:
	int num = 0;
public:
	//1.
	Obj() { cout << "������" << endl; }
	Obj(int a) { num = a;  cout << num << "������" << endl; }
	//2.
	Obj(Obj& other) noexcept { cout << "�ް� ���� ���� ������" << endl; }
	Obj(Obj&& other) noexcept { cout << "������ ���� ������" << endl; }
public:
	//3.
	//this == �Ҵ�� �� Ŭ���� �ּ�
	Obj& operator=(Obj&& other)noexcept { cout << "������ ���� ���� operator" << endl; return *this; }
};

Obj CreateObj()
{
	cout << "===============" << endl;
	//1
	return Obj(1);
}


int main()
{
	//1.
	Obj a;
	cout << "===============" << endl;

	//2
	Obj b(a);

	Obj d = CreateObj();  // 1	Obj b(CreateObj()); or Obj b(Obj());

	//1.
	Obj c;
	//3.
	c = CreateObj();


	return 0;
}
*/

//���� �Ұ� (Copy Elision)

//���� �ҰŴ� �����Ϸ��� ��ü�� ���� �Ǵ� �̵� ������ ȣ���� �����Ͽ� ��ü�� ���� ������ �� �ֵ��� �ϴ� ����ȭ ����Դϴ�.Ư��, �ӽ� ��ü�� ��ȯ�ϴ� �Լ����� �� ����ȭ�� ���� �߻��մϴ�.
