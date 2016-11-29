cmake_minimum_required(VERSION 3.6)
project(collatz)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wformat-security -Wmissing-include-dirs -Wuninitialized -Wtrampolines -Wconversion -Wuseless-cast -Wlogical-op -Wctor-dtor-privacy -Wold-style-cast -Wno-reorder -Wno-unused-parameter -Werror=delete-non-virtual-dtor -Werror=return-type -Werror=implicit -O2 -lgmpxx -lgmp")


set(SOURCE_FILES main.cpp)
add_executable(collatz ${SOURCE_FILES})