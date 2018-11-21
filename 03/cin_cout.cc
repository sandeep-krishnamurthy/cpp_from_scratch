#include <iostream>

int get_user_input()
{
    int input;
    std::cout << "Enter an integer number: ";
    std::cin >> input;
    return input;
}

int main()
{
    int input1, input2;
    input1 = get_user_input();
    input2 = get_user_input();

    std::cout << "You entered - " << input1 << "," << input2 << std::endl;
}