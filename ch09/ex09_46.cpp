#include <iostream>
#include <string>

std::string pre_suffix(const std::string& name, const std::string& pre,
                       const std::string& su)
{
    std::string ret(name);
    ret.insert(0, pre);
    ret.insert(ret.size(), su);

    return ret;
}

int main()
{
    std::string name("alan");
    std::cout << pre_suffix(name, "Mr.", ",Jr.");

    return 0;
}
