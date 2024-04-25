#include<iostream>
#include<stdexcept>
#include"ArrayList.h"

using namespace std;

int main()
{
	int number = 0;
	ArrayList a;
	number = a.GetListSize();
	cout << number << endl;
	number = a.IsEmpty();
	cout << number << endl;
	a.AddNode(1);
	a.AddNode(2);
	a.AddNode(3);
	a.AddNode(4);
	a.PrintAll();
	a.InsertNode(0, 7);
	a.PrintAll();
	a.InsertNode(1, 2, 2);
	a.PrintAll();
	a.DeleteIndex(1);
	a.PrintAll();
	a.DeleteIndex(1);
	a.DeleteNodeData(2);
	a.PrintAll();
	a.DeleteNodeData(2);
	a.PrintAll();
	number = a.GetListSize();
	cout << number << endl;
	number = a.IsEmpty();
	cout << number << endl;
	
}