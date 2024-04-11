#include<iostream>
#include<stdexcept>
#include "stack.h"
using namespace std;

int main()
{
	Stack stack;
	int num;
	int num2;
	int num3;
	//몇개 남았는지 검색함

	num = stack.Count(); // 
	cout << "stack에" << num << "개가 남았습니다." << endl;
	stack.Line();
	//특정 값을 지워버림
	int a;
	a = 3;
	num2 = stack.Pop(a);
	cout << "stack.Pop 지워버림"<<endl;
	stack.Line();
	//값을 넣음
	int b = 4;
	num3 = stack.Push(b);
	cout << "stack.Push 로값을 넣음" << endl;
	stack.Line();
	//전체를 지워버림
	stack.Clear();
	cout << "stack를stack.Clear()로 지움" << endl;
	stack.Line();
	//비어 있는지 아닌지 확인
	cout << "stack를IsEmpty로 값이 있는지 없는지 확인" << endl;
	bool n;
	n =stack.IsEmpty();
	if (n == 1)
	{
		cout << "stack를IsEmpty()확인" << "true" << endl;
	}
	else 
	{
		cout << "stack를IsEmpty()확인" << "false" << endl;
	}
	stack.Line();






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