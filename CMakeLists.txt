cmake_minimum_required(VERSION 3.23)
project(FileReader)

set(CMAKE_CXX_STANDARD 20)

set(SOURCE_EXE main.cpp)

include_directories(source/subProject)

add_executable(main ${SOURCE_EXE})

find_package(SQLite3)

if(SQLITE3_FOUND)
    message("Found sqlite3, and...")
    include_directories(${SQLite3_INCLUDE_DIR})
    target_link_libraries(main ${SQLite3_LIBRARY})
endif(SQLITE3_FOUND)

add_subdirectory(source/subProject)
target_link_libraries(main foo)