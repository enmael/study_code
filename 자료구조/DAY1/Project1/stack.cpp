#include "Stack.h"

void Stack::Clear()

{

    for (int i = 0; i < count; i++)
    {
        data[i] = 0;
    }
}

int Stack::Count() 
{
    count = sizeof(data) / sizeof(*data);
    return count;
}

bool Stack::IsEmpty() 
{
    /*
    for (int i = 0; i < count; i++)
    {
        cout << i<<" 번째 값 :" << data[i] << endl;
    }
    */
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
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
    int s = 0;
    int a = 0;
    for (int i = 0; i < count; i++)
    {
        if (data[i] == 0)
        {
            a++;
          
        }

    }
    data[count - a + 1] = _data;
    s = data[count - a+1];
    return s;
}

int Stack::Pop(int a) 
{

    int s = 0;
    
    for (int i = 0; i < count; i++)
    {
        if (a == data[i])
        {
            data[i] = 0;
            s = data[i];
        }

    }
    return s;
}

Stack::Stack()
{
}

void Stack::Line()
{
    for (int i = 0; i < count; i++)
    {
        cout << i << " 번째 값 :" << data[i] << endl;
    }
}