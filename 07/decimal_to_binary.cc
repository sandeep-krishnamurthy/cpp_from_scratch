#include <iostream>
#include <string>

int get_decimal_input()
{
    int input;
    std::cout << "Enter a decimal number - ";
    std::cin >> input;
    return input;
}

void decimal_to_binary(const int input, std::string &binary)
{
    if(input == 0)
    {
        binary.append("0");
        return;
    }
    if(input == 1)
    {
        binary.append("1");
        return;
    }
    int residual = input % 2;
    binary.append(std::to_string(residual));
    decimal_to_binary((input / 2), binary);
}

void reverse_string(std::string &input)
{
    int length = input.length();
    for(int i=0; i<(length/2); i++)
    {
        std::swap(input[i], input[length-i-1]);
    }
}

int main()
{
    std::cout << "DECIMAL TO BINARY\n";
    int input = get_decimal_input();
    std::string binary = ""; 
    decimal_to_binary(input, binary);
    reverse_string(binary);
    std::cout << binary << std::endl;
}