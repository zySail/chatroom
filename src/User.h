#pragma once
#include <string>

class User{
    private:
        int id_;
        std::string name_;
    public:
        User(const std::string& name, int id);
        int getId();
        std::string getName();
        void printInfo();
};