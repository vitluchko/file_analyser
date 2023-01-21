//
// Created by appetitus on 20.11.22.
//

#ifndef FILEREADER_DBCONNECTION_H
#define FILEREADER_DBCONNECTION_H

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

using namespace std;

class DBConnection {
private:
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;
    static int callback(void *NotUsed, int argc, char **argv, char **azColName);

public:
    void openDatabase();
};

#endif //FILEREADER_DBCONNECTION_H
