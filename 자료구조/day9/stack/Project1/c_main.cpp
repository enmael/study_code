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
	if (num == 0)
	{
		cout << "���̴�" << endl;
	}
	else
	{
		cout << "�����̴�" << endl;
	}
	stack.Push(21);
	stack.Graph();
	
	


}