#include "User.h"
#include "Message.h"
#include <iostream>

int main()
{
    std::cout << "Init ChatRoom" << std::endl;
    User user1("zhang", 1);
    user1.printInfo();
    Message message1(1, 2, "This is a message");
    message1.printInfo();
    return 0;
}
