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
	//�ڷḦ �����ִ� �Լ�
	void Clear();			//[21][3][40][0][0] ->[0][0][0][0][0] & count : 0
	//���� �� �ڷ��� ������ ����� �˷��ִ� �Լ�
	int Count(); //data: [21][3][40][0][0] return 3;
	//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool IsEmpty();//[0][0][0][0][0] return true; / [11][0][0][0][0]  return false; 

	//���� �־��ִ� �Լ�(_data :�߰��� ������)
	//���� ���� true
	//���� ������ false
	bool Push(int _data); //[11][22][0][0][0]->(_data(33))->[11][22][33][0][0]->return true;

	//���� ���ִ� �Լ�
	//ȣ�� �ѹ� �Ҷ����� ��ȯ�� �Ǿ���.
	//Pop�Ұ��� ���� NULL ��ȯ
	int Pop(int a); //[11][22][0][0][0]->[11][0][0][0][0]->return 22;

	void Line();

public:
	//������
	Stack();



};

