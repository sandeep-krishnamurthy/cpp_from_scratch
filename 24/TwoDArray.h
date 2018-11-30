#ifndef TWODARRAY_H
#define TWODARRAY_H

#include <iostream>
#include <vector>
#include <cstdint>
#include <cassert>

class TwoDArray
{
private:
    // We will maintain one block of memory of size m_dim1*m_dim2
    int32_t *m_data;
    short m_dim1;
    short m_dim2;

public:
    // Default constructor
    TwoDArray();

    // Constructor
    TwoDArray(const int dim1, const int dim2);

    // Copy Constructor
    TwoDArray(const TwoDArray &other);

    // Operator Overloading

    // Overload cout
    friend std::ostream& operator<<(std::ostream &out, TwoDArray &other);
    // Overload cin
    friend std::istream& operator>>(std::istream &cin, TwoDArray &other);

    // Binary Arithmetic operators to do elementwise operation
    TwoDArray& operator+(TwoDArray& other);
    TwoDArray& operator+=(TwoDArray& other);

    TwoDArray& operator-(TwoDArray& other);
    TwoDArray& operator-=(TwoDArray& other);

    TwoDArray& operator*(TwoDArray& other);
    TwoDArray& operator*=(TwoDArray& other);

    // Elementwise comparison operations
    bool operator==(TwoDArray &other);
    bool operator>=(TwoDArray &other);
    bool operator<=(TwoDArray &other);

    // Overload paranthesis for indexing. Return reference so it can be assigned
    int32_t& operator()(int index1, int index2);

    // Assigment operator
    TwoDArray& operator=(TwoDArray& other);

    // Helper Functions

    // Destructor
    ~TwoDArray();

private:
    // Utility Function
    void validateShapes(TwoDArray& other);
};

#endif