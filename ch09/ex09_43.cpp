#include <string>
using std::string;

#include <iostream>

void Replace(string& s, const string& oldVal, const string& newVal)
{
    for (auto beg = s.begin(); beg != s.end(); ++beg) {
        if (*beg != oldVal.front()) continue;
        if (std::distance(beg, s.end()) <
            std::distance(oldVal.begin(), oldVal.end()))
            break;
        if (string{beg, beg + oldVal.size()} == oldVal) {
            auto pos = std::distance(s.begin(), beg);
            s.erase(beg, beg + oldVal.size());
            s.insert(beg, newVal.cbegin(), newVal.cend());
            beg = std::next(s.begin(), pos + newVal.size() - 1);
        }
    }
}

int main()
{
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{
            "To drive straight thruthru is a foolish, thotho courageous act."};
        Replace(str, "thru", "through");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"To drive straight thru is a foolish, tho courageous act."};
        Replace(str, "thru", "thruthru");
        Replace(str, "tho", "though");
        std::cout << str << std::endl;
    }
    {
        string str{"my world is a big world"};
        Replace(str, "world",
                "worldddddddddddddddddddddddddddddddddddddddddddddddd");
        std::cout << str << std::endl;
    }
    return 0;
}
