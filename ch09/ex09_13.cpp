#include<iostream>
#include<string>
#include<vector>
#include<list>

using std::list;
using std::vector;
using std::cout;
using std::endl;

int main()
{
	list<int> ilst(3,1);
	vector<int> ivc(3,2);

	vector<double> dvc(ilst.begin(), ilst.end());
	for (auto i : ilst) cout << i; cout << endl;
	for (auto i : dvc) cout << i; cout << endl;

	vector<double> dvc2(ivc.begin(), ivc.end());
	for(auto i : ivc) cout << i; cout << endl;
	for(auto i : dvc2) cout << i; cout << endl;

	return 0;
}
