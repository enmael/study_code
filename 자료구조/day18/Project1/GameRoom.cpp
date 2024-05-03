#include "GameRoom.h"

bool GameRoom::AddUser(USER& userInfo)
{
    list<int> numbers;
    count++;
    numbers.push_front(1);
}

bool GameRoom::DelUser(string name)
{
    return false;
}

bool GameRoom::IsEmpty()
{
    for (auto num : UserInfo)
    {

    }
}

bool GameRoom::IsFull()
{
    return false;
}

USER& GameRoom::GetUserInfo(string name)
{
    // TODO: insert return statement here
}

USER& GameRoom::GetUserInfo(int index)
{
    // TODO: insert return statement here
}

USER& GameRoom::GetMasterUserInfo()
{
    // TODO: insert return statement here
}

USER& GameRoom::GetLastUserInfo()
{
    // TODO: insert return statement here
}

bool GameRoom::BanUser(int index)
{
    return false;
}

void GameRoom::Clear()
{

}

int GameRoom::Count()
{
    return count;
}