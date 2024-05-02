#include "SingleList.h"

using namespace std;

void SingleList::AddNode(int _data)
{
	Node* NewNode = new Node;
	NewNode->data = _data;
	NewNode->next = nullptr;
	if (IsEmpty())
	{
		head = NewNode;
	}
	else
	{
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = NewNode;
	}
	
	count++;
}


void SingleList::InsertNode(int _index, int _data)
{
	if (_index < 0 || _index > count)
	{
		cout << "?????" << endl;
		return;
	}

	Node* newNode = new Node;
	newNode->data = _data;
	newNode->next = nullptr;

	if (_index == 0) // 0번째 자리에 값을 집어 넣을떼
	{
		newNode->next = head;
		head = newNode;
	}
	else  //
	{
		Node* temp = head;
		for (int i = 0; i < _index - 1; ++i)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}

	count++;
}

void SingleList::UpdateNode(int _index, int _data)
{
	if (_index < 0 || _index >= count)
	{
		cout << "??" << endl;
		return;
	}

	Node* temp = head;
	for (int i = 0; i < _index; i++)
	{
		temp = temp->next;
	}
	temp->data = _data;
}

void SingleList::DeleteNodeData(int _data)
{
		if (IsEmpty())
		{
			cout << "노드 가 존재하지 않습니다." <<endl;
			return;
		}

		Node* temp = head;
		Node* prev = nullptr;

		
		while (temp != nullptr)
		{
			if (temp->data == _data)
			{
				if (prev == nullptr) 
				{
					head = temp->next;
					delete temp;
					count--;
					return;
				}
				else
				{
					prev->next = temp->next;
					delete temp;
					count--;
					return;
				}
			}
			prev = temp;
			temp = temp->next;
		}
	}

void SingleList::DeleteIndex(int _index)
{
	if (_index < 0 || _index >= count)
	{
		cout << "?????" << endl;
	}

	Node* temp = head;
	Node* temp2 = nullptr;

	for (int i = 0; i < _index; ++i)
	{
		temp2 = temp;
		temp = temp->next;
	}
	if (temp2 == nullptr)
	{
		head = temp->next;
	}
	else 
	{
		temp2->next = temp->next;
	}
	delete temp;
	count--;
}

void SingleList::ClearAllNode()
{
	head = nullptr;
	count = 0;
}

int SingleList::GetNodeData(int _index) 
{
	if (_index < 0 || _index >= count)
	{
		cout << "찾을수 없는 인덱스 입니다?? " << endl;
		return -1;
	}

	Node* temp = head;
	for (int i = 0; i < _index; ++i)
	{
		temp = temp->next;
	}
	return temp->data;
}

int SingleList::GetListSize()
{
	return count;
}

bool SingleList::IsEmpty()
{
	if (head == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void SingleList::PrintAll()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL " << endl;
	cout << "################" << endl;
	cout << GetListSize() << endl;
	cout << "################" << endl;
}

SingleList::SingleList()
{
	ClearAllNode();
}

SingleList::~SingleList()
{
	ClearAllNode();
}