#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	multimap<string, string> authors {
		{"aaa", "aaa"}, {"bbb", "bbb"}, {"ccc", "ccc"}};
	string author = "aaa";
	string work = "aaa";

	auto found = authors.find(author);
	auto count = authors.count(author);
	while (count) {
		if (found->second == work) {
			authors.erase(found);
			break;
		}
		++found;
		--count;
	}

	for (const auto& author : authors)
		cout << author.first << " " << author.second << endl;

	return 0;
}
