#include "ChatSystem.h"
#include <iostream>

ChatSystem::ChatSystem():nextUserId_(1){
    //messages_.reserve(100);
}

void ChatSystem::addUser(const std::string& name){
    users_.emplace(nextUserId_, std::make_shared<User>(nextUserId_, name));
    nextUserId_++;
}

std::shared_ptr<User> ChatSystem::findUser(int id){
    auto it = users_.find(id);
    if(it == users_.end()){
        std::cout << "can't find userId " << id << std::endl;
        return nullptr;
    }
    else
        return it->second;
}

void ChatSystem::showAllUsers(){
    if(users_.empty()) 
        std::cout << "no users" << std::endl;
    else
        for (auto it = users_.begin(); it != users_.end(); ++it) {
        std::cout << "ID: " << it->first 
                  << ", Name: " << it->second->getName() 
                  << std::endl;
    }
}