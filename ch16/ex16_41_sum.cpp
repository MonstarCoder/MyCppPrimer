#include <iostream>
#include <vector>
#include <string>

template<typename T>
auto sum(T lhs, T rhs) -> decltype(lhs + rhs)
{
	return lhs + rhs;
}

int main()
{
	auto s = sum(12345678901234567890, 12345678901234567890);
//std::cout << s << std::endl;
	return 0;
}
