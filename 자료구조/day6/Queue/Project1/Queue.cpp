#include "Queue.h"

void Queue::Clear()
{

}
int Queue::Count() // �ڷᰡ ��ִ°�
{
	count = sizeof(data) / sizeof(*data);
	return count;
}
bool Queue::IsEmpty()
{
	
}
void Queue::Enqueue(int _data)
{
	
}
int Queue::Dequeue()
{
	data[0] = NULL;
	for (int i = 0; i < count; i++)
	{
		data[i] = data[i + 1];
		data[count] = NULL;
	}
}

Queue::Queue()
{

}

Queue::~Queue()
{

}