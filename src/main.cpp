#include "ChatSystem.h"
#include <iostream>

int main()
{
    std::cout << "Init ChatRoom" << std::endl;
    ChatSystem chat;
    chat.addUser("Zhang");
    chat.addUser("Li");
    chat.showAllUsers();
    if(auto user = chat.findUser(1))
        std::cout << user->getName() << std::endl;
    if(auto user = chat.findUser(3))
        std::cout << user->getName() << std::endl;
    return 0;
}
