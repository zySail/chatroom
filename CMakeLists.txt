cmake_minimum_required(VERSION 3.10)

project(ChatRoom)

set(CMAKE_CXX_STANDARD 17)

add_executable(chatroom
    src/main.cpp
    src/User.cpp
    src/Message.cpp
    src/ChatSystem.cpp
)
