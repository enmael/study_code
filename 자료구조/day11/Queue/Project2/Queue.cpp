#include "Queue.h"
using namespace std;

void Queue::Clear()
{
	if (data != nullptr)
	{
		delete data;
		data = nullptr;
	}
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
	int* newData = new int[count + 1];
	newData[0] = _data;
	for (int i = 0; i < count; i++) 
	{
		newData[i+1] = data[i];
	}
	delete data;
	data = newData;
	count++;
}

int Queue::Dequeue()
{
	if (IsEmpty() == true)
	{
		return NULL;
	}
	else
	{
		int* newData = new int[count - 1];
		for (int i = 1; i < count; i++)
		{
			newData[i - 1] = data[i];
		}

		delete data;
		data = newData;
		count--;
	}
}

void Queue::Line()
{
	cout << "##################" << endl;
	if (data != nullptr) {
		for (int i = 0; i < count; i++)
		{
			cout << i << " ¹øÂ° °ª :" << data[i] << endl;
		}
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