#include <iostream>
#include "ex12_2.h"

int main()
{
	const StrBlob csb{"hello", "world"};
	StrBlob sb{"hello", "bad", "world"};

	cout << csb.front() << " " << csb.back() << endl;
	sb.back() = "monstar";
	cout << sb.front() << " " << sb.back() << endl;
}
