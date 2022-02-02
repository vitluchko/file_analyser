#include <iostream>
#include <fstream>
#include <string>
#include "CMDFile.h"

using namespace std;
using namespace KeyWord;

void CMDFile::GetFiles()
{
	cout << "Enter the correct way to the directory:\n";
	cin >> way;

	cout << "\nEnter the expansion of the files:\n";
	cin >> expansion;

	strcat_s(dway, way);
	strcat_s(dway, sign2);
	strcat_s(dway, expansion);
	strcat_s(dway, sign1);
	strcat_s(dway, way);
	strcat_s(dway, file);

	system(dway);
}

void CMDFile::CountExpansion()
{
	strcat_s(p, way);
	strcat_s(p, file);

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

		strcat_s(erase, way);
		strcat_s(erase, file);
		system(erase);
	}
}
