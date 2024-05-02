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
	//node 추가
	void AddNode(int _data); //0

	//node 삽입(순서 == _index)
	void InsertNode(int _index, int _data);  //0

	//node 데이터 변경(순서 == _index)
	void UpdateNode(int _index, int _data); //0

	//node를 제거(값 == _data)
	void DeleteNodeData(int _data); //0

	//node를 제거(순서 == _index)
	void DeleteIndex(int _index); //0

	//모든 node 삭제
	void ClearAllNode(); //0

	//원하는 node의 정보 불러오기(순서 == _index)
	int GetNodeData(int _index); //0
	
	//현재 List크기
	int GetListSize(); //0
	
	//현재 데이터가 비어 있는지 아닌지
	bool IsEmpty(); // 0 
	
	//모든 node 출력 
	void PrintAll(); //0
public:
	SingleList();
	~SingleList();
};