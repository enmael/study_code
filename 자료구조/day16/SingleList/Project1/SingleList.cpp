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

}

void SingleList::UpdateNode(int _index, int _data)
{

}

void SingleList::DeleteNodeData(int _data)
{

	Node* temp = head;
	Node* temp2;
	if (IsEmpty() == true)
	{
		
	}
	else
	{
		while (temp->next != nullptr)
		{
			if (temp->data != _data)
			{
				temp2 = temp->next;
			}
		}

	}
	count--;
}

void SingleList::DeleteIndex(int _index)
{

}

void SingleList::ClearAllNode()
{
	head = nullptr;
	count = 0;
}

int SingleList::GetNodeData(int _index) 
{
	return count;
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

}