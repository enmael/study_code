/*
#include <iostream>

#include <vector> // ȣ��
using namespace std; //STL - Standard template library

int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	vector<int>::reverse_iterator iterPos = numbers.rbegin();
	vector<int>::reverse_iterator iterEnd = numbers.rend();

	for (vector<int>::reverse_iterator i = iterPos; i != iterEnd; i++)
	{
		cout << *i << endl;

	}

	return 0;

}
*/
/*
#include <iostream>
#include <vector> // ȣ��
using namespace std; //STL - Standard template library

int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	//c++ 11
	for (auto num : numbers)
	{
		cout << num << endl;
	}

	return 0;

}*/
/*
#include <iostream>
#include <vector> // ȣ��
using namespace std; //STL - Standard template library

int main()
{
	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	//c++ 11
	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==================================" << endl;
	cout << "ũ�� : " << numbers.size() << endl;
	cout << "==================================" << endl;

	cout << "�տ� �ִ� �� : " << numbers.front() << endl;
	cout << "�ڿ� �ִ� �� : " << numbers.back() << endl;

	cout << "==================================" << endl;

	for (vector<int>::iterator i = numbers.begin(); i != numbers.end(); i++)
	{
		cout << *i << endl;
	}

	cout << "==================================" << endl;

	vector<int>::iterator iterPos = numbers.begin();
	iterPos++;
	iterPos++;

	cout << *iterPos << endl;

	cout << "==================================" << endl;

	iterPos--;
	cout << *iterPos << endl;
	cout << "==================================" << endl;

	return 0;

}
*/
/*
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
*/

/*
#include <iostream>

using namespace std;

#include <list> // ȣ��

int main()
{
	list<int> numbers;

	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(5);

	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==============================" << endl;


	numbers.pop_front();
	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==============================" << endl;

	numbers.pop_back();
	for (auto num : numbers)
	{
		cout << num << endl;
	}


	return 0;

}
*/

/*
#include <iostream>

using namespace std;
#include <list> // ȣ��

int main()
{
	list<int> numbers;


	numbers.push_back(1);
	numbers.push_front(2);
	numbers.push_back(3);
	numbers.push_front(4);
	numbers.push_back(5);
	numbers.push_front(6);
	numbers.push_back(7);

	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==============================" << endl;

	numbers.sort();

	//���ڿ��� �ƴ϶� ���ڸ� ���ϱ� ���ؼ��� a���� b�� �����մ�.

	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==============================" << endl;
	numbers.pop_front(); // �տ������� ����
	for (auto num : numbers)
	{
		cout << num << endl;
	}

	cout << "==============================" << endl;
	numbers.pop_back(); //�ڿ��� ���� ���� 
	for (auto num : numbers)
	{
		cout << num << endl;
	}


	return 0;

}
*/

//map 
/*
#include <iostream>

using namespace std;

#include <unordered_map> // ȣ��

int main()
{
	unordered_map<string, int> numbers;
	numbers.insert(unordered_map<string, int>::value_type("Num1", 10));
	numbers.insert(unordered_map<string, int>::value_type("Num2", 20));
	numbers.insert(unordered_map<string, int>::value_type("Num3", 30));
	numbers.insert(unordered_map<string, int>::value_type("Num4", 40));

	cout << "=====================" << endl;

	unordered_map<string, int>::iterator iter;
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		cout << "key : " << iter->first << " / value : " << iter->second << endl;
	}

	cout << "=====================" << endl;

	for (auto num : numbers)
	{
		cout << "key : " << num.first << " / value : " << num.second << endl;
	}


	return 0;

}
*/

/*
#include <iostream>
using namespace std;
#include <unordered_map> // ȣ��

int main()
{
	unordered_map<string, int> numbers;
	numbers.insert(unordered_map<string, int>::value_type("Num1", 10));
	numbers.insert(unordered_map<string, int>::value_type("Num2", 20));
	numbers.insert(unordered_map<string, int>::value_type("Num3", 30));
	numbers.insert(unordered_map<string, int>::value_type("Num4", 40));

	cout << "=====================" << endl;

	unordered_map<string, int>::iterator iter = numbers.find("Num20"); // Ű�� Ž��
	if (iter != numbers.end())
	{
		cout << "Ű�� ã��." << endl;
		cout << "key : " << iter->first << " / value : " << iter->second << endl;

	}
	else
	{
		cout << "Ű�� ã�� ����." << endl;
	}

	cout << "=====================" << endl;

	for (auto num : numbers)
	{
		cout << "key : " << num.first << " / value : " << num.second << endl;
	}


	return 0;

}
*/

