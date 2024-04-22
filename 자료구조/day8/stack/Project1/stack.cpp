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
    int a = 0;
    for (int i = 0; i < MaxCount; i++)
    {
        if (data[i] == -99)
        {
            a = a + 1;
        }
        else if (data[i] > -99)
        {
            a = a - 1;
        }
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

bool Stack::Push(int _data)
{

    if (IsEmpty() == true)
    {
        data[0] = _data;
    }
    else if (IsEmpty() == false)
    {
        for (int i = 0; i < MaxCount; i++)
        {
            if (data[i] > -99)
            {
                arr[i] = data[i];
            }
            else if (data[i] == -99 && data[i - 1] > -99)
            {
                arr[i] = _data;
            }
        }
    }

    for (int i = 0; i < MaxCount; i++)
    {
        if (arr[i] > -99)
        {
            data[i] = arr[i];
        }
    }
    return true;
}

int Stack::Pop()
{
    if (IsEmpty() == true)
    {
        return NULL;
    }
    else
    {
        for (int i = 0; i < MaxCount; i++)
        {
            if (data[i] == -99)
            {
                data[i - 1] = -99;
                break;
            }
            
        }
    }

    return true;
}

void Stack::Line()
{
    cout << "##################" << endl;
    for (int i = 0; i <MaxCount; i++)
    {
        cout << i << " ¹øÂ° °ª :" << data[i] << endl;
    }
    cout << "##################" << endl;
}

Stack::Stack()
{
    Clear();
}


