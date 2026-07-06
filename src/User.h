#pragma once
#include <string>

class User{
    private:
        int id_;
        std::string name_;
    public:
        User(int id, const std::string& name);
        int getId();
        std::string getName();
        void printInfo();
};