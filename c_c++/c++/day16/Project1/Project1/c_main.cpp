/*
#include <iostream>

using namespace std;

int main()
{
	//왼값 (Left value)
	//(L value)
	//int x;
	//오른값 (Right value)
	//(R value)
	int x = 5; //오른값: temp

	return 0;
}
*/
/*
왼값 (Lvalue)

정의: 왼값(Lvalue, Locator value)은 메모리 상에 명확한 위치를 가지며, 해당 위치를 통해 식별될 수 있는 표현식을 의미합니다. 즉, 할당의 대상이 될 수 있는 변수나 객체입니다.

특징: 왼값은 그 자체로 메모리 상의 주소를 가지고 있으므로, 다른 변수에 그 주소를 할당하거나 참조로 사용할 수 있습니다.

예시: 변수 이름, 배열의 요소, 참조를 반환하는 함수 등이 있습니다.

오른값 (Rvalue)

정의: 오른값(Rvalue, Right value)은 임시적이거나 할당문의 오른쪽에만 존재할 수 있는 표현식을 의미합니다. 오른값은 메모리 상에서 명확한 위치가 없거나, 프로그램 코드에서 직접 참조할 수 없는 임시 값입니다.

특징: 오른값은 일반적으로 데이터를 저장하거나 전달하기 위해 임시 객체나 리터럴 값으로 사용됩니다. 오른값은 이동 세맨틱(move semantics)과 관련이 깊으며, 오른값 참조(&&)를 통해 이러한 임시 값의 리소스를 효율적으로 다른 객체로 이전할 수 있습니다.

예시: 리터럴 값(5, 'a'), 임시 객체(std::string("hello")), 표현식의 결과(getX() + 1) 등이 있습니다.
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

	a = Obj(1, 2); // <- 임시객체

	cout << "a.x : " << a.x << " / " << "a.y : " << a.y << endl;
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

static void Test(const int& num)
{
	//값을 꺼내는건 되지만 
	cout << "참조 : " << num << endl;
	cout << "num 주소 : " << &num << endl;
	//값을 넣어주는건 안됨
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

//오른값 == 임시값
//얘는 임시값 이니까 함수에서 받았을때
//임시값을 지지고 볶고 하더라도 외부랑 아무 상관없으니까
//내가 사용할께
static void Test(int&& num)
{
	cout << "오른값 참조 : " << num << endl;
	num = 12;
	cout << "오른값 참조 : " << num << endl;
}

int main()
{
	Test(5);

	return 0;
}*/
// 난역시 파이썬이 좋아 무슨 개 지랄해야되는 c언어 보다 파이썬이 좋아 그리고 난 윈도우 보다 리눅스가 좋다 리

/*
#include <iostream>

using namespace std;

class Obj
{
public:
	int num = 0;
public:
	//1.
	Obj() { cout << "생성자" << endl; }
	Obj(int a) { num = a;  cout << num << "생성자" << endl; }
	//2.
	Obj(Obj& other) noexcept { cout << "왼값 참조 복사 생성자" << endl; }
	Obj(Obj&& other) noexcept { cout << "오른값 참조 생성자" << endl; }
public:
	//3.
	//this == 할당된 내 클라스의 주소
	Obj& operator=(Obj&& other)noexcept { cout << "오른값 참조 대입 operator" << endl; return *this; }
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

//복사 소거 (Copy Elision)

//복사 소거는 컴파일러가 객체의 복사 또는 이동 생성자 호출을 생략하여 객체를 직접 생성할 수 있도록 하는 최적화 기법입니다.특히, 임시 객체를 반환하는 함수에서 이 최적화가 자주 발생합니다.
