#include <iostream>
#include "TwoDArray.h"

int main() {
    TwoDArray twoDArray_1;
    std::cout << "First Array\n";
    twoDArray_1.print();

    TwoDArray twoDArray_2(2, 3);
    twoDArray_2.setAt(0,0, 0);
    twoDArray_2.setAt(0,1, 1);
    twoDArray_2.setAt(0,2, 2);
    twoDArray_2.setAt(1,0, 3);
    twoDArray_2.setAt(1,1, 4);
    twoDArray_2.setAt(1,2, 5);
    std::cout << "Second Array\n";
    twoDArray_2.print();

    std::vector<std::vector<int> > copy_vector;
    std::vector<int> row1{0, 1, 2};
    std::vector<int> row2{7, 8, 9};
    copy_vector.push_back(row1);
    copy_vector.push_back(row2);
    TwoDArray twoDArray_3(copy_vector);
    std::cout << "Third Array\n";
    twoDArray_3.print();

    std::cout << "Getting value at 0,2 from second array. Expected - 2. Actual - " << twoDArray_2.getAt(0, 2);
    std::cout << std::endl;
}