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

//���� ���ִ� �Լ�
//ȣ�� �ѹ� �Ҷ����� ��ȯ�� �Ǿ���.
//Pop�Ұ��� ���� NULL ��ȯ
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
            std::cout << "0�� �Է��Ҽ� �����ϴ�" << std::endl;

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
    std::cout << data << std::endl; // �̷��� �ϸ� �ּҰ��� ���ɴϴ� �߹� 
}
*/

//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
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
        std::cout << "stack��IsEmpty()Ȯ��" << b1 << std::endl;
    }
    else
    {
        b2;
        //printf("false");
        std::cout << "stack��IsEmpty()Ȯ��" << b2 << std::endl;
    }
    
    
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            return true;
            std::cout << "stack��IsEmpty()Ȯ��" << b1 << std::endl;
        }
        else
        {
            return false;
            std::cout << "stack��IsEmpty()Ȯ��" << b2 << std::endl;
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
        std::cout << i<<"��°" << data[i] << std::endl;
    }
}