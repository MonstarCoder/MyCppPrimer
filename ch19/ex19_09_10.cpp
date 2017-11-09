#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <typeinfo>
#include <string>
using std::string;

int main()
{
    class A {};
    class B : public A {};
    class C : public B {};
    
    int arr[10];
    B b;
    A* a = &b;
  //ex19.9  
    cout << typeid(1).name() << ", "
        << typeid(string).name() << ", "
        << typeid(arr).name() << ", "
        << typeid(a).name() << ", "
        << typeid(b).name() << endl;
}
