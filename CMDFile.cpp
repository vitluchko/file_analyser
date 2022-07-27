//
// Created by appetitus on 05.03.2022.
//
#pragma once

#include <iostream>
#include <fstream>
#include <string.h>
#include "CMDFile.h"

using namespace std;
using namespace KeyWord;

void CMDFile::GetFiles()
{
    cout << "Enter the correct way to the directory:\n";
    cin >> way;

    cout << "\nEnter the expansion of the files:\n";
    cin >> expansion;

    strcat(dway, way);
    strcat(dway, sign2);
    strcat(dway, expansion);
    strcat(dway, sign1);
    strcat(dway, way);
    strcat(dway, file);

    system(dway);
}

void CMDFile::CountExpansion()
{
    strcat(p, way);
    strcat(p, file);

    static const string path = p;

    ifstream fin;
    fin.open(path);

    if (!fin.is_open())
    {
        cout << "File isn't open!\n";
    }
    else
    {
        int tcount = 0, i = 0; char ch;
        while (fin.get(ch))
        {
            if (tcount == strlen(expansion))
            {
                count++;
                tcount = i = 0;
            }
            if (expansion[i] == ch)
            {
                tcount++; i++;
            }
            else tcount = i = 0;
        }
        fin.close();

        cout << "\nResult: " << count << " files with expansion " << expansion << endl;

        strcat(erase, way);
        strcat(erase, file);
        system(erase);
    }
}
