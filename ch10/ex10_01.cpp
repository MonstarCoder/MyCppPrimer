#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
	vector<int> vec = {1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	cout << "ex10_01: " << count(vec.cbegin(), vec.cend(), 1) << endl;

	list<string> lst = {"aaa", "bbb", "ccc", "aaa"};
	cout << "ex10_02: " << count(lst.cbegin(), lst.cend(), "aaa") << endl;

	return 0;
}
