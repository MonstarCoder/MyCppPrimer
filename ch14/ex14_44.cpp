#include <iostream>
#include <string>
#include <map>
#include <functional>

//! normal function
int add(int i, int j)
{
    return i + j;
}

//! named lambda
auto mod = [](int i, int j) { return i % j; };

//! functor
struct wy_div {
    int operator()(int denominator, int divisor)
    {
        return denominator / divisor;
    }
};

//! the map
std::map<std::string, std::function<int(int, int)>> binops = {
    {"+", add},                                //  function pointer
    {"-", std::minus<int>()},                  //  library functor
    {"/", wy_div()},                           //  user-defined functor
    {"*", [](int i, int j) { return i * j; }}, //  unnamed lambda
    {"%", mod}                                 //  named lambda object
};

int main()
{
    while (true) {
        std::cout << "\npleasr enter: num operator num :\n";
        int n1, n2;
        std::string s;
        std::cin >> n1 >> s >> n2;

        std::cout << binops[s](n1, n2);
    }

    return 0;
}
