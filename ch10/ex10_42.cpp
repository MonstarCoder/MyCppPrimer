#include<iostream>
#include<string>
#include<list>

using namespace std;

void elimDups(list<string>& words)
{
	words.sort();
	words.unique();
}

int main()
{
	list<string> lst = {"aaa", "aaa", "bbb"};
	elimDups(lst);
	for (const auto& e: lst) cout << e << " ";
	cout << endl;
	return 0;
}	
