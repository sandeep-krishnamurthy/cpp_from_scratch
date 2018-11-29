#ifndef TIMER_H
#define TIMER_H

#include <chrono> // for std::chrono functions
 
class Timer 
{
    private:
	    // Type aliases to make accessing nested type easier
	    using clock_t = std::chrono::high_resolution_clock;
	    using second_t = std::chrono::duration<double, std::ratio<1> >;
	    std::chrono::time_point<clock_t> m_beg;
        std::chrono::time_point<clock_t> m_end;
 
    public:
	    Timer();
        void start();
        void stop();
        double duration() const;
        void reset();
};

#endif