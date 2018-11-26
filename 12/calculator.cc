#include <iostream>
using namespace std;
 
double addition(double num1, double num2)
{
    return num1 + num2;
}

double subtraction(double num1, double num2)
{
    return num1 - num2;
}

double division(double num1, double num2)
{
    return num1 / num2;
}

double multiplication(double num1, double num2)
{
    return num1 * num2;
}

double calculate(char operation, double num1, double num2)
{
    switch(operation)
    {
        case '+':
            return addition(num1, num2);
        case '-':
            return subtraction(num1, num2);
        case '*':
            return multiplication(num1, num2);
        case '/':
            return division(num1, num2);
    }
}