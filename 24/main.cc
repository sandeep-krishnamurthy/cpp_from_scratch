#include "TwoDArray.h"

using namespace std;

int main()
{
    int a1_dim1, a1_dim2, a2_dim1, a2_dim2;

    // Create array 1
    cout << "\nEnter dim1 of Array 1 - ";
    cin >> a1_dim1;

    cout << "\nEnter dim2 of Array 1 - ";
    cin >> a1_dim2;

    TwoDArray array1(a1_dim1, a1_dim2);
    
    cout << "\nEnter data for Array 1\n";
    cin >> array1;

    cout << "\nArray1\n";
    cout << array1;
    
    // Create array 2
    cout << "\nEnter dim1 of Array 2 - ";
    cin >> a2_dim1;

    cout << "\nEnter dim2 of Array 2 - ";
    cin >> a2_dim2;

    TwoDArray array2(a2_dim1, a2_dim2);
    
    cout << "\nEnter data for Array 2\n";
    cin >> array2;

    cout << "\nArray2\n";
    cout << array2;

    // Indexing
    cout << "\nArray1(1, 1) - " << array1(1, 1) << "\n";
    // Comparison
    cout << boolalpha;
    cout << "\nIs array1 == array2 - " << (array1 == array2) << "\n";
    cout << "\nIs array1 <= array2 - " << (array1 <= array2) << "\n";

    // In place operation.
    array1 += array2;
    cout << "\narray1 += array2 is\n";
    cout << array1;

    array1 -= array2;
    cout << "\narray1 -= array2 is\n";
    cout << array1;

    // Create array 4 and copy from array 3
    TwoDArray array3;
    array3 = array1;
    cout << "\nCopied Array1 to Array3\n";
    cout << "\nArray3\n";
    cout << array3;

    // Binary operations
    TwoDArray array4;
    array4 = array1 + array2;
    cout << "\nArray4 = Array1 + Array2\n";
    cout << array4;
}