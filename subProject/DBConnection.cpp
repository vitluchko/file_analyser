//
// Created by appetitus on 20.11.22.
//

#include "DBConnection.h"

void DBConnection::Create_Operation(sqlite3 *db, const char *sql_statment)
{
    rc = sqlite3_exec(db, sql_statment, create_or_insert_callback, 0, &zErrMsg);

    if (rc != SQLITE3_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else fprintf(stdout, "Table created successfully\n");
}

void DBConnection::Basic_Operation(sqlite3 *db, const char *sql_statement)
{
    rc = sqlite3_exec(db, sql_statement, operation_callback, (void*)data, &zErrMsg);

    if (rc != SQLITE3_OK)
    {
        fprintf(stderr, "SQL error: %s\n", zErrMsg);
        sqlite3_free(zErrMsg);
    }
    else
    {
        fprintf(stdout, "Operation done successfully\n");
    }
}

int DBConnection::Create_Or_Insert_Callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }

    printf("\n");

    return 0;
}

int DBConnection::Operation_Callback(void *data, int argc, char **argv, char **azColName)
{
    int i;

    fprintf(stderr, "%s ", (const char*)data);

    for (i = 0; i < argc; i++)
    {
        printf(("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL"));
    }

    printf("\n");

    return 0;
}
