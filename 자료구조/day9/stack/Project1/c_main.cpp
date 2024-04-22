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
	if (num == 0)
	{
		cout << "참이다" << endl;
	}
	else
	{
		cout << "거짓이다" << endl;
	}
	stack.Push(21);
	stack.Graph();
	
	


}