#include<iostream>
#include<stdexcept>
#include "stack.h"
using namespace std;

int main()
{
	Stack stack;
	int num;
	num = stack.Count(); // 0
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;
	cout << "stack��stack.Clear()�� ����" << endl;
	stack.Clear(22);



	/*
	for (int i = 0; i <= MaxCount; i++)
	{
		if (stack.Push(i)) //0,1,2,3,4,
		{
			cout << i << "���� ��� �����ϴ�." << endl;
		}
		else // 5
		{
			cout << i << "���� ���� �ʾҽ��ϴ�." << endl;
		}
	}

	int num = stack.Pop(); // 4
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = stack.Pop(); // 3
	cout << num << "��(��) ���Խ��ϴ�." << endl;

	num = stack.Count(); // 3
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;

	if (!stack.IsEmpty())// stack�� 3���� �־ == true
	{
		cout << "�ڷᰡ ���� �־� �ڷḦ ����ڽ���" << endl;
		stack.Clear(); // �ڷ� ����
	}
	
	num = stack.Count(); // 0
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;

	return 0;
	*/
}