#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5

class Queue
{
public:
	//Queue�� ����Ű�� ������
	int* data;
private:
	//������ ����
	//int data[MaxCount] = { 0,2,1,3,0 };
	int count;
public:
	//�ڷḦ �����ִ� ����
	void Clear();
	//����� �˷��ִ� ����
	int Count();
	//��� �ִ��� �˷��ִ� ����
	bool IsEmpty();
	//���� �־��ִ�(int num) 
	void Enqueue(int _data);
	//���� ���ִ� ����
	int Dequeue();
public:
	Queue();
	~Queue();
};

