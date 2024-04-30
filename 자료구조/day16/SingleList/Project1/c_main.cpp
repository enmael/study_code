#include<iostream>
#include<stdexcept>
#include"SingleList.h"

using namespace std;

int main()
{
	SingleList a;
	a.AddNode(12);
	a.PrintAll();
	a.AddNode(14);
	a.AddNode(16);
	a.AddNode(19);
	a.PrintAll();
	a.DeleteNodeData(16);
}