/*
#파일 생성 날짜 : 2024 03 19
#작성자 : 장승배
#프로젝트 파일명 :
#파일명 : 
#내용 :	
	- 학생관리 프로그램을 최대한 메인에 아무것도 안두고 만들어보자.
	- day6강의내용
	- 상속에 관한 내용이다 
#수정사항 :  
*/
/*
#include <iostream>
int number1;
struct Student
{
	char name[20];
	int age;
	int number; // 학생 번호

};
void search() {

}
int main()
{
	while (true)
	{
		std::cout << "1. 입력, 2.편집, 3.삭제, 4.출력, 0.나가기" << std::endl;
		//int number1; // 메뉴를 선택하기위한 변수값 저장
		std::cin >> number1;
		std::cout << "입력한 숫자" << number1 << std::endl;
		Student octopus[1];
		int i = 0;
		if (number1 == 1)
		{
			std::cout << "1. 입력모드 입니다!!" << std::endl;
			std::cout << "학번을 입력하세요" << std::endl;
			std::cin >> octopus[i].number;
			std::cout << "이름을 입력하세요!" << std::endl;
			std::cin >> octopus[i].name;
			std::cout << "나이를 입력하세요!" << std::endl;
			std::cin >> octopus[i].age;

			std::cout << "입력된 정보는" << std::endl;
			std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
			i++;

		}
		else if (number1 == 2)
		{
			std::cout << "2. 편집모드 입니다!!" << std::endl;
			std::cout << "편집할 학생의 학번을 입력하세요!!" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				int number3 = 0;
				std::cout << "학생의 편집할것을 고르세요 1.학번 2.이름 3.나이" << std::endl;
				std::cin >> number3;
				if (number3 == 1)
				{
					std::cout << "학번 변경" << std::endl;
					std::cin >> octopus[i].number;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else if (number3 == 2)
				{
					std::cout << "이름 변경" << std::endl;
					std::cin >> octopus[i].name;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else if (number3 == 3)
				{
					std::cout << "나이 변경" << std::endl;
					std::cin >> octopus[i].age;
					std::cout << "변경된 정보" << std::endl;
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				}
				else
				{
					std::cout << "메뉴에 없는 숫자입니다" << std::endl;
				}
			}
			else
			{
				std::cout << "존재하지 않는 학번입니다" << std::endl;
			}

		}
		else if (number1 == 3)
		{
			std::cout << "3. 삭제모드 입니다!!" << std::endl;
			std::cout << "삭제할 학생의 학번을 입력하세요" << std::endl;
			std::cout << "학생의 학번을 입력하세요" << std::endl;
			int number2 = 0;
			i = 0;
			std::cin >> number2;
			if (number2 == octopus[i].number)
			{
				std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;
				octopus[i].number = NULL;
				octopus[i].age = NULL;
				std::cout << "삭제 완료" << std::endl;
			}
			else
			{
				std::cout << "존재하지 않는 학번입니다" << std::endl;
			}
		}
		else if (number1 == 4)
		{
			std::cout << "4. 출력모드 입니다!!" << std::endl;
			std::cout << "전체 학생 리스트 보기는 1, 특정학생보기는2" << std::endl;
			int number3 = 0;
			std::cin >> number3;
			if (number3 == 1)
			{
				std::cout << "아직 작동하지 않는 기능입니다" << std::endl;
				//std::cout << "전체 학생 리스트 보기는 입니다"<< std::endl;
				//for (int j = 0; j < 2; j++)
				//{
				//	std::cout << "학번:" << octopus[j].number << "이름:" << octopus[j].name << "나이:" << octopus[j].number << std::endl;
				//}
			}
			else if (number3 == 2)
			{
				std::cout << "특정학생보기는 입니다" << std::endl;
				std::cout << "학생의 학번을 입력하세요" << std::endl;
				int number2 = 0;
				i = 0;
				std::cin >> number2;
				if (number2 == octopus[i].number)
				{
					std::cout << "학번:" << octopus[i].number << "이름:" << octopus[i].name << "나이:" << octopus[i].age << std::endl;

				}
				else
				{
					std::cout << "존재하지 않는 학번입니다" << std::endl;
				}
			}
			else
			{
				std::cout << "메뉴값이 아닙니다" << std::endl;
			}
		}
		else if (number1 == 0)
		{
			std::cout << "프로그램 종료" << std::endl;
			break;
		}
		else
		{
			std::cout << "메뉴에 없는 선택지 입니다 다시 입력해주세요!!!!" << std::endl;
		}
	}
	return 0;
}
*/
/*
//오늘 집에가서 클래스에 대해서 다시 복습하고 상속에 대해서 공부한다
//상속 
// 부모 클라스 - 자식 클라스
// Parent class -Child class
//	Base  class - Derived class
// super class - sub class
// 다 같은 특징이다

#include <iostream>
using namespace std;

//Inheritance(상속)
//부모 클라스 - 자식 클라스

//Parent class - Child class
//Base class - Derived class
//super class - sub class

class Animal
{};

class Dog : public Animal
{};
class Cat : public Animal
{};
class Human : public Animal
{};

// 공통된 특징을 묶어서 작동시킨다 
int main()
{


	return 0;
}
*/
/*
#include <iostream>
// 그러니까 각 특징중 모든 가지고 있는 부분을 부모로 만들어버리면 
// 반복되는 노가다성 작업을 줄일수있다 이건가??
//class 끼리 반복 되는 부분을 그런식으로 처리를한다.??
class Animal
{
public:
	const char* name;
	int age;
	float weight;
public:
	void Eat() { std::cout << "냠냠" << std::endl; }
};

class Dog : public Animal
{
public:
	void Bark() { std::cout << "멍멍" << std::endl; }
};

class Cat : public Animal
{
public:
	void Cry() { std::cout << "야옹" << std::endl; }
};

class Cow : public Animal
{

public:
	void  Rumination(){ std::cout << "뿡" << std::endl; }
};

int main()
{
	Dog dog;
	dog.Eat();
	dog.Bark();

	Cat cat;
	cat.Eat();
	cat.Cry();

	Cow cow;
	cow.Eat();
	cow.Rumination();

	return 0;
}
*/
// 프라이빗만 받는다 .
//

