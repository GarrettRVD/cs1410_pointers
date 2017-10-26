cmake_minimum_required(VERSION 3.8)
project(pointers)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp Order.cpp Sort2Num.h)
set(SOURCE_FILES testOrder.cpp Order.cpp Order.h)
add_executable(pointers ${SOURCE_FILES})