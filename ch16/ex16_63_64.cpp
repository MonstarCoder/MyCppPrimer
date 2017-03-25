#include <iostream>
#include <vector>
#include <cstring>

//! template
template<typename T>
std::size_t count(const std::vector<T>& vec, T value);

//! template specialization
template<>
std::size_t count (const std::vector<const char*> &vec, const char* value);

int main()
{
	    //! for ex16.63
		/*
		    std::vector<int> vi = {1,2,3,4,5,6,7,1,1,1,1};
			    std::vector<double> vd = {1.1,1.1,2.3,4};
				    std::cout << count(vd, 1.1);
					*/
					    //! for ex16.64
						    std::vector<const char*> vcc = {"alan","alan","alan","alan","moophy"};
							    std::cout << count(vcc, "alan");

								    return 0;
}

//! template
template<typename T>
std::size_t count(const std::vector<T>& vec, T value)
{
	    std::size_t count = 0;
		    for(auto& item : vec)
				        count += (item == value)? 1 : 0 ;

						    return count;
}

//! template specialization
//! where T == const char*
template<>
std::size_t count (const std::vector<const char*> &vec, const char* value)
{
	    std::size_t count = 0;
		    for(auto& item : vec)
				        count += (strcmp(item,value) == 0)? 1 : 0;

						    return count;
}
