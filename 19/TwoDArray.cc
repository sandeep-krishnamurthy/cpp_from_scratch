#include <iostream>

#include "TwoDArray.h"

TwoDArray::TwoDArray() {
    this->m_data = new std::vector<std::vector<int> >();
}

TwoDArray::TwoDArray(const std::vector<std::vector<int> >& data) {
    this->m_data = new std::vector<std::vector<int> >(data.size());
    for(std::vector<int> row : data) {
        this->m_data->push_back(row);
    }
}

TwoDArray::TwoDArray(const int dim1, const int dim2) {
    this->m_data = new std::vector<std::vector<int> >();
    this->m_data->resize(dim1);
    for(std::vector<int> &row : *(this->m_data)) {
        row.resize(dim2);
    }
}

TwoDArray::~TwoDArray() {
    delete this->m_data;
}

int TwoDArray::getAt(const int dim1, const int dim2) {
    return this->m_data->at(dim1).at(dim2);
}

void TwoDArray::setAt(const int dim1, const int dim2, const int value) {
    this->m_data->at(dim1).at(dim2) = value;
}

void TwoDArray::print() {
    for(std::vector<int> &row : *(this->m_data)) {
        for(int data : row) {
            std::cout << data << "  ";
        }
        std::cout << std::endl;
    }
}