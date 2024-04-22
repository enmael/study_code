#include<iostream>
#include<stdexcept>
#include "stack.h"
using namespace std;

int main()
{
	Stack stack;
	int num;
	num = stack.Count();
	cout << "stack에" << num << "개가 남았습니다." << endl;

	num = stack.IsEmpty();
	if (num == 1)
	{
		cout << "true 비어있다" << endl;
	}
	else
	{
		cout << "false 비어있지 않다" << endl;
	}
	num = stack.Pop();
	cout <<  num  << endl;
	stack.Push(14);
	stack.Line();
	stack.Push(14);
	stack.Line();
	stack.Push(17);
	stack.Line();
	stack.Push(20);
	stack.Line();
	num = stack.Pop();
	stack.Line();
	num = stack.Pop();
	stack.Line();
	num = stack.Pop();
	stack.Line();
}