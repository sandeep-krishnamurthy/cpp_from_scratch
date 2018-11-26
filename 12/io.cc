#include <iostream>
#include <cstring>

using namespace std;

double read_double()
{
    while(true)
    {
        double input;
        cout << "\nEnter a numeric value - ";
        cin >> input;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "\nERROR: Please enter a numeric value. Ex: 8789";
        } else {
            cin.ignore(32767, '\n');
            return input;
        }
    }
}

char read_char(char* valid_char)
{
    while(true)
    {
        char input;
        cout << "Enter your choice : ";
        int len = strlen(valid_char);
        for(int index=0; index<len; index++)
        {
            cout << valid_char[index] << "\t";
        }
        cout << endl;
        cin >> input;

        if(cin.fail())
        {
            cin.clear();
            cout << "\nERROR: Please enter a valid choice.";
        } 
        
        bool valid_choice = false;
        for(int index=0; index<len; index++)
        {
            if (valid_char[index] == input)
            {
                valid_choice = true;
                break;
            }
        }
        cin.ignore(32767, '\n');
        if (valid_choice)
        {
            return input;
        } else {
            cout << "\nERROR: Please enter a valid choice.";
        }
    }
}