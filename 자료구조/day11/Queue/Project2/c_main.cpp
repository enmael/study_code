#include<iostream>
#include<stdexcept>
#include "Queue.h"
using namespace std;

int main()
{
	int num = 0;
	Queue a;
	a.Clear();
	num = a.IsEmpty();
	if (num == 1)
	{
		cout << "true ����ִ�" << endl;
	}
	else
	{
		cout << "false ������� �ʴ�" << endl;
	}
	a.Enqueue(21);
	num = a.Count();
	cout << num << endl;
	a.Line();
	a.Enqueue(22);
	a.Line();
	a.Dequeue();
	a.Line();
	a.Dequeue();
	a.Line();
	a.Dequeue();
	a.Line();
}