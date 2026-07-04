#pragma once
#include <string>
#include <ctime>

class Message{
    private:
        int senderId_;
        int receiverId_;
        std::string content_;
        time_t timestamp_;
    public:
        Message(int senderId, int receiverId, const std::string &content);
        void printInfo() const;
};