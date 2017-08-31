#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

void ReadFileToVec(const string& FileName, vector<string>& vec)
{
	ifstream ifs(FileName);
	if(ifs) {
		string buf;
		while (std::getline(ifs, buf)) vec.push_back(buf);
		}
}

int main()
{
	vector<string> vec;
	ReadFileToVec("~/CppPrimer/ex08/ex08_04", vec);
	for (const auto& str : vec) cout << str << endl;
	return 0;
}
