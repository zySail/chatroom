#include <iostream>

# include "User.h"

User::User(const std::string& userName, int userId)
    : name(userName), id(userId){}

int User::getId(){return id;}

std::string User::getName(){return name;}

void User::printInfo(){
    std::cout << "User Id: " << id << std::endl;
    std::cout << "User Name: " << name << std::endl;
}