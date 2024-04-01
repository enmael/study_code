#include <iostream>
using namespace std;
/*
//����
//��ȯ�� �Լ��̸�(�Ű����� ���) {������ ���ϰ�; }

int A(int a, int b)
{
	cout << "A" << endl;
	return a + b; //����
}


int main()
{
	int result = 0;
	result = A(1, 2);

	//��ȯ�� �����൵ ��
	result = [](int a, int b)
		{
			cout << "Lambda" << endl;
			return a + b;  // ���� // ���ϰ��� �������� ��ȯ���� ����
		}(1, 2);
		return 0;
}
*/
/*
#include <iostream>
using namespace std;


int main()
{

	int numA = 1;
	int numB = 2;

	//���ε� �Ҵ�� numA & numB ���ٿ� ����.
	//int numA = numA(1); �����ؼ� ���� �־���
	//int numB = numB(2); �����ؼ� ���� �־���

	[numA, numB]() { cout << numA << " / " << numB << endl; }();



	return 0;
}
*/
/*
#include <iostream>
using namespace std;

//���ε� �Ҵ�� numA & numB A�Լ��� ����.
//int numA = numA(1); �����ؼ� ���� �־���
//int numB = numB(2); �����ؼ� ���� �־���
void A(int numA, int numB)	 //int numA = 1; int numB = 2;
{
	cout << numA << " / " << numB << endl;
}

int main()
{
	int numA = 1;
	int numB = 2;

	A(numA, numB);


	[numA, numB]() { cout << numA << " / " << numB << endl; }();


	return 0;
}
*/
/*
#include <iostream>
using namespace std;

//����
//��ȯ�� �Լ��̸�(�Ű����� ���) {������ ���ϰ�; }
int A(int a, int b)
{
	cout << "A" << endl;
	return a + b; //����
}

int main()
{
	int result = 0;
	result = A(1, 2);

	//��ȯ�� �����൵ ��
	result = [](int a, int b)
		{
			cout << "Lambda" << endl;
			return a + b;  // ���� // ���ϰ��� �������� ��ȯ���� ����
		}(1, 2);
		return 0;

}
*/
/*
#include <iostream>
using namespace std;

int main()
{
	int numA = 1;
	int numB = 2;
	int numC = 3;
	int numD = 4;

	cout << "numA : " << &numA << endl;
	cout << "numB : " << &numB << endl;
	cout << "numC : " << &numC << endl;
	cout << "numD : " << &numD << endl;

	cout << "=========================" << endl;

	[=, &numA, &numB]()
		// �׷��ϱ�� = �����ϸ� ���� �����ϴ°Ű� & ������ϸ� �����ؼ� �������°Ŷ� ���� ���̶� �Ʒ����̶� ���� �ּҰ� ���´�
		// ���̷��� ����� �ּҸ� ��� �����ϴ±��� 
		// &numA ���� �̷��� �ϳ� �ϳ� �ʿ��Ѱ͸� �����ͼ� ����Ҽ��� �ְ� �� ����� ������ �� ����Ҽ����ִ� �̰ų�
		// �ٵ� ���� ���� �ϰ� �������ϴ� �̻��� ���� �Ұ���
		// ��ȣ�� �̰� �� ����ֳ� �������� Ư������ �����ͼ� ����Ѵٴ� �����ΰ�
		{
			cout << "numA : " << &numA << endl;
			cout << "numB : " << &numB << endl;
			cout << "numC : " << &numC << endl;
			cout << "numD : " << &numD << endl;

		}();


		return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
	void(*p)(int, int);
	p = [](int a, int b) {cout << "Hello world" << endl; };

	cout << "=====================" << endl;
	p(1, 2);

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

void Print(int(*p)(int, int))
{
	cout << p(1, 2) << endl;
}

int main()
{

	cout << "=====================" << endl;
	Print([](int a, int b) {return a + b; });

	return 0;
}
*/

