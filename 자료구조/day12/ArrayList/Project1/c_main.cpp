#include<iostream>
#include<stdexcept>
#include"ArrayList.h"

using namespace std;

int main()
{
	ArrayList a;
	a.AddNode(1);
	a.AddNode(2);
	a.AddNode(3);
	a.AddNode(4);
	a.PrintAll();
	a.GetNodeData(0);
	a.GetNodeData(4);
	a.UpdateNode(2, 5);
	a.PrintAll();
}