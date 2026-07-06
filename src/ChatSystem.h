#pragma once
#include "Message.h"
#include "User.h"
#include <unordered_map>
#include <vector>
#include <string>
#include <memory>

class ChatSystem{
    private:
        std::unordered_map<int, std::shared_ptr<User>> users_;
        //std::vector<Message> messages_;
        int nextUserId_;
    public:
        ChatSystem();
        void addUser(const std::string& name);
        std::shared_ptr<User> findUser(int id);
        void showAllUsers();
};

