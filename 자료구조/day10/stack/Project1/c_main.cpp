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

	num = stack.Count();
	cout << "stack에" << num << "개가 남았습니다." << endl;
}