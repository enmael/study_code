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

bool Stack::IsEmpty()
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
        data[0] = _data;
        
    }
    else
    {
        
        for (int i = 0; i < MaxCount; i++)
        {
            if (data[i] > -99)
            {
                arr[i] = data[i];
            }
            else if (data[i] > -99 && data[i - 1] > -99)
            {
                arr[i] = _data;
            }
        }
    }
    return true;
}

int Stack::Pop()
{
    if (IsEmpty() == false)
    {
        
        
    }
    return true;
}

void Stack::Graph()
{
    for (int i = 0; i < MaxCount; i++)
    {
        cout << i << "번째 값은: " << data[i] << endl;
    }

    cout << "############################################### "<< endl;

    for (int i = 0; i < MaxCount; i++)
    {
        cout << i << "번째 값은: " << arr[i] << endl;
    }
}

Stack::Stack()
{
    Clear();
}

