#include<iostream>
#include<stdexcept>
#include "stack.h"
using namespace std;

int main()
{
	Stack stack;
	int num;
	num = stack.Count();
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;

	num = stack.IsEmpty();
	if (num == 1)
	{
		cout << "true ����ִ�" << endl;
	}
	else
	{
		cout << "false ������� �ʴ�" << endl;
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