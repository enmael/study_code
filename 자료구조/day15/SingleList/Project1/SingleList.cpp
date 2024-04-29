#include "SingleList.h"

using namespace std;

void SingleList::AddNode(int _data)
{
	Node* NewNode = new Node; 
	//NewNode->data = _data;
	//NewNode->next = nullptr;
	if (IsEmpty())
	{
		NewNode->data = _data;
		NewNode->next = nullptr;
		head = NewNode;
	}
	else
	{	
		

		/*
		Node * temp = head;
		while (temp -> next != nullptr )
		{
			temp = temp->next;
		}
		temp->next = NewNode;
		*/
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

}

void SingleList::DeleteIndex(int _index)
{

}

void SingleList::ClearAllNode()
{

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

}

SingleList::SingleList()
{

}

SingleList::~SingleList()
{

}