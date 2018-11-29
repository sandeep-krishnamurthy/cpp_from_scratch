#include <iostream>
#include "Timer.h"

int main()
{
    long sum;
    std::cout << "Starting Now! Sum of 1000000 longs...\n";
    Timer timer;
    timer.start();
    for(long i=0; i<1000000; i++)
    {
        sum += i;
    }
    timer.stop();
    std::cout << "Total time - " << timer.duration() << "Seconds \n";
    timer.reset();
}