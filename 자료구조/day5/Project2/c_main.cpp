

//O(N*N)
/*
#include <iostream>

using namespace std;

int main()
{
	int n; // n == 1 or 100 or 10000
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("연산\n");

		for (int j = 0; j < n; j++)
		{
			printf("추가 연산\n");
		}

	}


	return 0;
}
*/
//O(N*N*N)

/*
#include <iostream>

using namespace std;


int main()
{
	int n; // n == 1 or 100 or 10000
	scanf_s("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		//O(1)
	}

	for (int i = 0; i < n; i++)
	{
		//O(n)
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//O(n^2)
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				//O(n^3)
			}
		}
	}

	return 0;
}
*/
/*
#include <iostream>

using namespace std;


int main()
{
	int n; // n == 1 or 100 or 10000
	scanf_s("%d", &n);
	for (int i = 1; i < n; i *= 2)
	{
		printf("연산\n");
	}

	return 0;
}
*/
/*
#include <iostream>

using namespace std;


int main()
{
	int n; // n == 1 or 100 or 10000
	scanf_s("%d", &n);
	int i = 1;	 // 1
	while (i < n) // log2 n + 1
	{
		printf("%d\n", i); // log2 n
		i = i * 2;
	}

	return 0;
}
*/