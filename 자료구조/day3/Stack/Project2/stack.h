#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Stack
{
private:
	int data[MaxCount] = { 0,2,1,3,0 }; // data:[0][0][0][0][0]
	int count = 0;			 // count: 0  data:[21][3][40][0][0] ->	 3
public:
	//자료를 지워주는 함수
	void Clear();			//[21][3][40][0][0] ->[0][0][0][0][0] & count : 0
	//현재 들어간 자료의 갯수가 몇개인지 알려주는 함수
	int Count(); //data: [21][3][40][0][0] return 3;
	//비어 있는지 아닌지 알려주는 함수
	bool IsEmpty();//[0][0][0][0][0] return true; / [11][0][0][0][0]  return false; 

	//값을 넣어주는 함수(_data :추가할 데이터)
	//값이 들어가면 true
	//값이 못들어가면 false
	bool Push(int _data); //[11][22][0][0][0]->(_data(33))->[11][22][33][0][0]->return true;

	//값을 빼주는 함수
	//호출 한번 할때마다 반환이 되야함.
	//Pop할것이 없음 NULL 반환
	int Pop(int a); //[11][22][0][0][0]->[11][0][0][0][0]->return 22;

	void Line();

public:
	//생성자
	Stack();



};

