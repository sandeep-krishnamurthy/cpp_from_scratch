#include <iostream>
using namespace std;

int main()
{
    int input;

    cout << "Enter a positive number greater than 0 - ";
    cin >> input;
    cout << endl;

    for(int outer=input; outer > 0; outer--)
    {
        for(int index=outer; index > 0; index--){
            cout << index << "  ";
        }
        cout << endl;
    }
}