/*
#include <iostream>

using namespace std;
#include <unordered_map> // ȣ��

int main()
{
	unordered_map<string, int> numbers;
	numbers.insert(unordered_map<string, int>::value_type("Num1", 10));
	numbers.insert(unordered_map<string, int>::value_type("Num2", 20));
	numbers.insert(unordered_map<string, int>::value_type("Num3", 30));
	numbers.insert(unordered_map<string, int>::value_type("Num4", 40));

	cout << "=====================" << endl;

	unordered_map<string, int>::iterator iter = numbers.find("Num2");
	if (iter != numbers.end())
	{
		cout << "Ű�� ã��." << endl;
		cout << "key : " << iter->first << " / value : " << iter->second << endl; //Ű�� �����ع����� 
		// �������� ���� ������� �ֳ� �ʹ����� ����� ����

		numbers.erase(iter->first);
	}


	cout << "=====================" << endl;

	for (auto num : numbers)
	{
		cout << "key : " << num.first << " / value : " << num.second << endl;
	}


	return 0;

}
*/

/*
#include <iostream>

using namespace std;

#include <map> // ȣ��

int main()
{
	map<string, int> numbers;
	numbers.insert(map<string, int>::value_type("Num1", 10)); //?
	numbers.emplace("Num2", 20);
	numbers.insert(map<string, int>::value_type("Num3", 30)); //?
	numbers.emplace("Num4", 40);

	cout << "=====================" << endl;

	for (auto num : numbers)
	{
		cout << "key : " << num.first << " / value : " << num.second << endl;
	}


	return 0;

}
*/

//set
/*
#include <iostream>

using namespace std;

#include <set> // ȣ��

int main()
{
	cout << "========================" << endl;
	set<string> numbers;
	numbers.insert("Num1");
	numbers.insert("Num2");
	numbers.insert("Num3");
	numbers.insert("Num4");

	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	cout << "========================" << endl;


	return 0;

}
*/

/*
#include <iostream>

using namespace std;

#include <set> // ȣ��

int main()
{
	cout << "========================" << endl;
	set<string> numbers;
	numbers.insert("Num1");
	numbers.insert("Num2");
	numbers.insert("Num3");
	numbers.insert("Num4");

	//�ߺ� �ȵ�
	numbers.insert("Num3");

	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	cout << "========================" << endl;


	return 0;

}
*/
/*
#include <iostream>

using namespace std;
#include <set> // ȣ��
int main()
{
	cout << "========================" << endl;
	set<string> numbers;
	numbers.insert("Num1");
	numbers.insert("Num2");
	numbers.insert("Num3");
	numbers.insert("Num4");


	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	cout << "========================" << endl;


	//�ߺ� �ȵ�
	auto success = numbers.insert("Num30");
	if (success.second)
	{
		cout << *success.first << "���� ����" << endl;
	}
	else
	{
		cout << *success.first << "���� ����" << endl;
	}

	return 0;

}
*/
/*
#include <iostream>

using namespace std;

#include <set> // ȣ��

int main()
{
	cout << "========================" << endl;
	set<string> numbers;
	numbers.insert("Num1");
	numbers.insert("Num2");
	numbers.insert("Num3");
	numbers.insert("Num4");


	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	cout << "========================" << endl;

	cout << "���� num10? " << numbers.count("Num10") << endl; //���� ������ 1 ������ 0 �̴� �̰����� 
	cout << "���� num3? " << numbers.count("Num3") << endl;

	cout << "========================" << endl;

	cout << "Size : " << numbers.size() << endl;



	return 0;

}
*/

//????�̰� ����ü ���ϴ� 
/*
#include <iostream>
using namespace std;
#include <set> // ȣ��
int main()
{
	cout << "========================" << endl;
	set<string> numbers;
	numbers.insert("Num1");
	numbers.insert("Num2");
	numbers.insert("Num3");
	numbers.insert("Num4");


	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	cout << "========================" << endl;

	if (numbers.find("Num1") == numbers.end())
	{
		cout << "���� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
		numbers.erase("Num1");
	}
	cout << "========================" << endl;

	for (auto num : numbers)
	{
		cout << "value : " << num << endl;
	}

	return 0;

}
*/

//stack
/*
#include <iostream>

using namespace std;

#include <stack>
#include <queue>
#include <deque>

int main()
{
	cout << "========================" << endl;
	stack<int> numbers;
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);

	for (int i = 0; i < 4; i++)
	{
		cout << numbers.top() << endl;
		numbers.pop();
	}

	cout << "========================" << endl;

	cout << "Size " << numbers.size() << endl;

	if (numbers.empty())
	{
		cout << "��� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}


	return 0;

}
*/
/*
#include <iostream>
using namespace std;
#include <stack>
#include <queue>
#include <deque>

int main()
{
	cout << "========================" << endl;
	queue<int> numbers;
	numbers.push(1);
	numbers.push(2);
	numbers.push(3);
	numbers.push(4);

	for (int i = 0; i < 4; i++)
	{
		cout << numbers.front() << endl;
		numbers.pop();
	}

	cout << "========================" << endl;

	cout << "Size " << numbers.size() << endl;

	if (numbers.empty())
	{
		cout << "��� ����" << endl;
	}
	else
	{
		cout << "���� ����" << endl;
	}


	return 0;

}
*/