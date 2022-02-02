#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class IFileSystem
{
public:
	void virtual GetFiles() = 0;
	void virtual CountExpansion() = 0;
};

class CMDFile : public IFileSystem
{
private:
	char file[50] = "info.txt"; // save file
	char dway[255] = "dir "; // dir
	char erase[140] = "erase "; // delete file
	char sign1[4] = " > "; char sign2[2] = "*";

	char way[70]; // way
	char expansion[10]; // expansion
	int count = 0;

	char p[130] = "";

public:
	void GetFiles() override
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
	void CountExpansion() override
	{
		strcat_s(p, way);
		strcat_s(p, file);

		string path = p;

		ifstream fin;
		fin.open(p);

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

			cout << "Result: " << count << endl;

			strcat_s(erase, way);
			strcat_s(erase, file);
			system(erase);
		}
	}
};

class User
{
public:
	void FileReading(IFileSystem& method)
	{
		method.GetFiles();
	}
	void Countig(IFileSystem& method)
	{
		method.CountExpansion();
	}
};

int main()
{
	CMDFile cmd;
	User u;

	u.FileReading(cmd);
	u.Countig(cmd);

	return 0;
}