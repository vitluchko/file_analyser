#include <iostream>
#include <cstring>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

#include "subProject/CMDFile.h"
#include "subProject/Users.h"
#include "subProject/IFileSystem.h"

using namespace std;
using namespace KeyWord;

int main()
{
    CMDFile cmd;
    Users u;

    u.FileReading(cmd);
    u.Countig(cmd);

    sqlite3 *db;
    char *zErrNsg = 0;
    int rc;
    char *sql;
    const char* data = "Callback function called";

    rc = sqlite3_open("test.db", &db);

    if (rc)
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
        return (0);
    }
    else
    {
        fprintf(stderr, "Opened database successfully\n");
    }

    sqlite3_close(db);

    return 0;
}