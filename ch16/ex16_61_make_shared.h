#include <iostream>
#include <memory>

//! ex 16.61 my version makeshared
template <typename T, typename ... Args>
std::shared_ptr<T> wy_make_shared(Args&&...);

int main()
{
	    auto p = wy_make_shared<int>(42);
		    std::cout << *p  << std::endl;

			    auto p2= wy_make_shared<std::string>(10,'c');
				    std::cout << *p2  << std::endl;

}

template <typename T, typename ... Args>
inline std::shared_ptr<T>
wy_make_shared(Args&&... args)
{
	    std::shared_ptr<T> ret( new T(std::forward<Args>(args)...));
		    return ret;
}
