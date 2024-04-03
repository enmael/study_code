//# define
//매크로 함수는 실행속도를 향상시키지만 
// 전처리 단계에서 수행되어 간단하지 
// 않은 함수는 구현이 힘듬

/*
#include <iostream>

using namespace std;

#define Add(a,b) (a + b)

int main()
{
	int iNum = Add(10, 20);
	cout << iNum << endl;

	float fNum = Add(11.1, 22.2);
	cout << fNum << endl;

	return 0;
}
*/

//Inline
//Inline 선언에 의해 매크로 함수의 장점을 
// 반영 컴파일러에서 최적화 기회를 제공(디버깅 가능)
//하지만 자료형에 의존적인 함수가 되기 때문에 
// 함수 호출에서 데이터 손실 발생

/*
#include <iostream>

using namespace std;

inline int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int iNum = Add(10, 20);
	cout << iNum << endl;

	return 0;
}
*/

/*
#include <iostream>

using namespace std;

int Add(int a, int d)
{
	return a + d;
};
int main()
{
	int n = 10;
	int x = 20;
	cout << Add(n, x) << endl;
}
*/
/*
//스레드(thread)는 프로그램에서 실행되는 가장 작은 처리 단위로,
// 프로세스 내부에서 독립적으로 실행되며 프로세스의 자원을 공유할 수 있습니다.
// 스레드는 프로세스 내에서 병렬적으로 작업을 수행하는 데 사용되며, 
// 동시성(concurrency) 및 
// 병렬성(parallelism)을 구현하는 데 도움이 됩니다.

​
//스레드는 프로세스와 다음과 같은 구성 요소를 공유합니다 :
//1.코드(Code) 영역 : 프로세스 내의 모든 스레드는 동일한 실행 코드를 공유합니다.
//2.데이터(Data) 영역 : 전역 변수와 같은 데이터를 스레드 간에 공유할 수 있습니다.
//3.힙(Heap) 영역 : 동적으로 할당된 메모리를 스레드 간에 공유할 수 있습니다.

//그러나 각 스레드는 다음과 같은 고유한 구성 요소를 가집니다 :

//1.프로그램 카운터(Program counter, PC) : 스레드의 실행 위치를 나타냅니다.

//2.레지스터 집합(Register set) : 스레드의 현재 상태와 관련된 정보를 저장합니다.
// 
//3.스택(Stack) : 함수 호출, 지역 변수 및 스레드의 실행 흐름과 
// 관련된 정보를 저장합니다.
//스레드를 사용하면 멀티프로세서 또는 멀티코어 시스템에서 
// 병렬 실행이 가능하므로 성능 향상을
//얻을 수 있습니다.또한 스레드 간 자원 공유를 통해 프로세스 간 
// 통신보다 효율적인 데이터 공유가 가능하게 됩니다.
// 하지만 동시성 문제, 
// 경쟁 조건(race condition) 및 복잡한 동기화 
// 문제가 발생할 수 있으므로 주의해야
*/
/*
#include <iostream>
#include <thread>	// 스레드 사용 할려면 호출

using namespace std;

//ThreadFunc는 별도의 스레드에서 실행
void ThreadFunc()
{
	cout << "Hello Thread" << endl;
}

int main()
{
	//새로운 스레드를 생성하고, "ThreadFunc" 함수를 실행
	std::thread t(ThreadFunc);

	//Main 스레드는 "Hello Main"을 표시
	cout << "Hello Main" << endl;

	//해당되는 t 스레드가 끝날때 까지 대기
	t.join();

	return 0;
}
*/
/*
#include <iostream>
#include <thread>	

using namespace std;

void ThreadFunc()
{
	cout << "Hello Thread" << endl;
}

int main()
{
	std::thread t;



	//현재 시스템에서 동시 실행 가능한 스레드 수 확인
	cout << t.hardware_concurrency() << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <thread>	

using namespace std;

void ThreadFunc(int index)
{
	cout << "Hello Thread" << index << endl;
}

int main()
{
	std::thread t(ThreadFunc, 1);

	thread t2;
	t2 = thread(ThreadFunc, 2);

	cout << "Hello Main" << endl;

	t.join();
	t2.join();

	return 0;
}
*/
/*
#include <iostream>
#include <thread>	

using namespace std;

int result = 0;

void Add()
{
	for (int i = 0; i < 10000; i++)
	{
		result++;
	}
}

void Sub()
{
	for (int i = 0; i < 100000; i++)
	{
		result--;
	}
}


int main()
{
	thread t1(Add);
	thread t2(Sub);

	t1.join();
	t2.join();

	cout << result << endl;

	return 0;
}
*/

