#include <iostream>
#include <vector>
#include <string>
#include <memory>

void process(std::shared_ptr<int> ptr)
{
    std::cout << "inside the process function:" << ptr.use_count() << "\n";
}

int main()
{
    auto p = new int();
    auto sp = std::make_shared<int>();

//  process(sp);

//  process(new int());

//  process(p);

// process(std::shared_ptr<int>(p));

    return 0;
}
