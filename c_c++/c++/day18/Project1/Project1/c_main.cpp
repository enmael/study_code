/*
#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

vector<int> numbers;

//전역으로 mutex 선언
mutex mtx;


void Push()
{
	for (int i = 0; i < 10000; i++)
	{
		std::lock_guard<mutex> lock(mtx); //lock 생성자 호출

		numbers.push_back(1);

		if (i == 5000)
		{
			break; //lock 소멸자 호출.
		}

	}  //lock 소멸자 호출
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
// 온몸이 너무 아프다 미치겠다 허리 머리 전부 아프다 이제 진짜 운동 해야겠다...
// 어우 어우 힘들어 집에 가고싶어 
*/

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <shared_mutex>

using namespace std;

vector<int> numbers;
//전역으로 rwLock 선언
std::shared_mutex rwLock;

void ReadFunction(int id)
{
	//읽는 전용  - 여기 접근 하는 애들은 다 허용 
	//unique_lock이 작동되면 얘네들도 대기
	shared_lock<shared_mutex> lock(rwLock);

	cout << "Reader : " << id << "is reading\n";
}

void WriteFunction(int id)
{
	//쓰는 전용	 - 여기에 접근 하는 애는 유일성 보장
	//shared_lock이 작동되고 있으면 대기했다가 씀.
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
