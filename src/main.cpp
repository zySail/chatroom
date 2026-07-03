#include "User.h"
#include <iostream>

int main()
{
    std::cout << "Init ChatRoom" << std::endl;
    User user1("zhang", 1);
    user1.printInfo();
    std::cout << "User Id: " << user1.getId() << std::endl;
    std::cout << "User Name: " << user1.getName() << std::endl;
    return 0;
}
