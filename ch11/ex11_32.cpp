#include<iostream>
#include<set>
#include<string>
#include<map>

using namespace std;

int main()
{
	multimap<string, string> authors{
		{"aaa", "aaa"}, {"bbb", "bbb"}, {"ccc", "ccc"}};
	map<string, multiset<string>> order_authors;
	for (const auto& author : authors)
		order_authors[author.first].insert(author.second);
	for (const auto& author : order_authors) {
		cout << author.first << ": ";
		for (const auto& work : author.second) cout << work << " ";
		cout << endl;
	}
	
	return 0;
}
