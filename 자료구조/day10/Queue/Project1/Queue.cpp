#include "Queue.h"
using namespace std;

void Queue::Clear()
{
	delete data;
	data = nullptr;
	count = 0;
}

int Queue::Count()
{
	return count;
}

bool Queue::IsEmpty()
{
	if (Count() == 0 && data == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Queue::Enqueue(int _data)
{
	if (IsEmpty() == true)
	{
		data[0] = _data;
		count = 1;
	}
	else 
	{
		for (int i = 0; i < count; i++)
		{
			if(data[i] =! nullptr)
		}
	}
}

int Queue::Dequeue()
{

}

Queue::Queue()
{

}

Queue::~Queue()
{

}