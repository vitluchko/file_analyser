#include "CMDFile.h"
#include "Users.h"
#include "DBConnection.h"

using namespace std;

int main()
{
    CMDFile cmd;
    Users u;
    DBConnection dbc;

    dbc.openDatabase();
    /*u.getFilesByExpansions(cmd);

    for(auto i = 0; i < cmd.files_vector.size(); i++) {
        cout << cmd.files_vector[i] << endl;
    }*/

    return 0;
}