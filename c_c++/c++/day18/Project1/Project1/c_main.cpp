/*
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

vector<int> numbers;

//�������� mutex ����
mutex mtx;


void Push()
{
	for (int i = 0; i < 10000; i++)
	{
		std::lock_guard<mutex> lock(mtx); //lock ������ ȣ��

		numbers.push_back(1);

		if (i == 5000)
		{
			break; //lock �Ҹ��� ȣ��.
		}

	}  //lock �Ҹ��� ȣ��
}


int main()
{
	thread t1(Push);
	thread t2(Push);

	t1.join();
	t2.join();

	cout << numbers.size() << endl;

	return 0;
}
// �¸��� �ʹ� ������ ��ġ�ڴ� �㸮 �Ӹ� ���� ������ ���� ��¥ � �ؾ߰ڴ�...
// ��� ��� ����� ���� ����;� 
*/

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <shared_mutex>

using namespace std;

vector<int> numbers;
//�������� rwLock ����
std::shared_mutex rwLock;

void ReadFunction(int id)
{
	//�д� ����  - ���� ���� �ϴ� �ֵ��� �� ��� 
	//unique_lock�� �۵��Ǹ� ��׵鵵 ���
	shared_lock<shared_mutex> lock(rwLock);

	cout << "Reader : " << id << "is reading\n";
}

void WriteFunction(int id)
{
	//���� ����	 - ���⿡ ���� �ϴ� �ִ� ���ϼ� ����
	//shared_lock�� �۵��ǰ� ������ ����ߴٰ� ��.
	unique_lock<shared_mutex> lock(rwLock);

	cout << "Writer : " << id << "is writing\n";
}


int main()
{
	thread readers[5];
	thread writers[2];

	for (int i = 0; i < 5; i++)
	{
		readers[i] = thread(ReadFunction, i);
	}

	for (int i = 0; i < 2; i++)
	{
		writers[i] = thread(WriteFunction, i);
	}
	for (int i = 0; i < 5; i++)
	{
		if (readers[i].joinable())
		{
			readers[i].join();
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (writers[i].joinable())
		{
			writers[i].join();
		}
	}

	return 0;
}
