#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void elimdups(vector<string>& vs)
{
	sort(vs.begin(), vs.end());
	auto new_end = std::unique(vs.begin(), vs.end());
	vs.erase(new_end, vs.end());
}

void biggies(vector<string>& vs, size_t sz)
{
	elimdups(vs);

	stable_sort(vs.begin(), vs.end(),
		[](string const& lhs, string const& rhs) {
			return lhs.size() < rhs.size();
			});

	auto wc = find_if(vs.begin(), vs.end(),
		[sz](string const &s) { return s.size() >= sz; });

	for_each(wc, vs.end(), [](const string& s) { cout << s << " ";});
}

int main()
{
	vector<string> v{"qwer", "qwer", "asdf", "asdf", "zxc"};
	cout << "ex10.16: ";
	biggies(v, 3);
	cout << endl;

	return 0;
}
