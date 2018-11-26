#include <iostream>
#include <utility>

using namespace std;

int main()
{
    int input_array[] = {99, 98, 97, 96, 95, 94, 93};
    int length = sizeof(input_array) / sizeof(input_array[0]);

    for (int i=0; i<length; i++)
    {
        bool is_sorted = true;
        for (int j=0; j<(length-i-1); j++)
        {
            if (input_array[j] > input_array[j+1])
            {
                swap(input_array[j], input_array[j+1]);
                is_sorted = false;
            }
        }
        if (is_sorted)
            break;
    }
    for (int i=0; i<length; i++)
        cout << input_array[i] << endl;
}