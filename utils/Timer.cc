#include "Timer.h" // for std::chrono functions
 
Timer::Timer()
{
}
	
void Timer::start()
{
    m_beg = clock_t::now();
}

void Timer::stop()
{
    m_end = clock_t::now();
}

double Timer::duration() const
{
    return std::chrono::duration_cast<second_t>(m_end - m_beg).count();
}

void Timer::reset()
{
	m_beg = clock_t::now();
    m_end = clock_t::now();
}
