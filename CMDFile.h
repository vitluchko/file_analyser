//
// Created by appetitus on 05.03.2022.
//

#ifndef TEST_CMDFILE_H
#define TEST_CMDFILE_H


#include "IFileSystem.h"

namespace KeyWord
{
    class CMDFile : public IFileSystem
    {
    private:
        char file[50] = "info.txt";
        char dway[255] = "dir ";
        char erase[140] = "erase ";
        char sign1[4] = " > "; char sign2[2] = "*";

        char way[70];
        char expansion[10];
        int count = 0;

        char p[130] = "";

    public:
        void GetFiles() override;
        void CountExpansion() override;
    };
}


#endif //TEST_CMDFILE_H
