#include "Stack.h"

void Stack::Clear()//처리
{
    for (int i = 0; i < count; i++)
    {
        data[i] = 0;
        cout << "data에는"<<i <<"번째에는"<< data[i] << endl;
    }

}

int Stack::Count() // 처리
{
    count = sizeof(data) / sizeof(*data);
    return count;
}

bool Stack::IsEmpty() //비어 있는지 아닌지 알려주는 함수
{
    return false;
}

bool Stack::Push(int _data) //값을 넣어주는 함수
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