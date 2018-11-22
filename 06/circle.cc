#include <iostream>
#include "constants.h"

int main()
{
    std::cout << "Enter radius of the circle - ";
    double radius;
    std::cin >> radius;
    std::cout << "\nCircumference pi*r2 = " << constants::pi*radius*radius;
}