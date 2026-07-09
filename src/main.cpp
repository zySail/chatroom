#include "ChatSystem.h"
#include <iostream>

int main()
{
    std::cout << "Init ChatRoom" << std::endl;
    ChatSystem chat;
    chat.addUser("Zhang");
    chat.addUser("Li");
    chat.addUser("Wang");
    chat.showAllUsers();
    // if(auto user = chat.findUser(1))
    //     std::cout << user->getName() << std::endl;
    // if(auto user = chat.findUser(4))
    //     std::cout << user->getName() << std::endl;
    chat.addMessage(Message(1, 2, "m1"));
    chat.addMessage(Message(3, 2, "m2"));
    chat.showAllMessages();
    return 0;
}
