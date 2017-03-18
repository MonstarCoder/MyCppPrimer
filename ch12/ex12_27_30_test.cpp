#include "ex12_27_30.h"
#include <iostream>

void runQueries(std::ofstream& infile)
{
	TextQuery tq(infile);
	while (true) {
		std::cout << "enter word to look for, or q to quit: ";
		string s;
		if (!(std::cin >> s) || s == "q") break;
		print(std::cout, tq.query(s)) << std::endl;
	}
}

int main()
{
	std::ifstream file("../../test.txt");
	runQueries(file);
}
