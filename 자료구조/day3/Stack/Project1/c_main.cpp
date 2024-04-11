//2024.04.11
#include <iostream>
#include <string>
int main()
{
    int data[5] = { 1,0,1,0,0 };
    int count = 5;
    int number = 0;

    for (int i = count - 1; i > 0; i--)
    {

        if (data[i] == 0)
        {
            if (data[i - 1] > 0 )
            {
                if(data[i + 1]==0)
                {
                    number = i;
                }
            }
            
        }
    }
    data[number] = 12;

    for (int i = 0; i < count; i++)
    {
        std::cout << i << "¹øÂ°" << data[i] << std::endl;
    }

}