#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	//ex11_24
	map<int, int> m;
	m[0] = 1;
	for (const auto& e : m) cout << e.first << " " << e.second << "\n";

	//ex11_25
	vector<int> v;
	v[0] = 1;
	for (const auto& e : v) cout << e << "\n";

	//ex11_26
	map<int, string> mapp = {{1, "aa"}, {2, "bb"}};
	map<int, string>::key_type type_to_subscript = 1;
	map<int, string>::mapped_type type_to_return = mapp[type_to_subscript];

	return 0;
}
