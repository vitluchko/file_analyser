cmake_minimum_required(VERSION 3.23)
project(foo)

set(CMAKE_CXX_STANDARD 20)

set(HEADER_LIB IFileSystem.h
                Users.h
                CMDFile.h)

set(SOURCE_LIB Users.cpp
                CMDFile.cpp DBConnection.cpp DBConnection.h)

add_library(foo STATIC ${HEADER_LIB} ${SOURCE_LIB})

