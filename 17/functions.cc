#include <iostream>
#include <functional>

// Show function overloading
int add(int num1, int num2) {
    std::cout << "INT Addition\n";
    return num1 + num2;
}

double add(double num1, double num2) {
    std::cout << "DOUBLE Addition\n";
    return num1 + num2;
}

int subtract(int num1, int num2) {
    std::cout << "INT Subtraction\n";
    return num1 - num2;
}

double subtract(double num1, double num2) {
    std::cout << "DOUBLE Subtraction\n";
    return num1 - num2;
}

// Function pointers - Callback functions
void log_status(std::string message) {
    std::cout << "INFO: " << message << std::endl;
}
// Callback for logger
std::function<void(std::string)> logger = log_status;

int main() {
    int num1_i = 10, num2_i = 11;
    double num1_d = 20.32, num2_d = 30.22;

    logger(std::to_string(add(num1_i, num2_i)));
    logger(std::to_string(add(num1_d, num2_d)));
    logger(std::to_string(subtract(num1_i, num2_i)));
    logger(std::to_string(subtract(num1_d, num2_d)));
}