#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Stack
{
private:
	int data[MaxCount]; // -99�� �� ����
	int count = 0;
public:
	void Clear();   //�ڷḦ �����ִ� �Լ�
	int Count();	//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool IsEmpty(); //��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool Push(int _data);


	int Pop();

public:
	//�����ڿ���
	Stack();
};