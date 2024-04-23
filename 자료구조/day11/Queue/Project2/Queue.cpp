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
	for (int i = 0; i < count; ++i) {
		newData[i] = data[i];
	}
	newData[count] = _data;
	delete data;
	data = newData;
	count++;
}

int Queue::Dequeue()
{
	if (IsEmpty()) {
		return -1;
	}
	int dequeuedValue = data[0];
	int* newData = new int[count - 1];
	for (int i = 1; i < count; ++i)
	{
		newData[i - 1] = data[i];
	}
	delete data;
	data = newData;
	count--;
	return dequeuedValue;
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