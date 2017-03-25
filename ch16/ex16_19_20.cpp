#include <iostream>
#include <vector>
#include <list>

//! ex16.19
template<typename Container>
std::ostream& print(Container& c, std::ostream &os);

//! ex16.20
template<typename Container>
std::ostream& print2(Container& c, std::ostream &os);

int main()
{
	    std::vector<int> v = {1,23,6,4,5,7,4};
		    std::list<std::string> l = {"ss","sszz","saaas","s333s","ss2","sss"};
			    print2(v, std::cout);
				    print2(l, std::cout);

					    return 0;
}

//! ex16.19 using size() to control the loop
template<typename Container>
std::ostream & print(Container &c, std::ostream &os)
{
	    typedef typename Container::size_type size_type;

		    auto it = c.begin();
			    for(size_type i = 0; i!= c.size(); ++i)
					        os << *it++ << "\n";

							    return os;
}

//! ex16.20 using iterator to control the loop
template<typename Container>
std::ostream& print2(Container& c, std::ostream &os)
{
	    for (auto it = c.begin(); it != c.end(); ++it)
			        os << *it << "\n";

					    return os;
}
