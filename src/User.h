#pragma once

#include <string>

class User{
    private:
        int id;
        std::string name;
    public:
        User(const std::string& userName, int userId);
        int getId();
        std::string getName();
        void printInfo();
};