#pragma once
#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node* next;
};

class SingleList
{
public:
	Node* head;
	int count;
public:
	//node �߰�
	void AddNode(int _data); //0

	//node ����(���� == _index)
	void InsertNode(int _index, int _data);  //0

	//node ������ ����(���� == _index)
	void UpdateNode(int _index, int _data); //0

	//node�� ����(�� == _data)
	void DeleteNodeData(int _data); //0

	//node�� ����(���� == _index)
	void DeleteIndex(int _index); //0

	//��� node ����
	void ClearAllNode(); //0

	//���ϴ� node�� ���� �ҷ�����(���� == _index)
	int GetNodeData(int _index); //0
	
	//���� Listũ��
	int GetListSize(); //0
	
	//���� �����Ͱ� ��� �ִ��� �ƴ���
	bool IsEmpty(); // 0 
	
	//��� node ��� 
	void PrintAll(); //0
public:
	SingleList();
	~SingleList();
};