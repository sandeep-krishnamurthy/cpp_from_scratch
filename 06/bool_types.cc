#include <iostream>

int main()
{
    bool bool1;
    bool1 = true;
    std::cout << "Bool is an integer - " << bool1 << std::endl;

    bool1 = bool1 + 1;
    std::cout << "bool1 + 1 gives - " << bool1 << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Using boolalpha, we can print bool as bool - " << bool1 << std::endl;

    std::cout << "Casting boolean to an integer - " << static_cast<int>(bool1) << std::endl;
    return 0;
}