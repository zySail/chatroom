# include "User.h"
#include <iostream>

User::User(int id, const std::string& name): id_(id), name_(name){}

int User::getId(){return id_;}

std::string User::getName(){return name_;}

void User::printInfo(){
    std::cout << "userInfo:" << std::endl 
    << "    User Id: " << id_ << std::endl 
    << "    User Name: " << name_ << std::endl;
}