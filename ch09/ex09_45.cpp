#include <iostream>
#include <string>

//! Exercise 9.45
std::string pre_suffix(const std::string& name, const std::string& pre,
                       const std::string& su);

int main()
{
    std::string name("alan");
    std::cout << pre_suffix(name, "Mr.", ",Jr.") << std::endl;

    return 0;
}

inline std::string pre_suffix(const std::string& name, const std::string& pre,
                              const std::string& su)
{
    auto ret = name;
    ret.insert(ret.begin(), pre.begin(), pre.end());
    ret.append(su);

    return ret;
}
