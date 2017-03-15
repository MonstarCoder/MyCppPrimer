#include<iostream>

using namespace std;

int main()
{
	int local_val = 7;
	auto d_to_zero = [&local_val]() {
		if (local_val == 0)
			return true;
		else {
			--local_val;
			return false;
		}
	};

	while (!d_to_zero()) cout << local_val << endl;
	return 0;
}
