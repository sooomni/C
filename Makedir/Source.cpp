#pragma warning (disable : 4996)
#include <iostream>
#include <string>
#include <fstream>
#include <direct.h>
#include <vector>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 2) {
		string filename = argv[1];
		ifstream in(filename);
		string s;
		vector <string> v;
		vector <string> ::iterator iter = v.begin();
		int countlines = 0;

		if (in.is_open()) {

			for (unsigned int i = 0; i < s.length(); i++)
			{
				if (s.at(i) == '\n')
				{
					countlines++;
				}

			}

			v.resize(countlines);

			while (getline(in, s)) {
				v.push_back(s);
			}


			for (iter = v.begin(); iter != v.end(); ++iter) {
				mkdir((*iter).c_str());
			}

			cout << "Successfully making directory." << endl;
		}

		else {
			cout << "Error! Can not find the file." << endl;
		}
		in.close();
	}
	else {
		cout << "Error! Check the name of file." << endl;
	}

	return 0;
}