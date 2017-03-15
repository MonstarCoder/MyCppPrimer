#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool isBiggerThanSix(const string& s, string::size_type sz)
{
	return s.size() > sz;
}

int main() 
{
	vector<string> words{"qwert", "qwerty", "qwertyu"};
	cout << count_if(words.cbegin(), words.cend(), bind(isBiggerThanSix, _1, 6)) << endl;
	return 0;
}
