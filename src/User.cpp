# include "User.h"
#include <iostream>

User::User(const std::string& name, int id)
    : name_(name), id_(id){}

int User::getId(){return id_;}

std::string User::getName(){return name_;}

void User::printInfo(){
    std::cout << "userInfo:" << std::endl 
    << "    User Id: " << id_ << std::endl 
    << "    User Name: " << name_ << std::endl;
}