// 경함 상태 
/*
#include <iostream>
#include <thread>	

using namespace std;

int result = 0;

void Add()
{
	for (int i = 0; i < 100000; i++)
	{
		result++;
		//temp1 = result;	 // temp1 = result(0);
		//temp1 = temp1 + 1; // temp1(1) = temp1(0) + 1;
		//result  = temp1;	 // result(1) = temp1(1);
	}
}

void Sub()
{
	for (int i = 0; i < 100000; i++)
	{
		result--;
		//temp2 = result;	// temp2(1) = result(1);
		//temp2 = temp2 - 1;// temp2(0) = temp2(1) - 1;
		//result = temp2;	// result(0) = temp2(0);
	}
}


int main()
{
	thread t1(Add);
	thread t2(Sub);

	t1.join();
	t2.join();

	cout << result << endl;

	return 0;
}
*/
/*
atomic은 원자성(atomicity)을 보장하는 연산을 의미합니다.
원자성이란 어떤 작업이 한 번에 완료되거나 전혀 실행되지 않는 특성을 말합니다.
즉, 원자적 연산은 도중에 중단되거나 다른 작업과 섞이지 않습니다.

멀티스레딩 환경에서 여러 스레드가 
동시에 공유 데이터에 접근할 때 발생할 수 있는 경쟁 상태(race condition) 
문제를 해결하기 위해 원자적 연산이 사용됩니다.
원자적 연산을 사용하면, 
동시에 공유 데이터에 접근하는 스레드들 
간에 데이터의 일관성을 유지할 수 있습니다.
*/
/*
#include <iostream>
#include <thread>
#include <atomic> // 헤더 사용

using namespace std;

atomic<int> result;

void Add()
{
	for (int i = 0; i < 100000; i++)
	{
		//result++;
		result.fetch_add(1);
	}
}

void Sub()
{
	for (int i = 0; i < 100000; i++)
	{
		//result--;
		//result.fetch_add(-1);
		result.fetch_sub(1);
	}
}


int main()
{
	//result = 0;
	result.store(0);

	thread t1(Add);
	thread t2(Sub);

	t1.join();
	t2.join();

	cout << result << endl;

	return 0;
}
*/

/*
#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

atomic<int> num;

int main()
{
	//num = 0;
	num.store(0);

	//int value = num;
	int value = num.load();

	return 0;
}
*/
/*
#include <iostream>
#include <thread>
#include <atomic> 

using namespace std;

atomic<int> num = 0;

int main()
{
	int expected = 0; // 예상되는 값
	int desired = 1;  // 원하는값

	//num(0) == expected(0) -> num = desired;
	//값이 같아서 바꿧으면 true 아니면 false
	bool result  = num.compare_exchange_weak(expected, desired);
	cout << result << endl;

	//num.compare_exchage_weak
	if (num == expected) // num이 예상 되는 값이라면
	{
		//만약에 다른 스레드의 방해로 중간에 실패
		num = desired;
		expected = num;
		return true;
	}
	else
	{
		expected = num;
		return false;
	}

	//예상되는 값이 바뀜
	cout << expected << endl;

	return 0;
}
*/