/*
#include <iostream>
#include <string>

int main() {

    std::string arr[7] = { "melon", "watermelon",
            "kiwi", "apple", "banana", "mango", "peach" };

    //int size = (sizeof(arr) / sizeof(*arr));
    int size = sizeof(arr) / sizeof(*arr);
    std::cout << size << std::endl;
}
*/

/*
#include <iostream>
#include <string>

//int Clear() {
//
//}

//비어 있는지 아닌지 알려주는 함수
//비어 있는지 아닌지 알려주는 함수
//[0][0][0][0][0] return true; 
// / [11][0][0][0][0]  return false; 
int main() {
    int data[5] = {0,0,0,0,0}; 
    int count = 5;			
 
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0) 
        {
            printf("참");
        }
        else if (data[i] != 0)
        {
            printf("거짓");
        }

    }
    
}
*/
/*
//자료를 지워주는 함수
#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,2,3,4,5 };
    int count = 5;

    for (int i = 0; i < count; i++)
    {
        data[i] = 0;
        printf("%d",data[i]);
    }
}
*/
//값을 넣어주는 함수(_data :추가할 데이터)
/*
#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,2,0,0,0 };
    int count = 5;

    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            data[i] = 123;
            printf("%d", data[i]);
            break;
        }

    }
}
*/

//값을 빼주는 함수
//호출 한번 할때마다 반환이 되야함.
//Pop할것이 없음 NULL 반환
//int Pop(); //[11][22][0][0][0]->[11][0][0][0][0]->return 22;

/*
#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,2,0,0,0 };
    int count = 5;
    int a = 0;
    std::cin >> a;
    for(int i = 0; i<count; i++)
    {
        if (a == data[i])
        {
            data[i] = 0;
        }
        else if (a == 0) {
            std::cout << "0은 입력할수 없습니다" << std::endl;

        }
        std::cout << data[i] << std::endl;
    }
}
*/
/*
#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,2,0,0,0 };
    int count = 5;
    int a = 0;
    std::cout << data << std::endl; // 이렇게 하면 주소값이 나옵니다 야발 
}
*/

//비어 있는지 아닌지 알려주는 함수
//bool IsEmpty();
// [0][0][0][0][0] return true; 
//  [11][0][0][0][0]  return false; 
/*
#include <iostream>
#include <string>
int main()
{
    bool b1 = true;
    bool b2 = false;

    int data[5] = { 0,2,3,0,0 };
    int count = 5;
    int a = 0;
    
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            a++;
        }
        else
        {
            a--;
        }
        
    }
    if (a == count)
    {
        b1;
        //printf("true");
        std::cout << "stack를IsEmpty()확인" << b1 << std::endl;
    }
    else
    {
        b2;
        //printf("false");
        std::cout << "stack를IsEmpty()확인" << b2 << std::endl;
    }
    
    
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            return true;
            std::cout << "stack를IsEmpty()확인" << b1 << std::endl;
        }
        else
        {
            return false;
            std::cout << "stack를IsEmpty()확인" << b2 << std::endl;
        }

    }
    
}
*/
/*
#include <iostream>
#include <string>
int main()
{
    bool b1 = true;
    bool b2 = false;

    int data[5] = { 0,2,3,0,0 };
    int count = 5;
    int a = 0;

    for (int i = 0; i < count; i++)
    {
        std::cout << i << data[i] << std::endl;
    }
}
*/

#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,2,3,0,0};
    int count = 5;
    int a = 0;
    int b = 0;

    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            a++;
        }
        b = i;
    }
    data[b - a+1] = 12;
    for (int i = 0; i < count; i++)
    {
        std::cout << i<<"번째" << data[i] << std::endl;
    }
}