#include <iostream>

// forward declaration of global variable.
// Also showing local file scope.
extern const int g_pi;

void print_pi()
{
    std::cout << "Global value Pi - " << g_pi << std::endl;
    // g_gravity is not accesible here.
}

int main()
{
    extern const int g_gravity;
    std::cout << "Global value g_gravity - " << g_gravity << std::endl;
    print_pi();
}