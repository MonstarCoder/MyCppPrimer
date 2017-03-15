#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool predicate(const string& s)
{
	return s.size() >= 5;
}

int main()
{
	auto v = vector<string>{"a", "aa", "aaaaa", "bbb", "bbbbb"};
	auto pivot = partition(v.begin(), v.end(), predicate);

	for ( auto i = v.begin(); i != pivot; ++i)
		cout <<*i << " "; cout << endl;

	return 0;
}
