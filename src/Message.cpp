#include "Message.h"
#include <iostream>

Message::Message(int senderId, int receiverId, const std::string &content)
    : senderId_(senderId), receiverId_(receiverId), content_(content){
        timestamp_ = std::time(NULL);
    }

void Message::printInfo() const{
    std::cout << "messageInfo:" << std::endl
        << "    senderId: " << senderId_  << std::endl
        << "    receiverId: " << receiverId_  << std::endl
        << "    content: " << content_ << std::endl
        << "    timestamp: " << timestamp_ << std::endl; 
}

