#include <iostream>

void doNothing(int& x)
{
    // To fool compiler that we use 'x'
}
int main()
{
    int x;
    doNothing(x);
    std::cout << "X - " << x << std::endl;
    return 0;
}