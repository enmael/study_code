// 어 드디어 스택이 끝이났다 드디어!!!!
#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Stack
{
private:
	int* arr = new int[MaxCount];
	int* data = new int[MaxCount]; // -99로 밀 예정
	int count = 0;
public:
	void Clear();   //자료를 지워주는 함수 O
	int Count();	//갯수가 몇개인가? O
	bool IsEmpty(); //비어 있는지 아닌지 알려주는 함수
	bool Push(int _data); //[11][22][0][0][0]->(_data(33))->[11][22][33][0][0]->return true;


	int Pop(); //값 빼주는거 

	void Line(); // 확인용

public:
	//생성자에서
	Stack();
};