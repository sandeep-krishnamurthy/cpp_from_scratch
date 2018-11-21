#include <iostream>

/*
* Addition of 2 integers
*/
int add(int x, int y)
{
    return x + y;
}

/*
* Subtraction of 2 integers
*/
int subtract(int x, int y)
{
    return x - y;
}

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
    int input1, input2, sum, diff;
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
}