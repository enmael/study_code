#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> numbers;

	numbers.resize(10);
	numbers.push_back(1);


	//c++ 11
	for (auto num : numbers)
	{
		cout << num << endl;
	}


	cout << "==================================" << endl;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);



	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==================================" << endl;

	return 0;

}