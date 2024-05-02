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
	Node* newNode = new Node;
	newNode->data = _data;
	newNode->next = nullptr;
	if (_index >= 0 && _index <= count)
	{
		if (_index == 0) 
		{
			newNode->next = head;
			head = newNode;
		}
		else  
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
	else
	{
		cout << "#####################" << endl;
		cout << "�����Ҽ� �����ϴ�." << endl;
		cout << "#####################" << endl;
	}
}

void SingleList::UpdateNode(int _index, int _data)
{
	if (_index >= 0 && _index <= count)
	{
		Node* temp = head;
		for (int i = 0; i < _index; i++)
		{
			temp = temp->next;
		}
		temp->data = _data;
	}
	else
	{
		cout << "#####################" << endl;
		cout << "�������� �ʴ� ���Դϴ�." << endl;
		cout << "#####################" << endl;
	}
}

void SingleList::DeleteNodeData(int _data)
{
	Node* temp = head;
	Node* temp2 = nullptr;
		if (IsEmpty())
		{
			cout << "#####################" << endl;
			cout << "�������� �ʽ��ϴ�." <<endl;
			cout << "#####################" << endl;
			return;
		}
		else
		{
			while (temp != nullptr)
			{
				if (temp->data == _data)
				{
					if (temp2 == nullptr)
					{
						head = temp->next;
						delete temp;
						count--;
						return;
					}
					else
					{
						temp2->next = temp->next;
						delete temp;
						count--;
						return;
					}
				}
				temp2 = temp;
				temp = temp->next;
			}
		}
		
	}

void SingleList::DeleteIndex(int _index)
{
	Node* temp = head;
	Node* temp2 = nullptr;

	for (int i = 0; i < _index; ++i)// ������ ��带 ã�´�?
	{
		temp2 = temp;
		temp = temp->next;
	}
	if (temp2 == nullptr) //��带 �����ϴ°�
	{
		head = temp->next;
	}
	else //��� ���ĸ� �����Ѵ�
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
		cout << "#####################" << endl;
		cout << "���� �ۿ� �ִ� �� �Դϴ� " << endl;
		cout << "#####################" << endl;
	}

	Node* temp = head;
	for (int i = 0; i < _index; i++)
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