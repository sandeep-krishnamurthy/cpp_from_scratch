#include <iostream>

/*
           OUTPUT
    size of 'size_t' - 8
    size of 'bool' - 1
    size of 'int' - 4
    size of 'int16_t' - 2
    size of 'int32_t' - 4
    size of 'int64_t' - 8
    size of 'int8_t' - 1
    size of 'short' - 2
    size of 'long' - 8
    size of 'float' - 4
    size of 'double' - 8
    size of 'long double' - 16
    size of 'char' - 1
    size of 'char16_t' - 2
    size of 'char32_t' - 4
*/
int main()
{
    std::cout << "size of 'size_t' - " << sizeof(size_t) << std::endl;
    std::cout << "size of 'bool' - " << sizeof(bool) << std::endl;

    std::cout << "size of 'int' - " << sizeof(int) << std::endl;
    std::cout << "size of 'int16_t' - " << sizeof(int16_t) << std::endl;
    std::cout << "size of 'int32_t' - " << sizeof(int32_t) << std::endl;
    std::cout << "size of 'int64_t' - " << sizeof(int64_t) << std::endl;
    std::cout << "size of 'int8_t' - " << sizeof(int8_t) << std::endl;


    std::cout << "size of 'short' - " << sizeof(short) << std::endl;
    std::cout << "size of 'long' - " << sizeof(long) << std::endl;

    std::cout << "size of 'float' - " << sizeof(float) << std::endl;
    std::cout << "size of 'double' - " << sizeof(double) << std::endl;
    std::cout << "size of 'long double' - " << sizeof(long double) << std::endl;

    std::cout << "size of 'char' - " << sizeof(char) << std::endl;
    std::cout << "size of 'char16_t' - " << sizeof(char16_t) << std::endl;
    std::cout << "size of 'char32_t' - " << sizeof(char32_t) << std::endl;

    return 0;
}