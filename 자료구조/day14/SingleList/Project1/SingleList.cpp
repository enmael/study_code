#include "SingleList.h"

using namespace std;

void SingleList::AddNode(int _data)
{
	Node* NewNode = new Node;
	if (IsEmpty())
	{
		NewNode->data = _data;
		NewNode->next = nullptr;
	}
	else
	{	

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