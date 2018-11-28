#ifndef TWODARRAY_H
#define TWODARRAY_H

#include <vector>

class TwoDArray {
    private:
        std::vector<std::vector<int> > *m_data;
    
    public:
        TwoDArray();
        TwoDArray(const std::vector<std::vector<int> > &data);
        TwoDArray(const int dim1, const int dim2);
        ~TwoDArray();

        int getAt(const int dim1, const int dim2);
        void setAt(const int dim1, const int dim2, const int value);
        void print();
};

#endif