/*
#include <iostream>
class Animal
{
private:
	int a;
protected:
	int b;
public:
	int c;
public:
	int d;
public:
	void Test()
	{
		a = 1;
		b = 2;
		c = 3;
	}
};

class Dog : public Animal
{
public:
	void Test2()
	{
		//a = 1;
		b = 2;
		c = 3;
	}
};

int main()
{
	Dog dog;

	//dog.b = 2;
	dog.d = 2;
	dog.c = 3;

	return 0;
}
*/
// 

// 괸장이 어려운것이다 
//그래서 그런가 지금내 머리로 이해가 안된다 
// 그냥 상태가 그래
/*
#include <iostream>

class Animal
{
public:
	Animal() { std::cout << "Animal 생성자" << std::endl; }
	Animal(int num) { std::cout << "Animal 생성자 : " << num << std::endl; }
	~Animal() { std::cout << "Animal 소멸자" << std::endl; }

};

class Dog : public Animal
{
public:
	Dog() { std::cout << "Dog 생성자" << std::endl; }
	Dog(int num) : Animal(num)
	{
		//Animal::Animal(num);

		std::cout << "Dog 생성자 : " << num << std::endl;
	}
	~Dog() { std::cout << "Dog 소멸자" << std::endl; }
};

int main()
{
	Dog dog(1);

	return 0;
}
*/

// 상속은 어떤구조인다
 /*
#include <iostream>
class Animal
{
public:
	char a;
	char b;

};

class Dog : public Animal
{
public:
	char c;
	char d;

};
// animal + dog 해서 주소가 순서대로 출력이되는것이다???
int main()
{
	Dog dog;

	printf("a : %p\n", &dog.a);
	printf("b : %p\n", &dog.b);
	printf("c : %p\n", &dog.c);
	printf("d : %p\n", &dog.d);

	return 0;
}

*/

/*
// 이거 집에가서 복습한다 젠장
#include <iostream>

class Animal
{
public:
	char a;
	char b;
};

class Dog : public Animal
{
public:
	char c;
	char d;
};



int main()
{
	Dog* dog = new Dog;
	//Dog == [][]<-Animal + [][] Dog 추가

	Animal* animal = dog;

	animal->a = 12;
	printf("a : %d\n", dog->a);

	Dog* other = (Dog*)animal;
	other->c = 12;
	printf("c : %d\n", dog->c);

	printf("a : %p\n", &dog->a);
	printf("b : %p\n", &dog->b);
	printf("c : %p\n", &dog->c);
	printf("d : %p\n", &dog->d);

	return 0;
}
*/

// 클래스 값 가져오고 날리면 쓰레기값이 들어간다 ?
// 할당된 값을 NEW 날리면 이상한 쓰레기값이 들어가니 무존건 NULLPTR로 지워버리기
/*
#include <iostream>

struct Dog
{
public:
};


int main()
{
	//
	Dog* animal = (Dog*)malloc(1);
	printf("%p\n", animal);
	delete animal;
	printf("%p\n", animal);
	animal = nullptr;

	return 0;
}
*/
// 리몬컨 처럼 사용한다, 형변형 하면서 사용 
/*
#include <iostream>

class Animal
{
public:
	char a;

};

class Dog : public Animal
{
public:
	char b;	//a[]b[]

};

class Cat : public Animal
{
public:
	char b;	//a[]b[]c[]
	char c;
};


class Human : public Animal
{
public:
	char b;  //a[]b[]c[]d[]
	char c;
	char d;

};

Animal* animal = nullptr;
int main()
{
	animal = new Dog;
	delete animal;
	
	Human* a = (Human*)animal;
	a->d = 12;

	animal = nullptr;

	animal = new Cat;
	delete animal;
	animal = nullptr;

	animal = new Human;

	Human* b = (Human*)animal;

	delete animal;

	return 0;
}
//포인터에 대해서 복습좀 해라 이놈아 머리가 안굴러가는것 같다
*/
//네임스페이스 쓰는 이유 는 
/*
#include <iostream>

using namespace std;

namespace A
{
	void Print()
	{
		cout << "안녕하세요" << endl;
	}

}

namespace B
{
	void Print()
	{
		cout << "Hello world" << endl;
	}

}

using namespace A;

int main()
{
	Print();
	B::Print();




	return 0;
}
*/
// 가상함수????
// 헷갈리네 ㅇㅂ ㅈㅅ ㅊㄹ 
// 부모를 통해서 자식을 호출할수있다
// 자식게 없으면 부모꺼만 호출
// 
/*
#include <iostream>

using namespace std;

class Character
{
public:
	virtual void Attack()
	{
		cout << "Character 공격" << endl;
	}
};

class Player : public Character
{
public:
	void Attack()
	{
		cout << "Player의 공격" << endl;
	}
};

class Enemy : public Character
{
public:
	void Attack()
	{
		cout << "Enemy Atttack" << endl;
	}
};

class NPC : public Character
{};

int main()
{

	Character* p = new Player;
	p->Attack();


	delete p;
	p = new Enemy();
	p->Attack();

	return 0;
}
*/