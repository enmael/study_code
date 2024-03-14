//2024. 03. 14
//3일차 강의내용
/*
#include <iostream>

class Cat
{
	//데이터?
	const char* name;	//이름
	char type;			//종류 
	int age;			//나이
	float height;		//키
	float weight;		//몸무게
	
	//태어났을때?
	Cat(const char* _name)
	{
		name = _name;
		std::cout << name << "이 세상에 강림함" << std::endl;
		std::cout << "야옹" << std::endl;
	}
	~Cat()
	{
		std::cout << name << "썩 괜찮은 인생이였다!!!!!" << std::endl;
	}
	//기능은 무엇이며?
};
*/
//어디에 할당할것인지? 데이터?

#include <iostream>

class Cat
{
public:
	const char* name;
public:
	Cat() {}
	Cat(const char* _name) : name(_name)
	{
		std::cout << name << " 고양이 생성" << std::endl;
	}

	~Cat()
	{
		std::cout << name << "고양이 소멸" << std::endl;
	}


};

Cat cat1("야옹이1");

int main()
{
	Cat cat2("야옹이2");

	new Cat("야옹이3");


	return 0;
}
