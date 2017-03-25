#include <iostream>
using namespace std;
istream& func(istream &is)
{
	std::string buf;
	while (is >> buf)
		std::cout << buf << std::endl;
	is.clear();
	return is;
}
int main()
{
	istream& is = func(std::cin);
	std::cout << is.rdstate() << std::endl;
	return 0;
}