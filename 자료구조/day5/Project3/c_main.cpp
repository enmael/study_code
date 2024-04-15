/*
//자료를 지워주는 아이
//void Clear();


#include<iostream>
using namespace std;

int main()
{
	
	int data[] = { 1,2,3,11,0 };
	int count = 5;

	data[0] = NULL;
	
	for (int i = 0; i < count; i++)
	{

		data[i] = data[i + 1];
		data[count] = NULL;
	}

	for (int i = 0; i < count; i++)
	{
		std::cout << i << "번째" << data[i] << std::endl;
	}
}
*/

////값을 넣어주는(int num) 
#include<iostream>
using namespace std;

int main()
{

	int data[] = { 1,2,3,1,0 };
	int count = 5;
	int _data = 7;

	for (int i = 0; i < count; i++)
	{

		if (data[i] == 0 && data[i-1] != 0)
		{
			data[i] = _data;
			break;
		}
	}


	for (int i = 0; i < count; i++)
	{
		std::cout << i << "번째" << data[i] << std::endl;
	}

}