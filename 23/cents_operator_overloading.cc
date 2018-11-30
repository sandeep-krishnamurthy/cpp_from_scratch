#include <iostream>

class Cents 
{
    private:
        unsigned int m_cents;
    
    public:
        Cents() : m_cents(0)
        {

        }

        Cents(const unsigned int cents) : m_cents(cents)
        {

        }

        unsigned int getValue()
        {
            return m_cents;
        }

        friend Cents operator+(const unsigned int value, const Cents &cents)
        {
            return (Cents(value + cents.m_cents));
        }

        friend Cents operator+(const Cents &cents, const unsigned int value)
        {
            return (Cents(value + cents.m_cents));
        }

        friend Cents operator+(const Cents &cents1, const Cents &cents2)
        {
            return (Cents(cents1.m_cents + cents2.m_cents));
        }
};

int main()
{
    Cents c1(10);
    Cents c2(20);

    std::cout << "C1 - " << c1.getValue() << std::endl;
    std::cout << "C2 - " << c2.getValue() << std::endl;

    std::cout << "C1 + 10 - " << (c1 + 10).getValue() << std::endl;
    std::cout << "10 + C2 - " << (10 + c2).getValue() << std::endl;

    std::cout << "C1 + C2 - " << (c1 + c2).getValue() << std::endl;
}