#include <iostream>
using namespace std;
/*
//구현
//반환형 함수이름(매개변수 목록) {구현부 리턴값; }

int A(int a, int b)
{
	cout << "A" << endl;
	return a + b; //정수
}


int main()
{
	int result = 0;
	result = A(1, 2);

	//반환형 안해줘도 됨
	result = [](int a, int b)
		{
			cout << "Lambda" << endl;
			return a + b;  // 정수 // 리턴값이 정해지니 반환형도 나옴
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

	//새로된 할당된 numA & numB 람다에 속함.
	//int numA = numA(1); 복사해서 값을 넣어줌
	//int numB = numB(2); 복사해서 값을 넣어줌

	[numA, numB]() { cout << numA << " / " << numB << endl; }();



	return 0;
}
*/
/*
#include <iostream>
using namespace std;

//새로된 할당된 numA & numB A함수에 속함.
//int numA = numA(1); 복사해서 값을 넣어줌
//int numB = numB(2); 복사해서 값을 넣어줌
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

//구현
//반환형 함수이름(매개변수 목록) {구현부 리턴값; }
int A(int a, int b)
{
	cout << "A" << endl;
	return a + b; //정수
}

int main()
{
	int result = 0;
	result = A(1, 2);

	//반환형 안해줘도 됨
	result = [](int a, int b)
		{
			cout << "Lambda" << endl;
			return a + b;  // 정수 // 리턴값이 정해지니 반환형도 나옴
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
		// 그러니까ㅣ = 으로하면 값만 복사하는거고 & 을사용하면 참조해서 가져오는거라 위에 놈이랑 아래놈이랑 같은 주소가 나온다
		// 아이래서 사람이 주소를 찍어 봐야하는군아 
		// &numA 따로 이렇게 하나 하나 필요한것만 가져와서 사용할수도 있고 값 복사랑 참조랑 썩어서 사용할수도있다 이거네
		// 근데 참조 먼저 하고 값복사하는 이상한 경우는 불가능
		// 오호라 이거 참 재미있네 서버에서 특정값만 가져와서 사용한다는 느낌인가
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

