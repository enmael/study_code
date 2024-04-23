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
		count ++;
	}
	else 
	{
		for (int i = 0; i < count; i++)
		{
			if (data[i] == NULL)
			{
				arr[0] = _data;
				count++;
			}
		}
	}
	for (int i = 1; i < count; i++)
	{
		arr[i] = data[i];
		count++;
	}
	for (int i = 1; i < count; i++)
	{
		data[i] = arr[i];
	}
}

int Queue::Dequeue()
{
	if (IsEmpty() == true)
	{
		return NULL;
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			if (data[i] != NULL && data[i+1] == NULL)
			{
				data[i] = NULL;
				count--;
			}
		}
	}
}

void Queue::Line()
{
	cout << "##################" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << i << " ¹øÂ° °ª :" << data[i] << endl;
	}
	cout << "##################" << endl;
}

Queue::Queue()
{

}

Queue::~Queue()
{
	Clear();
}