#include <iostream>

class Foo {};

template<typename T>
std::ostream& print(std::ostream& os, const T& t)
{
	return os << t;
}

template<typename T, typename... Args>
std::ostream&
print(std::ostream &os, const T &t, const Args&... rest)
{
	os << t << ", ";
	return print(os, rest...);
}

int main()
{
	print(std::cout, 1, 2);

	print(std::cout, 1, 2, 3, 4, "sss");

	Foo foo, bar;
//	print(std::cout, foo, bar);
}
