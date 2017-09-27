#include "ex16_14_screen.h"

int main()
{
    Screen<5, 5> screen('x');
    screen.set(2, 2, 'o');
    std::cout << screen << std::endl;

    std::cout << "please input characters:";
    std::cin >> screen;
    std::cout << screen << std::endl;
}

