// 2024 _03_12
/*
#include<iostream> // 입출력 함수

struct A
{

};


int main()
{
	printf("Hello world : %d\n", 12);
	std::cout << "Hello world" << 12 << std::endl;
	
	//1
	A* a;
	//malloc(size);
	a = (A*)malloc(sizeof(A));  // Heap
	//+ A정보도 추가
	
	//2
	a = new A;					// Heap
	// 그러니까 1이랑 2랑 같은거라고 오우야

	return 0;

}
*/

//기본 데이터에 기능을 포함 할수있다
//데이터 + 기능 = 세상의 이치를 표현할수 있다?????
//이런식으로 표현하는 이유 : 데이터에 기능을 넣으면 모든 객체를 표현 할수 있다!!!!
//우리가 배우는거 구조체 를 클래스로 바뀌고 그러니까 클래스에 대해서 배운다!!!
//객체 지향의 뜻 : 가상세계에서의 메모리 할당 
//클라스와  객체 지향을 하는 이유  : 사람은 바보다 
//추상화 == 편경 
//이건 이거다라고 생각하는거
//개념을 묶어버리는거???
//한번에 인간이 받아 드릴수 있는데는 한계가 있다 
//그래서 자료를 묶어 버리면 편하게 일을 할수있다!!!!
//추상화 : 중요한 특징을 찾아서 퉁쳐둔거  
// 그러니까
// 데이터랑 기능을 합쳐서 모든걸 표현하자
// 그래서 요즘 나온 언어는 객체지향 언어이다 
// 객체 지향은 구조체에서 확장된 개념이다
// 객체지향과 클래스 등등의 개념에 대해서 이해하라 이놈아 
/*
#include <iostream>

struct Human
{
	const char* name;
	int age;
	float height;
	float weight;

	void Eat()
	{
		std::cout << name << "이가 밥을 먹다." << std::endl;
	}
	void Sleep()
	{
		std::cout << name << "이가 잠을 잔다." << std::endl;
	}
	void Defecate()
	{
		std::cout << name << "이가 볼일을 본다." << std::endl;
	}

};

int main()
{
	//데이터 + 기능
	Human human1;
	human1.name = "사람";
	human1.age = 1;
	human1.height = 50.0;
	human1.weight = 25.0;

	human1.Eat();
	human1.Sleep();
	human1.Defecate();



	return 0;
}
*/
// 기능과 데이터를 합쳐서 앞에 보이는 사물을 한번 표현해봐라
/*
#include <iostream>
struct fountain_pen
{
	const char* name;
	int Date_Manufacture;
	float height;
	float weight;
	
	void write()
	{
		std::cout << name << "를 종이에 쓰다." << std::endl;
	}
	void charge()
	{
		std::cout << name << "의 잉크를 충전하다." << std::endl;
	}
};

int main()
{
	fountain_pen kaweco;
	kaweco.name = "sports";
	kaweco.Date_Manufacture = 2023;
	kaweco.height = 5.0;
	kaweco.weight = 200.0;
	kaweco.write();
	kaweco.charge();

	fountain_pen parker;
	kaweco.name = "51";
	kaweco.Date_Manufacture = 2024;
	kaweco.height = 5.0;
	kaweco.weight = 200.0;
	kaweco.write();
	kaweco.charge();

	return 0;
}
*/
//가상세계
//객체지향은 똑똑한 사람을 위한것이아니라 그냥 일반적인 사람 
//0.001이 세상을 끌어가고 나머지가 99%가 끌려간다
//이세상이 시물레이션지 아닌지 나오는 개념이다

/*
#include <iostream>
struct Human
{
	const char* name;

	//메모리에 할당되었을때 호출되는 함수
	//생성자 : 생성되었을때 호출 되는 함수 구조체이름()
	Human()
	{
		std::cout << "태어남" << std::endl;
	}
	//메모리에서 해제 되었을대 호출되는 함수
	//소멸자 : 소멸되었을때 호출 되는 함수 ~구조체이름()
	~Human()
	{
		std::cout << "태어남" << std::endl;
	}

};

int main()
{



	return 0;
}
*/
/*
#include <iostream>
struct Human
{
	const char* name;

	//메모리에 할당되었을때 호출되는 함수
	//생성자 : 생성되었을때 호출 되는 함수 구조체이름()
	Human()
	{
		std::cout << "태어남" << std::endl;
	}
	//메모리에서 해제 되었을대 호출되는 함수
	//소멸자 : 소멸되었을때 호출 되는 함수 ~구조체이름()
	~Human()
	{
		std::cout << "죽음" << std::endl;
	}

};

Human human; //  태어남
// 그러니까 이세상 main이 태어나기 전부터 존재 했으면 이 세상이 망하면 같이 소멸한다

int main()
{	
	int kaweco; // 세상이 만들어지고 난뒤로 만들어지고 세상이 끝나면 소멸하는 존재
	std::cout << "main 함수 시작" << std::endl;


	std::cout << "Hello world" << std::endl;




	std::cout << "Return 0" << std::endl;
	return 0;
}
*/

/*
#include <iostream>

struct Human
{
	const char* name;

	//메모리에 할당되었을때 호출되는 함수
	//생성자 : 생성되었을때 호출 되는 함수 구조체이름()
	Human()
	{
		std::cout << "태어남" << std::endl;
	}
	//메모리에서 해제 되었을대 호출되는 함수
	//소멸자 : 소멸되었을때 호출 되는 함수 ~구조체이름()
	~Human()
	{
		std::cout << "죽음" << std::endl;
	}

};

int main()
{
	// 그러니까 우리 신(프로그래머)가 main 이라는 세상을 만들었는데
	// main 이라는 세상을 없애도 살아남는 존재가 Human 이라는 존재이다
	// 우리가 만들었는데 가미 창조주가 없애는데도 살아남아
	// 그러니 손수 없애주마 해서 delete 로 죽여버린다
	// 주소로 삭제 한다
	Human* p = new Human;

	std::cout << "delete 전" << std::endl;

	delete p;  // delete 주소;
	//주소로 가서 할당된 아이 지움

	std::cout << "delete 후" << std::endl;

	return 0;
}
*/
/*
#include <iostream>
struct Human
{
	// 변수 + 함수 
	const char* name;
	// 생성되면 작동하는 함수
	Human()
	{
		std::cout << "태어남" << std::endl;
	}

	// 생성자 오버로딩
	

	// 소멸되면 작동되는 함수
	~Human()
	{
		std::cout << name << "죽음" << std::endl;
	}

};

int main()
{
	Human a;
	a.name = "a";
	Human b;
	b.name = "b";
	// 선입 후출 
	return 0;
	// 자료 구조 스텍??
	// 스텍 메모리??????
	// 스택 메모리 != 자료 구조의 스택
	// 둘은 다르다 

}
*/

#include <iostream>

struct Human
{
	const char* name;

	//변수 + 함수

	// 메모리 할당 시켜주는거 아님
	//함수 : 할당되었을때 호출  == 생성자 == constructor
	Human()
	{
		std::cout << "태어남" << std::endl;
	}

	//함수 : 생성자 오버로딩 over loading
	Human(const char* _name)
	{
		name = _name;
		std::cout << name << "태어남" << std::endl;
	}

	//함수 : 소멸 되었을때 호출  == 소멸자 == destructor
	~Human()
	{
		std::cout << name << "죽음" << std::endl;
	}

};

int main()
{
	Human a;
	a.name = "a";
	//위에 것과 아래을것 같으며 그리고 사용하려면 추가 적인 작업을 해줘야한다.
	Human b("b");


	return 0;
}