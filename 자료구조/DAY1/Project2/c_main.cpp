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

//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
//[0][0][0][0][0] return true; 
// / [11][0][0][0][0]  return false; 
int main() {
    int data[5] = {0,0,0,0,0}; 
    int count = 5;			
 
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0) 
        {
            printf("��");
        }
        else if (data[i] != 0)
        {
            printf("����");
        }

    }
    
}
*/
/*
//�ڷḦ �����ִ� �Լ�
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
//���� �־��ִ� �Լ�(_data :�߰��� ������)
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
