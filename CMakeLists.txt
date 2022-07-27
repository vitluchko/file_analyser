cmake_minimum_required(VERSION 3.22)
project(LinuxPreview)

set(CMAKE_CXX_STANDARD 20)

add_executable(LinuxPreview main.cpp Users.cpp Users.h IFileSystem.h CMDFile.cpp CMDFile.h DBConnection.cpp DBConnection.h)
