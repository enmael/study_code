#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Stack
{
private:
	int data[MaxCount]; // -99�� �� ����
	int count = 0;
	int* arr = new int[MaxCount];
public:
	void Clear();   //�ڷḦ �����ִ� �Լ�
	int Count();	//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool IsEmpty(); //��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool Push(int _data);
	void Graph();


	int Pop();

public:
	//�����ڿ���
	Stack();
};