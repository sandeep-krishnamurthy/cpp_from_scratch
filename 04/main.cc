#include <iostream>

// Forward declaration of calculator functions
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
/*
* Gets an integer input from the user
*/
int get_user_input()
{
    int input;
    std::cout << "Enter an integer number: ";
    std::cin >> input;
    return input;
}

int main()
{
    int input1, input2, sum, diff, prod;
    std::cout << "Addition...." << std::endl;
    input1 = get_user_input();
    input2 = get_user_input();
    sum = add(input1, input2);
    std::cout << "Sum - " << sum << std::endl;

    std::cout << "Subtraction...." << std::endl;
    input1 = get_user_input();
    input2 = get_user_input();
    diff = subtract(input1, input2);
    std::cout << "Diff - " << diff << std::endl;

    std::cout << "Multiplication...." << std::endl;
    input1 = get_user_input();
    input2 = get_user_input();
    prod = multiply(input1, input2);
    std::cout << "Product - " << prod << std::endl;
}