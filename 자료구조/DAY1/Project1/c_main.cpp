#include<iostream>
#include<stdexcept>
#include "stack.h"
using namespace std;

int main()
{
	Stack stack;
	int num;
	num = stack.Count(); // 0
	cout << "stack에" << num << "개가 남았습니다." << endl;
	cout << "stack를stack.Clear()로 지움" << endl;
	stack.Clear(22);



	/*
	for (int i = 0; i <= MaxCount; i++)
	{
		if (stack.Push(i)) //0,1,2,3,4,
		{
			cout << i << "값이 들어 갔습니다." << endl;
		}
		else // 5
		{
			cout << i << "값이 들어가지 않았습니다." << endl;
		}
	}

	int num = stack.Pop(); // 4
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Pop(); // 3
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Count(); // 3
	cout << "stack에" << num << "개가 남았습니다." << endl;

	if (!stack.IsEmpty())// stack에 3개가 있어서 == true
	{
		cout << "자료가 남아 있어 자료를 지우겠습다" << endl;
		stack.Clear(); // 자료 날라감
	}
	
	num = stack.Count(); // 0
	cout << "stack에" << num << "개가 남았습니다." << endl;

	return 0;
	*/
}