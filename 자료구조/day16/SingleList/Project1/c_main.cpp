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
	a.PrintAll();
}