cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp cmake-build-debug/CMDFile.cpp cmake-build-debug/CMDFile.h cmake-build-debug/IFileSystem.h cmake-build-debug/Users.cpp cmake-build-debug/Users.h)
