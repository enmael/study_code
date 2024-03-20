/*
#include<iostream>
struct Student
{
	char kor;
	char eng;
	char math;

	//+
	void Eat() {}
};

Student a;//[][][]

int main()
{
	a.Eat();

	Student a;//[][][]
	a.Eat();

	Student* p = new Student;//[][][]
	p->Eat();

}
*/
/*
#include <iostream>

class Human
{
	//todo

};

class Monkey
{
	//todo
};

Monkey monkeyKing; // 세상이 멸망해야 사라지느놈 

int main()
{
	Human humans[2];

	Monkey a;
	Monkey b;
	Monkey c;
	Monkey d;

	return 0;

}
*/
// 아이패드를 한번 클래스로 표현해보자
/*
#include<iostream>
class Ipad
{
public:
	char number;
	int year;
	float weight;
	float width;
	float length;
};
 

int main()
{
	Ipad mimi5;
	mimi5.number = 12123121;
	std::cout << mimi5.number << std::endl;
	return 0;

}
*/
/*
#include<iostream>

class Human
{
protected:
	int lv = 1;
public:
	void LevelUp()
	{
		lv++;
	}

	int GetLv()
	{
		return lv;
	}
};

class Enemy : public Human
{
};

class NPC : public Human
{
};


int main()
{
	Human player;
	Enemy enemy;
	NPC npc;
	//npc.lv = 12;

	return 0;

}
*/
#include <iostream>

class Human
{
public:
	void A() {}
};


class Player : public Human
{
public:
	void A() {}
	void B() {}
};

int main()
{
	Human* p = new Player;

	((Player*)p)->B();


	return 0;

}