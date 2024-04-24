#include<iostream>
#include<stdexcept>
#include "Deque.h"
using namespace std;
int main() 
{
	Deque a;
	a.Clear();
	a.Push_Back(15);
	a.PrintAll();
	a.Push_Front(12);
	a.PrintAll();
	a.Push_Front(16);
	a.PrintAll();
	a.Push_Back(17);
	a.PrintAll();
	a.Pop_Back();
	a.PrintAll();
	a.Pop_Front();
	a.PrintAll();
}