#include<iostream>
#include<vector>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	vector<int> vec{1, 1, 2, 2, 3, 3};
	list<int> lst;

	unique_copy(vec.cbegin(), vec.cend(), back_inserter(lst));
	for (auto i : lst) cout << i << " "; cout << endl;
	return 0;
}
