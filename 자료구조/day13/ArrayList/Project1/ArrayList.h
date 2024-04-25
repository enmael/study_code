#pragma once
#include <iostream>

using namespace std;

class ArrayList
{
public:
	int* data;
	int count;
public:
	//�߰�
	void AddNode(int _data); //0
	//�� ����(���� == _index)
	void InsertNode(int _index, int _data);//0
	//�� ����(���� == _index, ���� == _count)
	void InsertNode(int _index, int _count, int _data);//0
	//������ ����(���� == _index)
	void UpdateNode(int _index, int _data);//0
	//�� ����(�� == _data)
	void DeleteNodeData(int _data);
	//�� ����(���� == _index)
	void DeleteIndex(int _index);//0
	//��� �� ����
	void ClearAllNode(); //0
	//���ϴ� ���� ���� �ҷ�����(���� == _index)
	int GetNodeData(int _index); //0
	//���� Listũ��
	int GetListSize(); //0
	//���� �����Ͱ� ��� �ִ��� �ƴ���
	bool IsEmpty(); //0
	//��� node ���
	void PrintAll(); //0
public:
	ArrayList();
	~ArrayList();
};