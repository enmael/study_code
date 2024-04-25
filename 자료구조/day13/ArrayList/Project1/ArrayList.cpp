#include "ArrayList.h"

using namespace std;

void ArrayList::AddNode(int _data)
{
	if (IsEmpty() == true)
	{
		data = new int;
		*data = _data;
		count++;
	}
	else
	{
		int* newData = new int[count + 1];
		for (int i = 0; i < count; i++)
		{
			newData[i] = data[i];
		}
		newData[count] = _data;
		delete data;
		data = newData;
		count++;
	}
}
void ArrayList::InsertNode(int _index, int _data)
{
	//인덱스값을 가지고가서 앞에도 추가하고 맨뒤에도 추가하고 앞에도 추가한다 그 소리잖아 
	int* newData = new int[count+1];
	
	for (int i = 0; i < count+1; i++)
	{
		if (i < _index)
		{
			newData[i] = data[i];
		}
		else if(i == _index)
		{
			newData[i] = _data;
		}
		else if (i > _index)
		{
			newData[i] = data[i-1];
		}
	}
	delete data;
	data = newData;
	count++;
	
	
}
void ArrayList::InsertNode(int _index, int _count, int _data)
{
	for (int i = 1; i <= _count; i++)
	{
		InsertNode(_index, _data);
	}
}
void ArrayList::UpdateNode(int _index, int _data)
{
	//인덱스 위치의 데이터를 _data로 변경해라
	for (int i = 0; i < count; i++)
	{
		if (i == _index)
		{
			data[i] = _data;
		}
	}
}
void ArrayList::DeleteNodeData(int _data)
{
	//_data로 들어오는값을 제거해라
	
	int number = 0;
	for (int i = 0; i < count; i++)
	{
		if (data[i] == _data)
		{
			number = i;
		}
	}
	DeleteIndex(number);
	
	/*
	int number = 0;
	for (int i = 0; i < count; i++)
	{
		if (data[i] == _data)
		{
			data[i] = -99;
			number++;
		}
	}
	int* newData = new int[count - number];
	for (int i = 0; i < count; i++)
	{
		if (data[i] =! - 99)
		{
			for (int j = 0; j < count - number; j++)
			{
				newData[j] = data[i];
			}
		}
	}
	delete data;
	data = newData;
	count-number;
	*/
}	
void ArrayList::DeleteIndex(int _index)
{
	//_index값 가지고 지워라
	int* newData = new int[count - 1];
	for (int i = 0; i < count; i++)
	{
		if (i < _index)
		{
			newData[i] = data[i];
		}
		else if (i > _index)
		{
			newData[i-1] = data[i];
		}
	}
	delete data;
	data = newData;
	count--;
}
void ArrayList::ClearAllNode()
{
	if (data != nullptr)
	{
		delete data;
		data = nullptr;
	}
	count = 0;
}

int ArrayList::GetNodeData(int _index)
{
	for (int i = 0; i < count; i++)
	{
		if (i == _index)
		{
			cout << "###########################" << endl;
			cout << i << " 번째 값 :" << data[i] << endl;
			cout << "##########################" << endl;
			return true;
		}
		else
		{
			cout << "##########################" << endl;
			cout <<"존재하지 않는 인덱스 값 입니다" << endl;
			cout << "##########################" << endl;
			return false;
		}
	}
	//return count;
}
int ArrayList::GetListSize()
{
	return count;
}
bool ArrayList::IsEmpty()
{
	
	if (GetListSize() == 0 && data == nullptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void ArrayList::PrintAll()
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
ArrayList::ArrayList()
{
	ClearAllNode();
}
ArrayList::~ArrayList()
{

}