#include <iostream>

int main()
{
    char c;
    std::cout << "Enter a character - ";
    std::cin >> c;
    std::cout << "\nYou entered - " << c << std::endl;

    std::cout << "size - " << sizeof(c);
    std::cout << "casting to int - " << static_cast<int>(c) << std::endl;

    std::cout << "Casting int - 65 to char gives - " << static_cast<char>(int(65)) << std::endl;
    std::cout << "char16_t and char32_t are used for UNICODE - " << sizeof(char16_t) << ", " << sizeof(char32_t) << std::endl;
}