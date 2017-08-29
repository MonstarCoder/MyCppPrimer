#ifndef CP5_ex07_05_h
#define CP5_ex07_05_h

#include <string>

class Person
{
    std::string name;
    std::string address;

 public:
    const std::string& getName() const { return name; }
    const std::steing& getAddress() const { return address; }
};

#endif
