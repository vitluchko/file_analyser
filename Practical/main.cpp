#include <iostream>
#include <string.h>
#include <fstream>

#include "IFileSystem.h"
#include "CMDFile.h"
#include "Users.h"

using namespace std;
using namespace KeyWord;

int main()
{
    CMDFile cmd;
    Users u;

    u.FileReading(cmd);
    u.Countig(cmd);

    return 0;
}