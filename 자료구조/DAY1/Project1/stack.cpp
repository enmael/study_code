#include "Stack.h"

void Stack::Clear()//ó��
{
    for (int i = 0; i < count; i++)
    {
        data[i] = 0;
        cout << "data����"<<i <<"��°����"<< data[i] << endl;
    }

}

int Stack::Count() // ó��
{
    count = sizeof(data) / sizeof(*data);
    return count;
}

bool Stack::IsEmpty() //��� �ִ��� �ƴ��� �˷��ִ� �Լ�
{
    return false;
}

bool Stack::Push(int _data) //���� �־��ִ� �Լ�
{
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            data[i] = _data;
        }
    }
}

int Stack::Pop()
{
    return 0;
}

Stack::Stack()
{
}