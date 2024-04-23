#include "Deque.h"
void Deque::Push_Back(int num) //이건 스텍으로 처리
{
	if (IsEmpty() == true)
	{
		data = new int;
		*data = num;
		count++;
	}
	else
	{
		for (int i = 0; i < count; i++)
		{
			if (data[i] = NULL)
			{
				data[i] = num;
				count++;
			}
		}
	}
}
void Deque::Push_Front(int num) 
{
	if (IsEmpty() == true)
	{
		data = new int;
		*data = num;
		count++;
	}
	else
	{
		int* newData = new int[count + 1];
		for (int i = 0; i < count; ++i)
		{
			newData[i] = data[i];
		}
		newData[count] = num;
		delete data;
		data = newData;
		count++;
	}
}
int Deque::Pop_Back()
{
	if (IsEmpty() == true)
	{
		return NULL;
	}
	else
	{

	}
}
int Deque::Pop_Front()
{
	if (IsEmpty() == true)
	{
		return NULL;
	}
	else
	{

	}
}
bool Deque::IsEmpty()
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
void Deque::Clear()
{
	if (data != nullptr)
	{
		delete data;
		data = nullptr;
	}
	count = 0;
}
int Deque::Count()
{
	return count;
}
void Deque::PrintAll()
{
	cout << "##################" << endl;
	if (data != nullptr) {
		for (int i = 0; i < count; i++)
		{
			cout << i << " 번째 값 :" << data[i] << endl;
		}
	}
	cout << "##################" << endl;
}
Deque::Deque()
{

}
Deque::~Deque()
{

}