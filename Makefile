cmake_minimum_required(VERSION 3.10)

project(IRCDServer)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

file(GLOB SOURCES
    src/main.cpp
    src/server/*.cpp
    src/client/*.cpp
    src/protocol/*.cpp
    src/utils/*.cpp
)

add_executable(ircd_server ${SOURCES})