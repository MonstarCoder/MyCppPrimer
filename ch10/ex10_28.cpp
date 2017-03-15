#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

template <typename Sequence> void print(Sequence const & seq)
{
	for(const auto& i : seq) cout << i << " ";
	cout << endl;
}

int main()
{
	vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};


	list<int> lst1;
	copy(vec.begin(), vec.end(), inserter(lst1, lst1.begin()));	
	print(lst1);

	list<int> lst2;
	copy(vec.begin(), vec.end(), back_inserter(lst2));
	print(lst2);

	list<int> lst3;
	copy(vec.begin(), vec.end(), front_inserter(lst3));
	print(lst3);

	return 0;
}
