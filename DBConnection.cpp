//
// Created by appetitus on 20.11.22.
//

#include "DBConnection.h"

void DBConnection::Create_Operation(sqlite3 *db, const char *sql_statment)
{
    char *zErrMsg = 0;
    int rc;
    const char* data = "Callback function called";

    rc = sqlite3_exec(db, sql_statment, create_or_insert_callback, 0, &zErrMsg);

    if (rc != SQLITE3_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else fprintf(stdout, "Table created successfully\n");
}
