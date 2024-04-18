/*
#include <iostream>      
using namespace std;     

int main()           
{
	int number; // 필요한 크기를 여기에 할당
	//int* arr = new int[number]; // 동적할당으로 배열을 생성
	//delete arr; // 생성된 배열을 삭제 

	while (true)
	{
		cout << "할당할 배열을 크기를 입력하세요: "<<endl;
		cin >> number;
		int* arr = new int[number];
		for (int i = 0; i < number; i++)
		{
			cout <<i<< "번째 값은: "<<arr[i]<< endl;
		}
		delete arr;
		for (int i = 0; i < number; i++)
		{
			cout << i << "번째 값은: " << arr[i] << endl;
		}
	}
}
*/
/*
#include <iostream>      
using namespace std;
int main()
{
	int number1;
	int number2;

	cout << "할당할 배열을 크기를 입력하세요: " << endl;
	//cin >> number1;
	number1 = 5;
	int* arr = new int[number1];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 1;

	for (int i = 0; i < number1; i++)
	{
		cout << i << "번째 값은: " << arr[i] << endl;
	}

}
*/
#include <iostream>
using namespace std;
int main()
{
	int number1;
	int number2;

	cout << "할당할 배열을 크기를 입력하세요: " << endl;
	//cin >> number1;
	number1 = 5;
	int* arr = new int[number1];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 1;
	arr[3] = 1;
	arr[4] = 1;

	for (int i = 0; i < number1; i++)
	{
		cout << i << "번째 값은: " << arr[i] << endl;
	}
	cout << "###################################" <<  endl;
	arr[4] = -99;

	for (int i = 0; i < number1; i++)
	{
		cout << i << "번째 값은: " << arr[i] << endl;
	}
	cout << "###################################" << endl;
	for(int i = 0; i< number1; i++)
	{
		if(arr[i] == -99)
		{
			int* arr2 = new int[i-1];
			for (int j = 0; j < i; j++)
			{
				arr2[j] = arr[j];
				cout << j << "번째 값은: " << arr2[j] << endl;
			}
		}


	}

}
