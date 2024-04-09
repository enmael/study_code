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
