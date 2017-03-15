#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	vector<string> words{"qwer", "qwert", "qwerty", "qwertyu"};
	cout << count_if(words.cbegin(), words.cend(), [](const string& word) { return word.size() > 6;})
		<< endl;
	return 0;
}
