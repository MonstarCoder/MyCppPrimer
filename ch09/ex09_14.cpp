#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<const char*> lst{"a", "b", "c"};
	vector<string> vec;
	vec.assign(lst.begin(), lst.end());

	for (const auto& i : vec) cout << i << endl;

	return 0; 
}

