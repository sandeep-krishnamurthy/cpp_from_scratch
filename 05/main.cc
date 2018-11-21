#include <iostream>

#include "calculator.h"
#include "io.h"

int main()
{
    std::cout << "Calculator Application" << std::endl;
    std::cout << "Make your choice." << std::endl;
    std::cout << "+ -> Addition\n- -> Subtraction\n* -> Multiplication\n/ -> Division" << std::endl;
    
    char choice = read_char();
    if(choice == '+')
    {
        std::cout << "Enter 1st integer - ";
        int num1 = read_integer();

        std::cout << "Enter 2nd integer - ";
        int num2 = read_integer();

        int sum = addition(num1, num2);
        std::cout << "Sum - " << sum << std::endl;
    } else if (choice == '-')
    {
        std::cout << "Enter 1st integer - ";
        int num1 = read_integer();

        std::cout << "Enter 2nd integer - ";
        int num2 = read_integer();

        int diff = subtraction(num1, num2);
        std::cout << "Difference - " << diff << std::endl;
    } else if (choice == '*')
    {
        std::cout << "Enter 1st integer - ";
        int num1 = read_integer();

        std::cout << "Enter 2nd integer - ";
        int num2 = read_integer();

        int mul = multiplication(num1, num2);
        std::cout << "Product - " << mul << std::endl;
    } else if (choice == '/')
    {
        std::cout << "Enter 1st integer - ";
        int num1 = read_integer();

        std::cout << "Enter 2nd integer - ";
        int num2 = read_integer();

        int div_res = division(num1, num2);
        std::cout << "Product - " << div_res << std::endl;
    }
}