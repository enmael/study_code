#include<iostream>
#include<stdexcept>
#include"SingleList.h"

using namespace std;

int main()
{
	int num;
	SingleList a;
	a.AddNode(12);
	a.PrintAll();	
	a.AddNode(14);
	a.AddNode(16);
	a.AddNode(19);
	a.PrintAll();
	a.DeleteNodeData(16);
	a.PrintAll();
	a.InsertNode(2, 6);
	a.PrintAll();
	a.UpdateNode(2, 7);
	a.PrintAll();
	//a.GetNodeData(3);
	//num = a.GetNodeData(3);
	//cout << num << endl;
	//a.GetNodeData(9);
	//a.DeleteIndex(2);
	a.PrintAll();
	a.DeleteIndex(2);
	a.PrintAll();
	a.DeleteNodeData(19);
	a.PrintAll();
	a.UpdateNode(1, 2);
	a.PrintAll();
	a.UpdateNode(7, 2);
	a.InsertNode(3, 11);
	a.PrintAll();
	a.DeleteNodeData(2);
	a.PrintAll();
}