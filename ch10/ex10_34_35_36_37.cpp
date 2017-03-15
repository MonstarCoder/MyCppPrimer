#include<iostream>
#include<algorithm>
#include<iterator>
#include<string>
#include<list>
#include<fstream>

using namespace std;

void r_print(const vector<int>& v);
void r_withOrdinary_print(const vector<int>& v);
list<int>::iterator find_last_zero(const vector<int>& v);
void vec_reverse(const vector<int>& v, list<int>& l);

inline void r_print(const vector<int>& v)
{
	for_each(v.crbegin(), v.crend(), 
		[](const int& s){cout << s << " ";});	
}

inline void r_withOrdinary_print(const vector<int>& v)
{
	for ( auto it = std::prev(v.cend()); it != std::prev(v.cbegin()); --it)
		cout << *it << " ";
	cout << endl;
}

inline list<int>::iterator find_last_zero(list<int>& l)
{
	auto r_it = find(l.rbegin(), l.rend(), 0);
	auto it = r_it.base();
	return prev(it);
}

inline void vec_reverse(const vector<int>& v, list<int>& l)
{
	copy(v.crbegin() + 3, v.crbegin() + 8, back_inserter(l));
}

int main()
{
	//test for ex10_34
	vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; 
	r_print(v);
	cout << endl;
	//test for ex10_35
	vector<int> v2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	r_withOrdinary_print(v2);
	//test for ex10_36
	list<int> l = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	auto it = find_last_zero(l);
	cout << *it << endl;
	//test for ex10_37
	vector<int> l2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	list<int> lst;
	vec_reverse(l2, lst);
	for (auto i : lst) cout << i << " ";
	cout << endl;
	
	return 0;
}
