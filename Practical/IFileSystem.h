//
// Created by appetitus on 05.03.2022.
//

#ifndef TEST_IFILESYSTEM_H
#define TEST_IFILESYSTEM_H


class IFileSystem
{
public:
    void virtual GetFiles() = 0;
    void virtual CountExpansion() = 0;
};


#endif //TEST_IFILESYSTEM_H
