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
	//� ���Ҵ��� �˻���

	num = stack.Count(); // 
	cout << "stack��" << num << "���� ���ҽ��ϴ�." << endl;
	stack.Line();
	//Ư�� ���� ��������
	int a;
	a = 3;
	num2 = stack.Pop(a);
	cout << "stack.Pop ��������"<<endl;
	stack.Line();
	//���� ����
	int b = 4;
	num3 = stack.Push(b);
	cout << "stack.Push �ΰ��� ����" << endl;
	stack.Line();
	//��ü�� ��������
	stack.Clear();
	cout << "stack��stack.Clear()�� ����" << endl;
	stack.Line();
	//��� �ִ��� �ƴ��� Ȯ��
	cout << "stack��IsEmpty�� ���� �ִ��� ������ Ȯ��" << endl;
	bool n;
	n =stack.IsEmpty();
	if (n == 1)
	{
		cout << "stack��IsEmpty()Ȯ��" << "true" << endl;
	}
	else 
	{
		cout << "stack��IsEmpty()Ȯ��" << "false" << endl;
	}
	stack.Line();






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