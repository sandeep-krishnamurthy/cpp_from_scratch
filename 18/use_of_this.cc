#include <iostream>

class Calc {
    private:
        double m_value;
    public:
        Calc() : m_value(0) {

        }

        Calc(double value) : m_value(value) {

        }

        double getValue() {
            return m_value;
        }

        // Showcase use of this and chaining of calls
        Calc& add(double value) {
            this->m_value += value;
            return *this;
        }

        Calc& multiply(double value) {
            this->m_value *= value;
            return *this;
        }

        ~Calc() {
            // Nothing to do, just print to show behavior
            std::cout << "Destructor called!\n";
        }
};

int main() {
    // Do  dynamic allocation with a 1 as starting value.
    Calc* arithmetic_calculator = new Calc(1);

    std::cout << "Current value - " << arithmetic_calculator->getValue() << std::endl;
    std::cout << " Value after (1+10)*10 - " << arithmetic_calculator->add(10).multiply(10).getValue() << std::endl;
    delete arithmetic_calculator;
}