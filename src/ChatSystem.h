#pragma once
#include "Message.h"
#include "User.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <memory>

class ChatSystem{
    private:
        std::unordered_map<int, std::unique_ptr<User>> users_;
        std::vector<Message> messages_;
        int nextUserId_;
    public:
        ChatSystem();
        int addUser(const std::string& name);
        User* findUser(int id);
        void showAllUsers();
        void addMessage(Message newMessage);
        void showAllMessages();
        std::vector<Message> getMessages(int id1, int id2);
};

