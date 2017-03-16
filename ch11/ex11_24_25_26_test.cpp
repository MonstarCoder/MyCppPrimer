#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    //! ex11.24
    std::map<int, int> m;
    m[0] = 1;

    for (const auto& e : m) std::cout << e.first << " " << e.second << "\n";

    //! ex11.25
    std::vector<int> v;
    v[0] = 1;

    for (const auto& e : v) std::cout << e << "\n";

    //! ex11.26
    std::map<int, std::string> map = {{1, "ss"}, {2, "sz"}};

    std::map<int, std::string>::key_type type_to_subscript = 1;
    //! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //! that is, int.

    std::map<int, std::string>::mapped_type type_to_return =
        map[type_to_subscript];
    //! ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //! that is, std::string

    return 0;
}
