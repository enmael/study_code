// �� ���� ������ ���̳��� ����!!!!
#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Stack
{
private:
	int* arr = new int[MaxCount];
	int* data = new int[MaxCount]; // -99�� �� ����
	int count = 0;
public:
	void Clear();   //�ڷḦ �����ִ� �Լ� O
	int Count();	//������ ��ΰ�? O
	bool IsEmpty(); //��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool Push(int _data); //[11][22][0][0][0]->(_data(33))->[11][22][33][0][0]->return true;


	int Pop(); //�� ���ִ°� 

	void Line(); // Ȯ�ο�

public:
	//�����ڿ���
	Stack();
};