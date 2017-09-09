#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<string> exclude = {"qq", "ww", "ee"};
	for(string word; cin >> word;) {
		if (find(exclude.begin(), exclude.end(), word) != exclude.end())
			cout << "excluded!" << endl;
		else
			exclude.push_back(word);
	}
	for (auto const& s : exclude) cout << s << " ";
	cout << endl;

	return 0;
}
