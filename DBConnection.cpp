//
// Created by appetitus on 27.07.22.
//

#include "DBConnection.h"

void DBConnection::Connection()
{
    sqlite3 *db;
    char* zErrMsg = 0;
    int rc;

    rc = sqlite3_open("test.db", &db);
    if ( rc )
    {
        fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
    }
    else {
        fprintf(stderr, "Opened data base succesfully!\n");
    }
    sqlite3_close(db);
}
