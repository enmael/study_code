/*
#include <iostream>      
using namespace std;     

int main()           
{
	int number; // �ʿ��� ũ�⸦ ���⿡ �Ҵ�
	//int* arr = new int[number]; // �����Ҵ����� �迭�� ����
	//delete arr; // ������ �迭�� ���� 

	while (true)
	{
		cout << "�Ҵ��� �迭�� ũ�⸦ �Է��ϼ���: "<<endl;
		cin >> number;
		int* arr = new int[number];
		for (int i = 0; i < number; i++)
		{
			cout <<i<< "��° ����: "<<arr[i]<< endl;
		}
		delete arr;
		for (int i = 0; i < number; i++)
		{
			cout << i << "��° ����: " << arr[i] << endl;
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

	cout << "�Ҵ��� �迭�� ũ�⸦ �Է��ϼ���: " << endl;
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
		cout << i << "��° ����: " << arr[i] << endl;
	}

}
*/
#include <iostream>
using namespace std;
int main()
{
	int number1;
	int number2;

	cout << "�Ҵ��� �迭�� ũ�⸦ �Է��ϼ���: " << endl;
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
		cout << i << "��° ����: " << arr[i] << endl;
	}
	cout << "###################################" <<  endl;
	arr[4] = -99;

	for (int i = 0; i < number1; i++)
	{
		cout << i << "��° ����: " << arr[i] << endl;
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
				cout << j << "��° ����: " << arr2[j] << endl;
			}
		}


	}

}
