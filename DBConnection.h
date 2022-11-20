//
// Created by appetitus on 20.11.22.
//

#ifndef FILEREADER_DBCONNECTION_H
#define FILEREADER_DBCONNECTION_H


#include <sqlite3.h>
#include <stdio.h>
#include <stdlib.h>

class DBConnection {
private:
    sqlite3 *db;
    char *zErrMsg = 0;
    int rc;
    char *sql;
    const char* data = "Callback function called";

public:
    void Create_Operation(sqlite3 *db, const char *sql_statment);
};


#endif //FILEREADER_DBCONNECTION_H
