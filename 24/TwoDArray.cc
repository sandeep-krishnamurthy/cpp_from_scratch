#include "TwoDArray.h"

// Default constructor
TwoDArray::TwoDArray()
{
    m_dim1 = 0;
    m_dim2 = 0;
    m_data = nullptr;
}

// Constructor
TwoDArray::TwoDArray(const int dim1, const int dim2)
{
    std::cout << "\nConstructor called\n";
    assert(dim1 > 0);
    assert(dim2 > 0);
    m_dim1 = dim1;
    m_dim2 = dim2;

    m_data = new int32_t[dim1*dim2] {0};
}

// Copy Constructor
TwoDArray::TwoDArray(const TwoDArray &other)
{  
    // Clean up current data
    if(m_data)
    {
        delete[] m_data;
    }
    m_dim1 = 0;
    m_dim2 = 0;

    // Deep Copy
    m_dim1 = other.m_dim1;
    m_dim2 = other.m_dim2;
    m_data = new int32_t[m_dim1 * m_dim2] {0};
    for(auto i=0; i<(other.m_dim1*other.m_dim2); i++)
    {
        m_data[i] = other.m_data[i];
    }
}

// Operator Overloading

// Overload cout
std::ostream& operator<<(std::ostream &out, TwoDArray &other)
{
    for(auto dim1=0; dim1<other.m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<other.m_dim2; dim2++)
        {
            out << other(dim1, dim2) << "    ";
        }
        out << "\n";
    }
    out << "\n";
    return out;
}

// Overload cin
std::istream& operator>>(std::istream &in, TwoDArray &other)
{
    for(auto dim1=0; dim1<other.m_dim1; dim1++)
    {
        std::cout << "\nEnter " << other.m_dim2 << " elements for Row " << dim1 << "\n";
        for(auto dim2=0; dim2<other.m_dim2; dim2++)
        {
            in >> other(dim1, dim2);
        }
    }
    return in;
}
    
// Binary Arithmetic operators to do elementwise operation
TwoDArray& TwoDArray::operator+(TwoDArray& other)
{
    validateShapes(other);
    TwoDArray *result = new TwoDArray(m_dim1, m_dim2);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*result)(dim1, dim2) = (*this)(dim1, dim2) + other(dim1, dim2);
        }
    }
    return *result;
}

TwoDArray& TwoDArray::operator+=(TwoDArray& other)
{
    validateShapes(other);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*this)(dim1, dim2) = (*this)(dim1, dim2) + other(dim1, dim2);
        }
    }
    return (*this);
}

TwoDArray& TwoDArray::operator-(TwoDArray& other)
{
    validateShapes(other);
    TwoDArray *result = new TwoDArray(m_dim1, m_dim2);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*result)(dim1, dim2) = (*this)(dim1, dim2) - other(dim1, dim2);
        }
    }
    return (*result);
}

TwoDArray& TwoDArray::operator-=(TwoDArray& other)
{
    validateShapes(other);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*this)(dim1, dim2) = (*this)(dim1, dim2) - other(dim1, dim2);
        }
    }
    return (*this);
}

TwoDArray& TwoDArray::operator*(TwoDArray& other)
{
    validateShapes(other);
    TwoDArray *result = new TwoDArray(m_dim1, m_dim2);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*result)(dim1, dim2) = (*this)(dim1, dim2) * other(dim1, dim2);
        }
    }
    return (*result);
}

TwoDArray& TwoDArray::operator*=(TwoDArray& other)
{
    validateShapes(other);

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            (*this)(dim1, dim2) = (*this)(dim1, dim2) * other(dim1, dim2);
        }
    }
    return (*this);
}

// Elementwise comparison operations
bool TwoDArray::operator==(TwoDArray &other)
{
    validateShapes(other);
    bool result = true;

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            if((*this)(dim1, dim2) != other(dim1, dim2))
            {
                result = false;
                break;
            }
        }
        if (result == false) {
            break;
        }
    }
    return result;
}

bool TwoDArray::operator>=(TwoDArray &other) 
{
validateShapes(other);
    bool result = true;

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            if((*this)(dim1, dim2) < other(dim1, dim2))
            {
                result = false;
                break;
            }
        }
        if (result == false) {
            break;
        }
    }
    return result;
}

bool TwoDArray::operator<=(TwoDArray &other) 
{
validateShapes(other);
    bool result = true;

    for(auto dim1=0; dim1<m_dim1; dim1++)
    {
        for(auto dim2=0; dim2<m_dim2; dim2++)
        {
            if((*this)(dim1, dim2) > other(dim1, dim2))
            {
                result = false;
                break;
            }
        }
        if (result == false) {
            break;
        }
    }
    return result;
}

// Overload paranthesis for indexing. Return reference so it can be assigned
int32_t& TwoDArray::operator()(int index1, int index2)
{
    return m_data[m_dim2*index1 + index2];
}

// Assigment operator
TwoDArray& TwoDArray::operator=(TwoDArray &other)
{
    if(this == &other) {
        return (*this);
    }

    // Clean up existing memory
    m_dim1 = 0;
    m_dim2 = 0;
    if(m_data)
    {
        delete[] m_data;
    }

    // Deep copy
    m_dim1 = other.m_dim1;
    m_dim2 = other.m_dim2;
    m_data = new int32_t[m_dim1 * m_dim2]{0};
    for(auto i=0; i<(m_dim1 * m_dim2); i++)
    {
        m_data[i] = other.m_data[i];
    }
    return (*this);
}

// Destructor
TwoDArray::~TwoDArray()
{
    delete[] m_data;
    m_dim1 = 0;
    m_dim2 = 0;
}

// Utility function
void TwoDArray::validateShapes(TwoDArray& other)
{
    if(m_dim1 != other.m_dim1 || m_dim2 != other.m_dim2)
    {
        std::cout << "ERROR: Shape mismatch. (" << m_dim1 << "," << m_dim2 
            << ") versus (" << other.m_dim1 << "," << other.m_dim2 << ")\n";
        exit(-1);
    }
}
