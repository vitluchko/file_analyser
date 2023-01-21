//
// Created by appetitus on 27.07.22.
//

#ifndef LINUXPREVIEW_CMDFILE_H
#define LINUXPREVIEW_CMDFILE_H

#include "IFileSystem.h"
#include <iostream>
#include <filesystem>
#include <fstream>
#include <vector>
#include <cstring>
#include <regex>

using namespace std;
namespace fs = filesystem;

class CMDFile : public IFileSystem {
private:
    string path;
    string expansion;
    void EnterPath();

public:
    vector<string> files_vector;

    void getFilesByExpansions();
    string getPath() {
        return path;
    }
};

#endif //LINUXPREVIEW_CMDFILE_H