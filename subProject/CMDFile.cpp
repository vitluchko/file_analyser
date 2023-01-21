//
// Created by appetitus on 27.07.22.
//

#include "CMDFile.h"

void CMDFile::EnterPath() {
    cout << "Enter root path: ";
    getline(cin, path);
    cout << "Enter expected expansion: ";
    getline(cin, expansion);
}

void CMDFile::getFilesByExpansions() {
    EnterPath();
    const regex check_expansion(".+(" + expansion + ")");

    try {
        for(const auto& entry : fs::directory_iterator(path)) {
            if (is_directory(entry.path())) {

            }
            else if (regex_match(entry.path().string(), check_expansion)) {
                files_vector.push_back(entry.path().string());
            }
        }
    }
    catch (exception& ex) {
        cout << "Incorrect directory. Please try again." << endl << endl;
        getFilesByExpansions();
    }
}
