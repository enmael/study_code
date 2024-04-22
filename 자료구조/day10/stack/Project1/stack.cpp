#include "Stack.h"

void Stack::Clear()

{
    for (int i = 0; i < MaxCount; i++)
    {
        data[i] = -99;
    }

    count = 0;
}

int Stack::Count()
{
	return count;
}

bool Stack::IsEmpty() //�ְ� �׷��ϱ� ����ִ��� �ƴ��� Ȯ���ϰ� �� ��� ������ ���� ���� PUSH ���� ������?
{
    for (int i = 0; i < MaxCount; i++)
    {
        int a = 0;
        if (data[i] == -99)
        {
            a = a + 1;
        }
        else
        {
            a = a - 1;
        }

        if (a == MaxCount)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

bool Stack::Push(int _data)
{
    if (IsEmpty() == true)
    {
        //int* data = new int[count];
        data[0] = _data;
        
    }
    else
    {
        int* temp = new int[count];
        for (int i = 0; i < count; i++)
        {
            if (i <= count)
            {
                temp[i] = data[i];
            }
            else if (i == count)
            {
                delete data;
                temp[i + 1] = _data;
               
            }
            
        }
    }
    return true;
}

int Stack::Pop()
{
    if (IsEmpty() == false)
    {
        data[count] = -99;
        int* temp = new int[count];
        for (int i = 0; i < count; i++)
        {

            if (i < count)
            {
                temp[i] = data[i];
            }
            else if (i == count)
            {
                delete data;
            }
        }
    }
    return true;
}

Stack::Stack()
{
    Clear();
}

