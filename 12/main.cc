#include <iostream>
#include "calculator.h"
#include "io.h"

using namespace std;

int main()
{
    cout << "******** CALCULATOR APPLICATION *********\n";
    char operations[4] = {'+', '-', '*', '/'};

    char user_choice = read_char(operations);

    double num1 = read_double();
    double num2 = read_double();

    double result = calculate(user_choice, num1, num2);
    cout << "Result - " << result << endl;
    
    return 0;
}
