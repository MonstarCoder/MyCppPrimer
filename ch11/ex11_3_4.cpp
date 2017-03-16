#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

void word_count_pro(map<string, int>& m)
{ 
	string word;
	while(cin >> word) {
		for(auto& ch : word) ch = tolower(ch);
			word.erase(remove_if(word.begin(), word.end(), ispunct),
			word.end());
		++m[word];
	}
	for (const auto& e : m) cout << e.first << " : " << e.second << endl;
}

void word_count()
{
	map<string, size_t> word_count;
	string word;
	while(cin >> word) ++word_count[word];

	for (const auto& elem : word_count)
		cout << elem.first << " : " << elem.second << endl;
}

int main()
{
	map<string, int> m;
	word_count_pro(m);

	return 0;
}
